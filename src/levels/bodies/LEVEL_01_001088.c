extern char *D_001EF248;

void func_001088(int index, int first, int second)
{
    int offset = index * 0x30;
    *(int *)(D_001EF248 + offset + 0xb0) = 0;
    *(int *)(D_001EF248 + offset + 0x90) = first;
    *(int *)(D_001EF248 + offset + 0x94) = second;
}
