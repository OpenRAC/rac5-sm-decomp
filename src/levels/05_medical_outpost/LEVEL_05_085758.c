extern char *D_001E55DC;
extern void func_0857B0(int);

void func_085758(unsigned int mask, int index)
{
    func_0857B0(index);
    *(unsigned int *)(D_001E55DC + 0x100) =
        mask & *(unsigned int *)(D_001E55DC + 0x1f8);
    func_0857B0(0);
}
