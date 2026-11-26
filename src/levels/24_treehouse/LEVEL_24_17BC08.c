/* LEVEL_24:0x17BC08 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_002015DC;
extern void func_034D38(long long first, long long second, long long third, long long fourth, long long fifth);

int func_17BC08(int key, int a, int b, int c, int d, int e)
{
    if (key != D_002015DC) {
        return 1;
    }
    func_034D38(a, b, c, d, e);
}
