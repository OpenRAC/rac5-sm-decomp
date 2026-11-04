extern int D_001F3F7C;
extern int D_001F3F80;

void func_025410(void)
{
    int count = D_001F3F7C - 1;

    D_001F3F7C = count;
    if (count == 0)
        D_001F3F80 = 0;
}
