extern char *D_0020E8DC;
extern void func_087CB0(int);

void func_087C58(unsigned int mask, int index)
{
    func_087CB0(index);
    *(unsigned int *)(D_0020E8DC + 0x100) =
        mask & *(unsigned int *)(D_0020E8DC + 0x1f8);
    func_087CB0(0);
}
