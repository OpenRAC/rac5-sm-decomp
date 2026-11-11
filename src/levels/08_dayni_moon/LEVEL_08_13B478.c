/* LEVEL_08:0x13B478 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_12A5E0(void *a, void *b);
int func_12A790(void *buf, int size, int mode, int obj);
void func_12A8E8(int index);
extern char D_00261BC8[];

int func_13B478(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_12A5E0(a0, D_00261BC8);
    if (s0 != 0) {
        if (func_12A790(buf, 2048, 1, s0) == 1) {
            func_12A8E8(s0);
            return buf[15] + 0xC0;
        }
        func_12A8E8(s0);
    }
    return 0;
}
