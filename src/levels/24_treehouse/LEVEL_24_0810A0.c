extern char *D_001C6EDC;
extern void func_0810F8(int);

void func_0810A0(unsigned int mask, int index)
{
    func_0810F8(index);
    *(unsigned int *)(D_001C6EDC + 0x100) =
        mask & *(unsigned int *)(D_001C6EDC + 0x1f8);
    func_0810F8(0);
}
