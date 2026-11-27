/* LEVEL_18:0x0C5658 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_001B5984;
extern void func_019428(void);
void func_0C5658(unsigned int level) { if (D_001B5984 == 0 && level != 0) ((void (*)(unsigned int arg))func_019428)(level); D_001B5984 = level < 2 ? 2 : level; }
