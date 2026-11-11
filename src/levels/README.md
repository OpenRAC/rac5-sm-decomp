# Level sources

The level C sources are grouped the way the Ratchet & Clank and Going
Commando decompilations group theirs: one directory per level module and a
`shared/` directory for code that several modules link. Size Matters ships its
levels as SNR2 modules, so a directory stands for one `*.REL` module.

| Directory | Module | Level |
| --- | --- | --- |
| [`frontend/`](frontend) | `FRONTEND.REL` | Frontend menus |
| [`01_pokitaru/`](01_pokitaru) | `LEVEL_01.REL` | Pokitaru (Jowai Resort) |
| [`02_rykan_v/`](02_rykan_v) | `LEVEL_02.REL` | Rykan V (Lava Fields) |
| [`03_kalidon/`](03_kalidon) | `LEVEL_03.REL` | Kalidon (Cerullean Sector) |
| [`04_metalis/`](04_metalis) | `LEVEL_04.REL` | Metalis (Junkyard) |
| [`05_medical_outpost/`](05_medical_outpost) | `LEVEL_05.REL` | Medical Outpost Omega |
| [`06_challax/`](06_challax) | `LEVEL_06.REL` | Challax (Technomite City) |
| [`07_dreamtime/`](07_dreamtime) | `LEVEL_07.REL` | Pokitaru Dreamtime |
| [`08_dayni_moon/`](08_dayni_moon) | `LEVEL_08.REL` | Dayni Moon (Agricultural Planet) |
| [`09_inside_clank/`](09_inside_clank) | `LEVEL_09.REL` | Inside Clank |
| [`10_quodrona/`](10_quodrona) | `LEVEL_10.REL` | Quodrona (Otto-Matic Factory) |
| [`15_giant_clank_metalis/`](15_giant_clank_metalis) | `LEVEL_15.REL`, `LEVEL_21.REL` | Giant Clank (Metalis); `LEVEL_21.REL`, Giant Clank in space, is a byte-identical copy |
| [`16_multiplayer_01/`](16_multiplayer_01) | `LEVEL_16.REL` | Multiplayer (Map 1) |
| [`17_multiplayer_02/`](17_multiplayer_02) | `LEVEL_17.REL` | Multiplayer (Map 2) |
| [`18_multiplayer_03/`](18_multiplayer_03) | `LEVEL_18.REL` | Multiplayer (Map 3) |
| [`19_multiplayer_04/`](19_multiplayer_04) | `LEVEL_19.REL` | Multiplayer (Map 4) |
| [`20_multiplayer_lobby/`](20_multiplayer_lobby) | `LEVEL_20.REL` | Multiplayer Lobby |
| [`22_skyboard_kalidon/`](22_skyboard_kalidon) | `LEVEL_22.REL` | Skyboard Race (Kalidon) |
| [`23_skyboard_challax/`](23_skyboard_challax) | `LEVEL_23.REL` | Skyboard Race (Challax) |
| [`24_treehouse/`](24_treehouse) | `LEVEL_24.REL` | High Impact Games Treehouse |
| [`shared/`](shared) | two or more | sources linked in several modules |

The rule is mechanical. A body source lives in the directory of its module
when every placement of it in
[`config/levels/bodies.tsv`](../../config/levels/bodies.tsv) is in that
module, and in `shared/` when its placements span several modules. Placements
in `LEVEL_21.REL` count as `LEVEL_15.REL`'s because the two modules are
identical (`identical_full_interval_groups` in
`config/levels/function_inventory_summary.json`).

Most files are named `<MODULE>_<offset>.c` after the placement where the body
was first matched; a shared file keeps that first name, and the placement
table lists every module and offset where it links. File names are unique
across the tree because the level gate compiles each source by its name.
`func_00002F80.c` (frontend New Game initializer) and
`func_shared_zero_buffer.c` are checked by their own gates and are not in the
placement table.

`python tools/level_source_layout.py` checks the layout (the unit tests run
the same check) and `python tools/level_source_layout.py --apply` moves
misplaced sources and rewrites the tables and documents that name them.
