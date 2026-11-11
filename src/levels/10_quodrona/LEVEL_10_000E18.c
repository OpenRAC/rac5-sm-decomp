extern char *D_001F8248;

void func_000E18(int index, int first, int second)
{
    int offset = index * 0x30;
    *(int *)(D_001F8248 + offset + 0xb0) = 0;
    *(int *)(D_001F8248 + offset + 0x90) = first;
    *(int *)(D_001F8248 + offset + 0x94) = second;
}
