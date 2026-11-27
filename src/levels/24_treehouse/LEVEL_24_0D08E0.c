/* LEVEL_24:0x0D08E0 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001D72D4;
extern void func_019D60(unsigned int arg);
void func_0D08E0(unsigned int level) { if (D_001D72D4 == 0 && level != 0) func_019D60(level); D_001D72D4 = level < 2 ? 2 : level; }
