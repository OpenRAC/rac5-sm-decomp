/* LEVEL_08:0x215490 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_002E7224;
extern char D_00252D28[];
extern char D_00252D48[];
extern int D_00252CB4;
extern int func_211128(unsigned int id, void *a, void *b, int c);

void func_215490(void)
{
    D_00252CB4 = func_211128((D_002E7224 << 16) | 0x800030D9, D_00252D28, D_00252D48, 0);
}
