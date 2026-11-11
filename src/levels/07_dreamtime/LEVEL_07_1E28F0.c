/* LEVEL_07:0x1E28F0 -- placement copy of LEVEL_01_1D4138.c: registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_002AD8A4;
extern char D_0021DF10[];
extern char D_0021DF30[];
extern int D_0021DE9C;
extern int func_1DE588(unsigned int id, void *a, void *b, int c);

void func_1E28F0(void)
{
    D_0021DE9C = func_1DE588((D_002AD8A4 << 16) | 0x800030D9, D_0021DF10, D_0021DF30, 0);
}
