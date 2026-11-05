extern char *D_002083C8;

int func_000EC8(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_002083C8 + stride + 0xb0);
    return *(int *)(D_002083C8 + offset * 8 + stride + 0x90);
}
