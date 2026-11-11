extern int D_001FCF7C;
extern int D_001FCF80;

void func_024D78(void)
{
    int count = D_001FCF7C - 1;

    D_001FCF7C = count;
    if (count == 0)
        D_001FCF80 = 0;
}
