/* LEVEL_02:0x1E8DD0 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_002AF4A4;
extern char D_0021E188[];
extern char D_0021E1A8[];
extern int D_0021E114;
extern int func_1E62D0(unsigned int id, void *a, void *b, int c);

void func_1E8DD0(void)
{
    D_0021E114 = func_1E62D0((D_002AF4A4 << 16) | 0x800030D9, D_0021E188, D_0021E1A8, 0);
}
