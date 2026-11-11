/* LEVEL_19:0x000D28 -- placement copy of LEVEL_01_0010C0.c. */
extern char *D_0019BE4C;

int func_000D28(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_0019BE4C + stride + 0xb0);
    return *(int *)(D_0019BE4C + offset * 8 + stride + 0x90);
}
