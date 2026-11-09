/* LEVEL_02:0x1302F0 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_120188(void *a, void *b);
int func_120338(void *buf, int size, int mode, int obj);
void func_120490(int index);
extern char D_0022CEC8[];

int func_1302F0(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_120188(a0, D_0022CEC8);
    if (s0 != 0) {
        if (func_120338(buf, 2048, 1, s0) == 1) {
            func_120490(s0);
            return buf[15] + 0xC0;
        }
        func_120490(s0);
    }
    return 0;
}
