/* LEVEL_16:0x0C6680 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001B4504;
extern void func_019DE0(void);
void func_0C6680(unsigned int level) { if (D_001B4504 == 0 && level != 0) ((void (*)(unsigned int arg))func_019DE0)(level); D_001B4504 = level < 2 ? 2 : level; }
