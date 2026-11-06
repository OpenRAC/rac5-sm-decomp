extern char *D_0019C14C;

void func_000CF0(int index, int first, int second)
{
    int offset = index * 0x30;
    *(int *)(D_0019C14C + offset + 0xb0) = 0;
    *(int *)(D_0019C14C + offset + 0x90) = first;
    *(int *)(D_0019C14C + offset + 0x94) = second;
}
