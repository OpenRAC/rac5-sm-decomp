# Level data tables: gadget records, attack damage, armour defence

Three data tables of the level modules can be identified from their content, and the accepted C sources name
their entry types after them. The names describe what the bytes are. The reference symbols stay as they are:
each table is still declared under its `D_<address>` name, and its objects are unchanged.

Field meanings follow PSP reference values shared by ✦ Jacky Pendragon ✦, from a scan of the PSP release of
the game. Every field named in a source was checked against the PS2 modules and against the code that reads
it. The PSP values themselves are not part of this repository.

## Gadget records: `GadgetRecord`, 25 x 0x58 bytes

| Offset | Field | PS2 evidence |
|---|---|---|
| +0x00 | internal name | relocated pointers to the strings `blaster`, `blitzgun`, ... `boxbreaker` at stride 0x58 |
| +0x04 | `type`: 1 gadget, 2 weapon, 3 item | slots 1..15 hold 2 (`blaster`..`ryno`), `hypershot`..`pda` hold 1, `shrinkray`..`boxbreaker` hold 3. `func_024500` tests `== 2`, `func_0245C8` tests `== 3` |
| +0x10 | eight stat block pointers | one per upgrade level: their maximum ammunition per level and their prices match the PSP values for every weapon |
| +0x3C | `level`: upgrade level 0..7 | `func_024468` stores a value checked `< 8`. `func_024560` tests `>= 4` |

The callers bound the slot by 25 (`< 25`, `< 0x19`). The front end has its own copy of the table.

## Attack damage table: `DamageInfo`, 259 x 16 bytes

`{kind, damage, element, hitClass}`. Every module that has the table holds 259 entries. The readers switch on
`kind`: kind 2 halves the damage. They then pass `damage`, `element` and `hitClass` to the target's
damage handler. Some sources view the table as a `DamageTable` holding one fixed entry (`entry20`,
`entry83`, `entry239`, `entry249`).

## Armour defence: eight floats

The damage reduction of each armour set: set 0 is no armour (0.0), and the values rise to set 7. The reader
returns zero past the eighth set.

## Addresses

| Module | Gadget records | Damage table | Armour defence |
|---|---|---|---|
| FRONTEND.REL | D_0002A470 | - | - |
| LEVEL_01.REL | D_001F35D8 | D_00218D58 | D_0020B4B0 |
| LEVEL_02.REL | D_00208258 | D_0022DCD8 | D_00220430 |
| LEVEL_03.REL | D_0020BC58 | D_00231C58 | D_002243B0 |
| LEVEL_04.REL | D_0020C758 | D_002326D8 | D_00224E30 |
| LEVEL_05.REL | D_001E2958 | D_00207C58 | D_001FA3B0 |
| LEVEL_06.REL | D_001E24D8 | D_00207BD8 | D_001FA330 |
| LEVEL_07.REL | D_002078D8 | D_0022DA58 | D_002201B0 |
| LEVEL_08.REL | D_0023C158 | D_002629D8 | D_00255130 |
| LEVEL_09.REL | D_001DD3D8 | D_00202958 | D_001F50B0 |
| LEVEL_10.REL | D_001FC5D8 | D_00221CE8 | D_00214430 |
| LEVEL_15.REL, LEVEL_21.REL | D_00148258 | D_0016D4D8 | D_0015FC30 |
| LEVEL_16.REL | - | - | D_001C0430 |
| LEVEL_17.REL | - | - | D_001B38B0 |
| LEVEL_18.REL | - | - | D_001C19B0 |
| LEVEL_19.REL | - | - | D_001C1630 |
| LEVEL_20.REL | - | - | D_001214B0 |
| LEVEL_22.REL | D_00152958 | D_001761D8 | D_00168930 |
| LEVEL_23.REL | D_001C69D8 | D_001EBED8 | D_001DE630 |
| LEVEL_24.REL | D_001C4258 | D_001E9AD8 | D_001DC230 |

## Not carried over

The PSP hero layout does not hold for the PS2 objects at the same offsets. The PS2 object that has fields at
+0x998 and +0x99C calls them as function pointers, whereas the PSP layout puts weapon slot numbers there. No
hero field is named until a PS2 anchor for the hero is found.
