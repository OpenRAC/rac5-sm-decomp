/* LEVEL_04:0x16A8 -- select record `index` of a 0x1CC0-byte table into a global. */
extern char D_00246380[];
extern void *D_002083D4;

void func_000016A8(int index) { D_002083D4 = D_00246380 + index * 0x1CC0; }
