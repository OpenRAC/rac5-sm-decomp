extern char *D_001A570C;
extern void func_078D18(int);

void func_078CC0(unsigned int mask, int index)
{
    func_078D18(index);
    *(unsigned int *)(D_001A570C + 0x100) =
        mask & *(unsigned int *)(D_001A570C + 0x1f8);
    func_078D18(0);
}
