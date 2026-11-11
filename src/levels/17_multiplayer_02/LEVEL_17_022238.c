extern char *func_021A48(int a, int b);

int func_022238(int a, int b)
{
    return *(int *)(func_021A48(a, b) + 0x50) == 2;
}
