/* LEVEL_24:0x11FA40 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_1100A8(void *a, void *b);
int func_110258(void *buf, int size, int mode, int obj);
void func_1103B0(int index);
extern char D_001E8CC8[];

int func_11FA40(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_1100A8(a0, D_001E8CC8);
    if (s0 != 0) {
        if (func_110258(buf, 2048, 1, s0) == 1) {
            func_1103B0(s0);
            return buf[15] + 0xC0;
        }
        func_1103B0(s0);
    }
    return 0;
}
