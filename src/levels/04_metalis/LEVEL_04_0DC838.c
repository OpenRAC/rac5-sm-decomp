/* LEVEL_04:0x0DC838 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_0021FB14;
extern void func_01B3F0(unsigned int arg);
void func_0DC838(unsigned int level) { if (D_0021FB14 == 0 && level != 0) func_01B3F0(level); D_0021FB14 = level < 2 ? 2 : level; }
