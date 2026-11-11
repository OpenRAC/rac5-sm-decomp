/* LEVEL_22:0x000EA0 -- placement copy of LEVEL_01_0010C0.c. */
extern char *D_0014E5C8;

int func_000EA0(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_0014E5C8 + stride + 0xb0);
    return *(int *)(D_0014E5C8 + offset * 8 + stride + 0x90);
}
