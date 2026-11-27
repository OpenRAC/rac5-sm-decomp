/* LEVEL_06:0x193140 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_0022245C;
extern void func_0383B8(long long first, long long second, long long third, long long fourth, long long fifth);

int func_193140(int key, int a, int b, int c, int d, int e)
{
    if (key != D_0022245C) {
        return 1;
    }
    func_0383B8(a, b, c, d, e);
}
