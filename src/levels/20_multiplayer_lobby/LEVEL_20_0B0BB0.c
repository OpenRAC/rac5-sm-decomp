/* LEVEL_20:0x0B0BB0 -- placement copy of FRONTEND_014118.c: remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_00116BE4;
extern void func_017B98(void);
void func_0B0BB0(unsigned int level) { if (D_00116BE4 == 0 && level != 0) ((void (*)(unsigned int arg))func_017B98)(level); D_00116BE4 = level < 2 ? 2 : level; }
