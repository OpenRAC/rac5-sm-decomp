/* LEVEL_02:0x17B310 -- copies two words through the shared transform from one table to another. */
extern int D_003AD500[];
extern int D_00237038[];
extern void func_1303B8(int *dst, int *src, int n);

void func_17B310(void)
{
    func_1303B8(D_003AD500, D_00237038, 2);
}
