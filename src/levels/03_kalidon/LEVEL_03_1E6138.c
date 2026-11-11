/* LEVEL_03:0x1E6138 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_002B2E24;
extern char D_00222100[];
extern char D_00222120[];
extern int D_0022208C;
extern int func_1E1DD0(unsigned int id, void *a, void *b, int c);

void func_1E6138(void)
{
    D_0022208C = func_1E1DD0((D_002B2E24 << 16) | 0x800030D9, D_00222100, D_00222120, 0);
}
