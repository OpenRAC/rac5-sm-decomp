/* FRONTEND:0x014118 -- remembers the requested level (at least 2), kicking the loader first when nothing was recorded yet. */
extern unsigned int D_0003018C;
extern void func_002250(unsigned int arg);
void func_014118(unsigned int level) { if (D_0003018C == 0 && level != 0) func_002250(level); D_0003018C = level < 2 ? 2 : level; }
