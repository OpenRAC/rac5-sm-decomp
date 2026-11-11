extern char *D_001DE5C8;

int func_0010C0(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_001DE5C8 + stride + 0xb0);
    return *(int *)(D_001DE5C8 + offset * 8 + stride + 0x90);
}
