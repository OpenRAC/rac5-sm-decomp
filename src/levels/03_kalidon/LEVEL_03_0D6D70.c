/* LEVEL_03:0x0D6D70 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_0021ECD4;
extern void func_01B4D8(unsigned int arg);
void func_0D6D70(unsigned int level) { if (D_0021ECD4 == 0 && level != 0) func_01B4D8(level); D_0021ECD4 = level < 2 ? 2 : level; }
