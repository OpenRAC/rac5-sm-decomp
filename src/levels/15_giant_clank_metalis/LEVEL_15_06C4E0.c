extern char *D_0014AEDC;
extern void func_06C538(int);

void func_06C4E0(unsigned int mask, int index)
{
    func_06C538(index);
    *(unsigned int *)(D_0014AEDC + 0x100) =
        mask & *(unsigned int *)(D_0014AEDC + 0x1f8);
    func_06C538(0);
}
