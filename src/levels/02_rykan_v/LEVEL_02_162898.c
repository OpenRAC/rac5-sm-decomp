/* LEVEL_02:0x162898 -- placement copy of LEVEL_01_199348.c: runs the shared reset and copies three words from one table to another. */
extern int D_003AAE28[];
extern int D_00233390[];

extern void func_07C280(void);
extern void func_1303B8(int *dst, int *src, int n);

void func_162898(void)
{
    func_07C280();
    func_1303B8(D_003AAE28, D_00233390, 3);
}
