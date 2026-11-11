/* LEVEL_09:0x1BC8A0 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_0027F724;
extern char D_001F2EB8[];
extern char D_001F2ED8[];
extern int D_001F2E44;
extern int func_1B8538(unsigned int id, void *a, void *b, int c);

void func_1BC8A0(void)
{
    D_001F2E44 = func_1B8538((D_0027F724 << 16) | 0x800030D9, D_001F2EB8, D_001F2ED8, 0);
}
