extern int D_001DDD7C;
extern int D_001DDD80;

void func_024708(void)
{
    int count = D_001DDD7C - 1;

    D_001DDD7C = count;
    if (count == 0)
        D_001DDD80 = 0;
}
