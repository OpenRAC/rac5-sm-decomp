extern char *D_001C2648;

int func_0010C0(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_001C2648 + stride + 0xb0);
    return *(int *)(D_001C2648 + offset * 8 + stride + 0x90);
}
