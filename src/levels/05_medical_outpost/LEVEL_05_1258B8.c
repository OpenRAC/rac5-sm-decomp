/* LEVEL_05:0x1258B8 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_115E60(void *a, void *b);
int func_116010(void *buf, int size, int mode, int obj);
void func_116168(int index);
extern char D_00206E48[];

int func_1258B8(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_115E60(a0, D_00206E48);
    if (s0 != 0) {
        if (func_116010(buf, 2048, 1, s0) == 1) {
            func_116168(s0);
            return buf[15] + 0xC0;
        }
        func_116168(s0);
    }
    return 0;
}
