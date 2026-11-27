/* LEVEL_23:0x0CDDB8 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001D9A54;
extern void func_01A280(unsigned int arg);
void func_0CDDB8(unsigned int level) { if (D_001D9A54 == 0 && level != 0) func_01A280(level); D_001D9A54 = level < 2 ? 2 : level; }
