/* LEVEL_10:0x0D83C8 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_0020F654;
extern void func_01ADF0(unsigned int arg);
void func_0D83C8(unsigned int level) { if (D_0020F654 == 0 && level != 0) func_01ADF0(level); D_0020F654 = level < 2 ? 2 : level; }
