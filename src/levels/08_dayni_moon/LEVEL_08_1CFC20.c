/* LEVEL_08:0x1CFC20 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_0028496C;
extern void func_040D98(int, int, void *, int, void *, float);

int func_1CFC20(int key, int a, int b, int c, int d, int e)
{
    if (key != D_0028496C) {
        return 1;
    }
    ((void (*)(long long first, long long second, long long third, long long fourth, long long fifth))func_040D98)(a, b, c, d, e);
}
