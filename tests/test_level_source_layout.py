"""Level body sources sit in one directory per module, or in shared/."""

from __future__ import annotations

import contextlib
import hashlib
import io
import json
import sys
import tempfile
import unittest
from pathlib import Path
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tools"))
import level_source_layout as layout  # noqa: E402


def row(module: str, source: str, offset: str = "0x00000100",
        size: str = "8") -> dict[str, str]:
    return {"module": module, "offset": offset, "size": size, "source": source}


def twin(module: str, offset: int, symbol: str, size: int = 8) -> dict[str, str]:
    return {"module": module, "offset": f"0x{offset:06X}", "size": str(size),
            "symbol": symbol, "boot_address": "0x01E70000"}


class LevelSourceLayoutTest(unittest.TestCase):
    def test_directories_follow_the_level_names(self) -> None:
        self.assertEqual(layout.MODULE_DIRS["FRONTEND.REL"], "frontend")
        self.assertEqual(layout.MODULE_DIRS["LEVEL_01.REL"], "01_pokitaru")
        self.assertEqual(layout.MODULE_DIRS["LEVEL_15.REL"], "15_giant_clank_metalis")
        self.assertEqual(layout.COPIES, {"LEVEL_21.REL": "LEVEL_15.REL"})
        self.assertNotIn("LEVEL_21.REL", layout.MODULE_DIRS)
        self.assertEqual(len(layout.MODULE_DIRS), 20)
        self.assertEqual(len(layout.SOURCE_DIRS), 21)

    def test_home_of_one_module_copies_and_several_modules(self) -> None:
        self.assertEqual(layout.home({"LEVEL_02.REL"}), "02_rykan_v")
        self.assertEqual(layout.home({"LEVEL_21.REL"}), "15_giant_clank_metalis")
        self.assertEqual(layout.home({"LEVEL_15.REL", "LEVEL_21.REL"}),
                         "15_giant_clank_metalis")
        self.assertEqual(layout.home({"FRONTEND.REL", "LEVEL_01.REL"}), "shared")

    def test_misplaced_sources_and_repeated_names(self) -> None:
        rows = [row("LEVEL_01.REL", "src/levels/01_pokitaru/LEVEL_01_000100.c"),
                row("LEVEL_01.REL", "src/levels/01_pokitaru/LEVEL_01_000200.c"),
                row("LEVEL_02.REL", "src/levels/01_pokitaru/LEVEL_01_000200.c"),
                row("LEVEL_03.REL", "src/levels/shared/LEVEL_03_000300.c"),
                row("LEVEL_04.REL", "src/levels/bodies/LEVEL_04_000400.c")]
        self.assertEqual(layout.misplaced(rows), {
            "src/levels/01_pokitaru/LEVEL_01_000200.c": "src/levels/shared/LEVEL_01_000200.c",
            "src/levels/bodies/LEVEL_04_000400.c": "src/levels/04_metalis/LEVEL_04_000400.c",
            "src/levels/shared/LEVEL_03_000300.c": "src/levels/03_kalidon/LEVEL_03_000300.c"})
        self.assertEqual(layout.repeated_names(rows), [])
        rows.append(row("LEVEL_05.REL", "src/levels/05_medical_outpost/LEVEL_04_000400.c"))
        self.assertEqual(layout.repeated_names(rows), ["LEVEL_04_000400.c"])

    def test_original_file_folders(self) -> None:
        self.assertTrue(layout.valid_source("src/levels/shared/CORE/Breakable/X.c"))
        self.assertTrue(layout.valid_source("src/levels/01_pokitaru/X.c"))
        self.assertFalse(layout.valid_source("src/levels/bodies/X.c"))
        self.assertFalse(layout.valid_source("src/levels/shared/CORE/x-y/X.c"))
        cited = {("LEVEL_01.REL", 0x100): "CORE/Breakable.cpp",
                 ("LEVEL_15.REL", 0x200): "CORE/level.cpp",
                 ("LEVEL_02.REL", 0x300): "CORE/a.cpp", ("LEVEL_03.REL", 0x300): "CORE/b.cpp"}

        def labels(module: str, offset: int) -> tuple[str, str]:
            return "", cited.get((module, offset), "")

        rows = [row("LEVEL_01.REL", "src/levels/01_pokitaru/LEVEL_01_000100.c"),
                row("LEVEL_02.REL", "src/levels/01_pokitaru/LEVEL_01_000100.c", "0x400"),
                # LEVEL_21.REL repeats LEVEL_15.REL: the same evidence, in decimal.
                row("LEVEL_21.REL", "src/levels/15_giant_clank_metalis/LEVEL_21_000200.c", "512"),
                row("LEVEL_02.REL", "src/levels/shared/LEVEL_02_000300.c", "0x300"),
                row("LEVEL_03.REL", "src/levels/shared/LEVEL_02_000300.c", "0x300")]
        folders = layout.original_folders(rows, labels)
        self.assertEqual(folders, {
            "src/levels/01_pokitaru/LEVEL_01_000100.c": "CORE/Breakable",
            "src/levels/15_giant_clank_metalis/LEVEL_21_000200.c": "CORE/level"})
        self.assertEqual(layout.misplaced(rows, folders), {
            "src/levels/01_pokitaru/LEVEL_01_000100.c":
                "src/levels/shared/CORE/Breakable/LEVEL_01_000100.c",
            "src/levels/15_giant_clank_metalis/LEVEL_21_000200.c":
                "src/levels/15_giant_clank_metalis/CORE/level/LEVEL_21_000200.c"})

    def test_twin_sources_take_the_boot_symbol(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            sources = {
                "src/levels/frontend/FRONTEND_004870.c":
                    "/* FRONTEND:0x004870 */\nvoid func_006120(int);\n\n"
                    "void func_004870(void)\n{\n    func_006120(0);\n}\n",
                "src/levels/01_pokitaru/LEVEL_01_001000.c":
                    "void func_001000(unsigned int id)\n{\n}\n",
                "src/levels/02_rykan_v/func_00001000.c":
                    "void func_00001000(unsigned int id)\n{\n}\n",
                "src/levels/03_kalidon/LEVEL_03_000500.c":
                    "void func_000500(void)\n{\n}\nvoid func_000508(void)\n{\n}\n",
                "src/levels/04_metalis/LEVEL_04_000600.c":
                    "void func_000600(void)\n{\n}\n"}
            for path, text in sources.items():
                (root / path).parent.mkdir(parents=True, exist_ok=True)
                (root / path).write_text(text, encoding="utf-8")
            (root / "config/levels").mkdir(parents=True)
            lines = ["module\toffset\tsize\tsource",
                     "FRONTEND.REL\t0x004870\t8\tsrc/levels/frontend/FRONTEND_004870.c",
                     "LEVEL_01.REL\t0x001000\t8\tsrc/levels/01_pokitaru/LEVEL_01_001000.c",
                     "LEVEL_02.REL\t4096\t8\tsrc/levels/02_rykan_v/func_00001000.c",
                     "LEVEL_03.REL\t0x000500\t8\tsrc/levels/03_kalidon/LEVEL_03_000500.c",
                     "LEVEL_04.REL\t0x000600\t8\tsrc/levels/04_metalis/LEVEL_04_000600.c"]
            bodies = root / "config/levels/bodies.tsv"
            bodies.write_text("\n".join(lines) + "\n", encoding="utf-8")
            controls = root / "config/levels/family_identity_controls.tsv"
            controls.write_text("family_id\tmodule\tstart\tsource\n", encoding="utf-8")
            summary = root / "config/levels/family_identity_summary.json"
            summary.write_text(json.dumps({"controls_sha256": hashlib.sha256(
                controls.read_bytes()).hexdigest(), "families": []}, indent=2) + "\n",
                encoding="utf-8")
            names = [twin("FRONTEND.REL", 0x4870, "DISPLAY_CommitView__Fv"),
                     twin("LEVEL_01.REL", 0x1000, "CAMERA_SetCurrentCamera__FUi"),
                     twin("LEVEL_02.REL", 0x1000, "CAMERA_SetCurrentCamera__FUi"),
                     twin("LEVEL_03.REL", 0x500, "Two__Fv"),
                     twin("LEVEL_04.REL", 0x600, "Longer__Fv", 12)]
            with (patch.object(layout, "ROOT", root),
                  patch.object(layout, "FAMILY_CONTROLS", controls),
                  patch.object(layout, "FAMILY_SUMMARY", summary)):
                rows = layout.records(bodies)
                renames = layout.twin_names(rows, names)
                # Two global definitions, or a twin of another size, keep their names.
                self.assertEqual(renames, {
                    "src/levels/01_pokitaru/LEVEL_01_001000.c": (
                        "CAMERA_SetCurrentCamera__FUi",
                        "src/levels/01_pokitaru/CAMERA_SetCurrentCamera__FUi_LEVEL_01.c"),
                    "src/levels/02_rykan_v/func_00001000.c": (
                        "CAMERA_SetCurrentCamera__FUi",
                        "src/levels/02_rykan_v/CAMERA_SetCurrentCamera__FUi_LEVEL_02.c"),
                    "src/levels/frontend/FRONTEND_004870.c": (
                        "DISPLAY_CommitView__Fv",
                        "src/levels/frontend/DISPLAY_CommitView__Fv.c")})
                with contextlib.redirect_stdout(io.StringIO()):
                    layout.rename_twins(renames)
                self.assertEqual(layout.twin_names(layout.records(bodies), names), {})
            renamed = (root / "src/levels/frontend/DISPLAY_CommitView__Fv.c").read_text(
                encoding="utf-8")
            # The definition takes the symbol; the call keeps its address name.
            self.assertIn("void DISPLAY_CommitView__Fv(void)", renamed)
            self.assertIn("func_006120(0);", renamed)
            self.assertFalse((root / "src/levels/frontend/FRONTEND_004870.c").exists())
            self.assertIn("src/levels/02_rykan_v/CAMERA_SetCurrentCamera__FUi_LEVEL_02.c",
                          bodies.read_text(encoding="utf-8"))

    def test_apply_moves_sources_and_rewrites_references(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            old, new = ("src/levels/bodies/LEVEL_04_000400.c",
                        "src/levels/04_metalis/LEVEL_04_000400.c")
            (root / "src/levels/bodies").mkdir(parents=True)
            (root / old).write_text("void f(void)\n{\n}\n", encoding="utf-8")
            (root / "config/levels").mkdir(parents=True)
            (root / "config/levels/bodies.tsv").write_text(
                f"module\toffset\tsize\tsource\nLEVEL_04.REL\t0x00000400\t8\t{old}\n",
                encoding="utf-8")
            (root / "config/cflags.txt").write_text(f"{old}  -fno-gcse\n", encoding="utf-8")
            (root / "docs").mkdir()
            (root / "docs/note.md").write_text(f"See `{old}`; `{old}x` stays.\n",
                                               encoding="utf-8")
            controls = root / "config/levels/family_identity_controls.tsv"
            controls.write_text(f"source\n{old}\n", encoding="utf-8")
            summary = root / "config/levels/family_identity_summary.json"
            summary.write_text(json.dumps({"controls_sha256": hashlib.sha256(
                controls.read_bytes()).hexdigest()}, indent=2) + "\n", encoding="utf-8")
            with (patch.object(layout, "ROOT", root),
                  patch.object(layout, "FAMILY_CONTROLS", controls),
                  patch.object(layout, "FAMILY_SUMMARY", summary)):
                moves = layout.misplaced(layout.records(root / "config/levels/bodies.tsv"))
                self.assertEqual(moves, {old: new})
                with contextlib.redirect_stdout(io.StringIO()):
                    layout.apply(moves)
                self.assertEqual(layout.misplaced(
                    layout.records(root / "config/levels/bodies.tsv")), {})
            self.assertTrue((root / new).is_file())
            self.assertFalse((root / "src/levels/bodies").exists())
            self.assertEqual((root / "config/cflags.txt").read_text(encoding="utf-8"),
                             f"{new}  -fno-gcse\n")
            self.assertEqual((root / "docs/note.md").read_text(encoding="utf-8"),
                             f"See `{new}`; `{old}x` stays.\n")
            self.assertEqual(json.loads(summary.read_text(encoding="utf-8"))["controls_sha256"],
                             hashlib.sha256(controls.read_bytes()).hexdigest())

    def test_main_moves_staged_sources_before_checking_names(self) -> None:
        with tempfile.TemporaryDirectory() as directory:
            root = Path(directory)
            staged, home = ("src/levels/bodies/LEVEL_04_000400.c",
                            "src/levels/04_metalis/LEVEL_04_000400.c")
            (root / "src/levels/bodies").mkdir(parents=True)
            (root / staged).write_text("void func_000400(void)\n{\n}\n", encoding="utf-8")
            (root / "config/levels").mkdir(parents=True)
            bodies = root / "config/levels/bodies.tsv"
            bodies.write_text(f"module\toffset\tsize\tsource\nLEVEL_04.REL\t0x000400\t8\t{staged}\n",
                              encoding="utf-8")
            controls = root / "config/levels/family_identity_controls.tsv"
            controls.write_text("family_id\tmodule\tstart\tsource\n", encoding="utf-8")
            summary = root / "config/levels/family_identity_summary.json"
            summary.write_text(json.dumps({"controls_sha256": hashlib.sha256(
                controls.read_bytes()).hexdigest(), "families": []}, indent=2) + "\n",
                encoding="utf-8")
            with (patch.object(layout, "ROOT", root), patch.object(layout, "BODIES", bodies),
                  patch.object(layout, "FAMILY_CONTROLS", controls),
                  patch.object(layout, "FAMILY_SUMMARY", summary),
                  patch.object(layout.level_function_names, "check", return_value=([], []))):
                with contextlib.redirect_stdout(io.StringIO()) as output:
                    self.assertEqual(layout.main([]), 1)
                self.assertIn(f"{staged} -> {home}", output.getvalue())
                with contextlib.redirect_stdout(io.StringIO()):
                    self.assertEqual(layout.main(["--apply"]), 0)
            self.assertTrue((root / home).is_file())
            self.assertIn(home, bodies.read_text(encoding="utf-8"))

    def test_repository_layout_is_exact(self) -> None:
        with contextlib.redirect_stdout(io.StringIO()) as output:
            self.assertEqual(layout.main([]), 0)
        self.assertIn("level source layout:", output.getvalue())


if __name__ == "__main__":
    unittest.main()
