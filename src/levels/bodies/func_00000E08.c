/* LEVEL_04:0xE08 -- select record `index` of a 0x118-byte table into a global. */
extern char D_002460E0[];
extern void *D_002083C8;

void func_00000E08(int index) { D_002083C8 = D_002460E0 + index * 0x118; }
