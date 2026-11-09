/* LEVEL_15:0x0F7198 -- truncates a stored float to an int, and when it is positive, calls a helper and subtracts the value. */

extern char D_002A8B58[];
extern void func_0F6D20(int a);

void func_0F7198(void)
{
    char *t;
    char *s;
    int n;

    t = D_002A8B58;
    s = t + 0x40000;
    n = (int)*(float *)(s + 0x4134);
    if (n > 0) {
        func_0F6D20(n);
        *(float *)(s + 0x4134) = *(float *)(s + 0x4134) - (float)n;
    }
}
