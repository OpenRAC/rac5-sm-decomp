extern char *D_0019C14C;

int func_000D28(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_0019C14C + stride + 0xb0);
    return *(int *)(D_0019C14C + offset * 8 + stride + 0x90);
}
