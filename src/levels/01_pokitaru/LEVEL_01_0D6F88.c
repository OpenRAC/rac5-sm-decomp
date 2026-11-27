/* LEVEL_01:0x0D6F88 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_00206654;
extern void func_01B770(unsigned int arg);
void func_0D6F88(unsigned int level) { if (D_00206654 == 0 && level != 0) func_01B770(level); D_00206654 = level < 2 ? 2 : level; }
