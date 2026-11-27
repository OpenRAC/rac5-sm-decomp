/* LEVEL_07:0x0D8FE8 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_0021A954;
extern void func_01BE30(unsigned int arg);
void func_0D8FE8(unsigned int level) { if (D_0021A954 == 0 && level != 0) func_01BE30(level); D_0021A954 = level < 2 ? 2 : level; }
