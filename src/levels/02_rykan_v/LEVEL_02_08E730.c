extern char *D_0020B21C;
extern void func_08E788(int);

void func_08E730(unsigned int mask, int index)
{
    func_08E788(index);
    *(unsigned int *)(D_0020B21C + 0x100) =
        mask & *(unsigned int *)(D_0020B21C + 0x1f8);
    func_08E788(0);
}
