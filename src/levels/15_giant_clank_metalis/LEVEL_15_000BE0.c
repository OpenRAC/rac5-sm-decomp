extern char *D_00143EB0;

void func_000BE0(int index, int first, int second)
{
    int offset = index * 0x30;
    *(int *)(D_00143EB0 + offset + 0xb0) = 0;
    *(int *)(D_00143EB0 + offset + 0x90) = first;
    *(int *)(D_00143EB0 + offset + 0x94) = second;
}
