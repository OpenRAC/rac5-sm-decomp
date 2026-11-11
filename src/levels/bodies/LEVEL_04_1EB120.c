/* LEVEL_04:0x1EB120 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_002B27A4;
extern char D_00222B20[];
extern char D_00222B40[];
extern int D_00222AAC;
extern int func_1E8620(unsigned int id, void *a, void *b, int c);

void func_1EB120(void)
{
    D_00222AAC = func_1E8620((D_002B27A4 << 16) | 0x800030D9, D_00222B20, D_00222B40, 0);
}
