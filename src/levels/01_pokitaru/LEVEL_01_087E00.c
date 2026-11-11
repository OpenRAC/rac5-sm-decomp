extern char *D_001F625C;
extern void func_087E58(int);

void func_087E00(unsigned int mask, int index)
{
    func_087E58(index);
    *(unsigned int *)(D_001F625C + 0x100) =
        mask & *(unsigned int *)(D_001F625C + 0x1f8);
    func_087E58(0);
}
