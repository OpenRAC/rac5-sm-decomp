"""Display names of the SNR2 level modules (progress report, source layout)."""

from __future__ import annotations

LEVEL_NAMES: dict[str, tuple[str, str]] = {
    "FRONTEND.REL": ("frontend", "Frontend (FRONTEND.REL)"),
    "LEVEL_01.REL": ("level01_pokitaru", "Level 01: Pokitaru (Jowai Resort)"),
    "LEVEL_02.REL": ("level02_rykan_v", "Level 02: Rykan V (Lava Fields)"),
    "LEVEL_03.REL": ("level03_kalidon", "Level 03: Kalidon (Cerullean Sector)"),
    "LEVEL_04.REL": ("level04_metalis", "Level 04: Metalis (Junkyard)"),
    "LEVEL_05.REL": ("level05_medical_outpost", "Level 05: Medical Outpost Omega"),
    "LEVEL_06.REL": ("level06_challax", "Level 06: Challax (Technomite City)"),
    "LEVEL_07.REL": ("level07_dreamtime", "Level 07: Pokitaru Dreamtime"),
    "LEVEL_08.REL": ("level08_dayni_moon", "Level 08: Dayni Moon (Agricultural Planet)"),
    "LEVEL_09.REL": ("level09_inside_clank", "Level 09: Inside Clank"),
    "LEVEL_10.REL": ("level10_quodrona", "Level 10: Quodrona (Otto-Matic Factory)"),
    "LEVEL_15.REL": ("level15_giant_clank_metalis", "Level 15: Giant Clank (Metalis)"),
    "LEVEL_16.REL": ("level16_multiplayer_01", "Level 16: Multiplayer (Map 1)"),
    "LEVEL_17.REL": ("level17_multiplayer_02", "Level 17: Multiplayer (Map 2)"),
    "LEVEL_18.REL": ("level18_multiplayer_03", "Level 18: Multiplayer (Map 3)"),
    "LEVEL_19.REL": ("level19_multiplayer_04", "Level 19: Multiplayer (Map 4)"),
    "LEVEL_20.REL": ("level20_multiplayer_lobby", "Level 20: Multiplayer Lobby"),
    "LEVEL_21.REL": ("level21_giant_clank_space", "Level 21: Giant Clank (Space)"),
    "LEVEL_22.REL": ("level22_skyboard_kalidon", "Level 22: Skyboard Race (Kalidon)"),
    "LEVEL_23.REL": ("level23_skyboard_challax", "Level 23: Skyboard Race (Challax)"),
    "LEVEL_24.REL": ("level24_treehouse", "Level 24: High Impact Games Treehouse"),
}
