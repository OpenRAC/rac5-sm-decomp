extern char *D_001BFEC8;

int func_000EC8(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_001BFEC8 + stride + 0xb0);
    return *(int *)(D_001BFEC8 + offset * 8 + stride + 0x90);
}
