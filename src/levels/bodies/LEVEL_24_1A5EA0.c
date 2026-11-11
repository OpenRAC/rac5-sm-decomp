/* LEVEL_24:0x1A5EA0 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_00263E64;
extern char D_001DA0A0[];
extern char D_001DA0C0[];
extern int D_001DA02C;
extern int func_1A1B38(unsigned int id, void *a, void *b, int c);

void func_1A5EA0(void)
{
    D_001DA02C = func_1A1B38((D_00263E64 << 16) | 0x800030D9, D_001DA0A0, D_001DA0C0, 0);
}
