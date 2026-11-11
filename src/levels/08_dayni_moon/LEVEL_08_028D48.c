/* LEVEL_08:0x028D48 -- placement copy of LEVEL_01_0287D0.c: returns 1 when value appears in a four-entry table at the object base plus 0x24. */
extern char D_002801C0[];

int func_028D48(int value){ unsigned int index = 0; char *base = D_002801C0; int *entry = (int *)(base + 0x24);
 while (index < 4) { index++; if (value == *entry) return 1; entry++; } return 0; }
