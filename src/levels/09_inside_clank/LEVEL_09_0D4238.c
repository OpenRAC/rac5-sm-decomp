/* LEVEL_09:0x0D4238 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001F0454;
extern void func_01AB60(unsigned int arg);
void func_0D4238(unsigned int level) { if (D_001F0454 == 0 && level != 0) func_01AB60(level); D_001F0454 = level < 2 ? 2 : level; }
