/* LEVEL_21:0x0B75C8 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_0015B2D4;
extern void func_017958(unsigned int arg);
void func_0B75C8(unsigned int level) { if (D_0015B2D4 == 0 && level != 0) func_017958(level); D_0015B2D4 = level < 2 ? 2 : level; }
