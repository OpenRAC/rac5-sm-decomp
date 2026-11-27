/* LEVEL_06:0x0D1888 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001F5554;
extern void func_019F70(unsigned int arg);
void func_0D1888(unsigned int level) { if (D_001F5554 == 0 && level != 0) func_019F70(level); D_001F5554 = level < 2 ? 2 : level; }
