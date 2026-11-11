/* LEVEL_23:0x11ADB8 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_10B3A8(void *a, void *b);
int func_10B558(void *buf, int size, int mode, int obj);
void func_10B6B0(int index);
extern char D_001EB0C8[];

int func_11ADB8(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_10B3A8(a0, D_001EB0C8);
    if (s0 != 0) {
        if (func_10B558(buf, 2048, 1, s0) == 1) {
            func_10B6B0(s0);
            return buf[15] + 0xC0;
        }
        func_10B6B0(s0);
    }
    return 0;
}
