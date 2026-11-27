/* LEVEL_05:0x0D5530 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001F59D4;
extern void func_01AD08(unsigned int arg);
void func_0D5530(unsigned int level) { if (D_001F59D4 == 0 && level != 0) func_01AD08(level); D_001F59D4 = level < 2 ? 2 : level; }
