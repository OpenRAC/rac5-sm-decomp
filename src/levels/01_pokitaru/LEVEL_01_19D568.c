/* LEVEL_01:0x19D568 -- forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_002356DC;
extern void func_03BC00(long long first, long long second, long long third, long long fourth, long long fifth);

int func_19D568(int key, int a, int b, int c, int d, int e)
{
    if (key != D_002356DC) {
        return 1;
    }
    func_03BC00(a, b, c, d, e);
}
