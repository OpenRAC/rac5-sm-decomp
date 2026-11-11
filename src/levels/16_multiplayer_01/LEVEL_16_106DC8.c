/* LEVEL_16:0x106DC8 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_0FA530(void *a, void *b);
int func_0FA6E0(void *buf, int size, int mode, int obj);
void func_0FA838(int index);
extern char D_001CCE18[];

int func_106DC8(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_0FA530(a0, D_001CCE18);
    if (s0 != 0) {
        if (func_0FA6E0(buf, 2048, 1, s0) == 1) {
            func_0FA838(s0);
            return buf[15] + 0xC0;
        }
        func_0FA838(s0);
    }
    return 0;
}
