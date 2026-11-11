/* LEVEL_17:0x000D28 -- placement copy of LEVEL_01_0010C0.c. */
extern char *D_0018E2CC;

int func_000D28(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_0018E2CC + stride + 0xb0);
    return *(int *)(D_0018E2CC + offset * 8 + stride + 0x90);
}
