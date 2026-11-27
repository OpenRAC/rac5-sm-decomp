/* LEVEL_22:0x0C54C8 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001659D4;
extern void func_017D88(unsigned int arg);
void func_0C54C8(unsigned int level) { if (D_001659D4 == 0 && level != 0) func_017D88(level); D_001659D4 = level < 2 ? 2 : level; }
