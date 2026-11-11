/* LEVEL_21:0x000C18 -- placement copy of LEVEL_01_0010C0.c. */
extern char *D_00143EB0;

int func_000C18(int index)
{
    int stride = index * 0x30;
    int offset = *(int *)(D_00143EB0 + stride + 0xb0);
    return *(int *)(D_00143EB0 + offset * 8 + stride + 0x90);
}
