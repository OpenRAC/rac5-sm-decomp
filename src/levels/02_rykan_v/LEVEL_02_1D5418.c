/* LEVEL_02:0x1D5418 -- copies three words through the shared transform from one table to another. */
extern int D_003B0548[];
extern int D_00240360[];
extern void func_1303B8(int *dst, int *src, int n);

void func_1D5418(void)
{
    func_1303B8(D_003B0548, D_00240360, 3);
}
