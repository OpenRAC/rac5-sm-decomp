/* LEVEL_02:0x0DD918 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_0021B614;
extern void func_01C0D0(unsigned int arg);
void func_0DD918(unsigned int level) { if (D_0021B614 == 0 && level != 0) func_01C0D0(level); D_0021B614 = level < 2 ? 2 : level; }
