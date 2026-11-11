extern char *D_0018E2CC;

void func_000CF0(int index, int first, int second)
{
    int offset = index * 0x30;
    *(int *)(D_0018E2CC + offset + 0xb0) = 0;
    *(int *)(D_0018E2CC + offset + 0x90) = first;
    *(int *)(D_0018E2CC + offset + 0x94) = second;
}
