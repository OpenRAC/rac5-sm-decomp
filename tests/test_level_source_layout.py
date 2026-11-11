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


def row(module: str, source: str) -> dict[str, str]:
    return {"module": module, "offset": "0x00000100", "size": "8", "source": source}


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

    def test_repository_layout_is_exact(self) -> None:
        with contextlib.redirect_stdout(io.StringIO()) as output:
            self.assertEqual(layout.main([]), 0)
        self.assertIn("level source layout:", output.getvalue())


if __name__ == "__main__":
    unittest.main()
