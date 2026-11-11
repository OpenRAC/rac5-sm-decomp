/* LEVEL_01:0x0287D0 -- returns 1 when value appears in a four-entry table at the object base plus 0x24. */
extern char D_00230F40[];

int func_0287D0(int value){ unsigned int index = 0; char *base = D_00230F40; int *entry = (int *)(base + 0x24);
 while (index < 4) { index++; if (value == *entry) return 1; entry++; } return 0; }
