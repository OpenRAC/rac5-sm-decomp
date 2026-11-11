extern char *D_001F8248;

int func_000E50(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_001F8248 + stride + 0xb0);
    return *(int *)(D_001F8248 + offset * 8 + stride + 0x90);
}
