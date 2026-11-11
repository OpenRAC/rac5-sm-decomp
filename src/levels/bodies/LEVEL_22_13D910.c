/* LEVEL_22:0x13D910 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_001EDB64;
extern char D_00166B50[];
extern char D_00166B70[];
extern int D_00166ADC;
extern int func_13CC28(unsigned int id, void *a, void *b, int c);

void func_13D910(void)
{
    D_00166ADC = func_13CC28((D_001EDB64 << 16) | 0x800030D9, D_00166B50, D_00166B70, 0);
}
