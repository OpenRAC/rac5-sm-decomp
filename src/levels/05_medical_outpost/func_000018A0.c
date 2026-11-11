/* LEVEL_05:0x18A0 -- select record `index` of a 0x1CC0-byte table into a global. */
extern char D_00217880[];
extern void *D_001DE5D4;

void func_000018A0(int index) { D_001DE5D4 = D_00217880 + index * 0x1CC0; }
