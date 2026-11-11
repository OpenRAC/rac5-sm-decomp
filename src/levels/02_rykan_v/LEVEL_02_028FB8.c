/* LEVEL_02:0x028FB8 -- placement copy of LEVEL_01_0287D0.c: returns 1 when value appears in a four-entry table at the object base plus 0x24. */
extern char D_00248440[];

int func_028FB8(int value){ unsigned int index = 0; char *base = D_00248440; int *entry = (int *)(base + 0x24);
 while (index < 4) { index++; if (value == *entry) return 1; entry++; } return 0; }
