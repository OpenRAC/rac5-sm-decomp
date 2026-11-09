/* LEVEL_09:0x122ED8 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_113230(void *a, void *b);
int func_1133E0(void *buf, int size, int mode, int obj);
void func_113538(int index);
extern char D_00201B48[];

int func_122ED8(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_113230(a0, D_00201B48);
    if (s0 != 0) {
        if (func_1133E0(buf, 2048, 1, s0) == 1) {
            func_113538(s0);
            return buf[15] + 0xC0;
        }
        func_113538(s0);
    }
    return 0;
}
