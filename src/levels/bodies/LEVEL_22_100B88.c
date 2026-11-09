/* LEVEL_22:0x100B88 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_0F4300(void *a, void *b);
int func_0F44B0(void *buf, int size, int mode, int obj);
void func_0F4608(int index);
extern char D_001753C8[];

int func_100B88(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_0F4300(a0, D_001753C8);
    if (s0 != 0) {
        if (func_0F44B0(buf, 2048, 1, s0) == 1) {
            func_0F4608(s0);
            return buf[15] + 0xC0;
        }
        func_0F4608(s0);
    }
    return 0;
}
