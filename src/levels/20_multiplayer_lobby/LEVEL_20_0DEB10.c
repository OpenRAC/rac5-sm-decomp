/* LEVEL_20:0x0DEB10 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_0D3390(void *a, void *b);
int func_0D3540(void *buf, int size, int mode, int obj);
void func_0D3698(int index);
extern char D_0012DE88[];

int func_0DEB10(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_0D3390(a0, D_0012DE88);
    if (s0 != 0) {
        if (func_0D3540(buf, 2048, 1, s0) == 1) {
            func_0D3698(s0);
            return buf[15] + 0xC0;
        }
        func_0D3698(s0);
    }
    return 0;
}
