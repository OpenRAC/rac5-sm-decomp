extern char *D_00203548;

int func_0010C0(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_00203548 + stride + 0xb0);
    return *(int *)(D_00203548 + offset * 8 + stride + 0x90);
}
