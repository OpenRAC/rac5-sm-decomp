/* LEVEL_06:0x1C1980 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_00284D24;
extern char D_001F80F0[];
extern char D_001F8110[];
extern int D_001F807C;
extern int func_1BD618(unsigned int id, void *a, void *b, int c);

void func_1C1980(void)
{
    D_001F807C = func_1BD618((D_00284D24 << 16) | 0x800030D9, D_001F80F0, D_001F8110, 0);
}
