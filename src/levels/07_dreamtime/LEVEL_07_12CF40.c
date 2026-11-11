/* LEVEL_07:0x12CF40 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_11CE90(void *a, void *b);
int func_11D040(void *buf, int size, int mode, int obj);
void func_11D198(int index);
extern char D_0022CC48[];

int func_12CF40(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_11CE90(a0, D_0022CC48);
    if (s0 != 0) {
        if (func_11D040(buf, 2048, 1, s0) == 1) {
            func_11D198(s0);
            return buf[15] + 0xC0;
        }
        func_11D198(s0);
    }
    return 0;
}
