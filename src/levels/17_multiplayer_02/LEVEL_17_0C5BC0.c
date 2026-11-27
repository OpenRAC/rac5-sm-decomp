/* LEVEL_17:0x0C5BC0 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001A7B04;
extern void func_019760(void);
void func_0C5BC0(unsigned int level) { if (D_001A7B04 == 0 && level != 0) ((void (*)(unsigned int arg))func_019760)(level); D_001A7B04 = level < 2 ? 2 : level; }
