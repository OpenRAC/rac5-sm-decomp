extern char *func_01EDC8(int a, int b);

int func_01F5B8(int a, int b)
{
    return *(int *)(func_01EDC8(a, b) + 0x50) == 2;
}
