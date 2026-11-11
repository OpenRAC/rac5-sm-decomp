/* LEVEL_23:0x1A5AD0 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_002693E4;
extern char D_001DC4B8[];
extern char D_001DC4D8[];
extern int D_001DC444;
extern int func_1A2FD0(unsigned int id, void *a, void *b, int c);

void func_1A5AD0(void)
{
    D_001DC444 = func_1A2FD0((D_002693E4 << 16) | 0x800030D9, D_001DC4B8, D_001DC4D8, 0);
}
