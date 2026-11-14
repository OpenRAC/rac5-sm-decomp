/* LEVEL_04:0x172018 -- copies six words through the shared transform from one table to another. */
extern int D_003AFF58[];
extern int D_00239C70[];
extern void func_136488(int *dst, int *src, int n);

void func_172018(void)
{
    func_136488(D_003AFF58, D_00239C70, 6);
}
