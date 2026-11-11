/* LEVEL_10:0x127DA0 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_118058(void *a, void *b);
int func_118208(void *buf, int size, int mode, int obj);
void func_118360(int index);
extern char D_00220ED8[];

int func_127DA0(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_118058(a0, D_00220ED8);
    if (s0 != 0) {
        if (func_118208(buf, 2048, 1, s0) == 1) {
            func_118360(s0);
            return buf[15] + 0xC0;
        }
        func_118360(s0);
    }
    return 0;
}
