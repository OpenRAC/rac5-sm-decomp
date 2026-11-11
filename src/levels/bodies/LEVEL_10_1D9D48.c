/* LEVEL_10:0x1D9D48 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_002A13A4;
extern char D_002121B0[];
extern char D_002121D0[];
extern int D_0021213C;
extern int func_1D59E0(unsigned int id, void *a, void *b, int c);

void func_1D9D48(void)
{
    D_0021213C = func_1D59E0((D_002A13A4 << 16) | 0x800030D9, D_002121B0, D_002121D0, 0);
}
