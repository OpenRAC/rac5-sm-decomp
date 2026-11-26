/* LEVEL_08:0x0E1F48 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_0024F514;
extern void func_01C0E8(unsigned int arg);
void func_0E1F48(unsigned int level) { if (D_0024F514 == 0 && level != 0) func_01C0E8(level); D_0024F514 = level < 2 ? 2 : level; }
