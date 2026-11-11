/* LEVEL_20:0x000CE8 -- placement copy of LEVEL_01_0010C0.c. */
extern char *D_000FD3B4;

int func_000CE8(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_000FD3B4 + stride + 0xb0);
    return *(int *)(D_000FD3B4 + offset * 8 + stride + 0x90);
}
