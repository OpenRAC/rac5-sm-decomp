/* LEVEL_05:0x1C3530 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_00283E64;
extern char D_001F81B0[];
extern char D_001F81D0[];
extern int D_001F813C;
extern int func_1C0A30(unsigned int id, void *a, void *b, int c);

void func_1C3530(void)
{
    D_001F813C = func_1C0A30((D_00283E64 << 16) | 0x800030D9, D_001F81B0, D_001F81D0, 0);
}
