/* LEVEL_05:0x1000 -- select record `index` of a 0x118-byte table into a global. */
extern char D_002175E0[];
extern void *D_001DE5C8;

void func_00001000(int index) { D_001DE5C8 = D_002175E0 + index * 0x118; }
