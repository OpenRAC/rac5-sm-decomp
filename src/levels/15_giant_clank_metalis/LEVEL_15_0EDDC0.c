/* LEVEL_15:0x0EDDC0 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_0DE1A0(void *a, void *b);
int func_0DE350(void *buf, int size, int mode, int obj);
void func_0DE4A8(int index);
extern char D_0016C6C8[];

int func_0EDDC0(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_0DE1A0(a0, D_0016C6C8);
    if (s0 != 0) {
        if (func_0DE350(buf, 2048, 1, s0) == 1) {
            func_0DE4A8(s0);
            return buf[15] + 0xC0;
        }
        func_0DE4A8(s0);
    }
    return 0;
}
