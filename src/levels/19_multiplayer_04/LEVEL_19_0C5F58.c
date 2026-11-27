/* LEVEL_19:0x0C5F58 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001B5684;
extern void func_019AE0(void);
void func_0C5F58(unsigned int level) { if (D_001B5684 == 0 && level != 0) ((void (*)(unsigned int arg))func_019AE0)(level); D_001B5684 = level < 2 ? 2 : level; }
