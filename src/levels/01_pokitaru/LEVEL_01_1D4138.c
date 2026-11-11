/* LEVEL_01:0x1D4138 -- registers the level-tagged resource and keeps the
   returned handle. */
extern unsigned int D_00297FA4;
extern char D_00209238[];
extern char D_00209258[];
extern int D_002091C4;
extern int func_1D1638(unsigned int id, void *a, void *b, int c);

void func_1D4138(void)
{
    D_002091C4 = func_1D1638((D_00297FA4 << 16) | 0x800030D9, D_00209238, D_00209258, 0);
}
