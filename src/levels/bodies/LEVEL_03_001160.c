extern char *D_002078C8;

int func_001160(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_002078C8 + stride + 0xb0);
    return *(int *)(D_002078C8 + offset * 8 + stride + 0x94);
}
