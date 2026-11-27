/* LEVEL_22:0x131C78 -- placement copy of LEVEL_01_19D568.c: forwards five arguments to a handler when the key matches the current one, otherwise reports 1. */
extern int D_001872DC;
extern void func_031850(long long first, long long second, long long third, long long fourth, long long fifth);

int func_131C78(int key, int a, int b, int c, int d, int e)
{
    if (key != D_001872DC) {
        return 1;
    }
    func_031850(a, b, c, d, e);
}
