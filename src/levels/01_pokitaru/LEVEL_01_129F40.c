/* LEVEL_01:0x129F40 -- runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_119E40(void *a, void *b);
int func_119FF0(void *buf, int size, int mode, int obj);
void func_11A148(int index);
extern char D_00217F48[];

int func_129F40(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_119E40(a0, D_00217F48);
    if (s0 != 0) {
        if (func_119FF0(buf, 2048, 1, s0) == 1) {
            func_11A148(s0);
            return buf[15] + 0xC0;
        }
        func_11A148(s0);
    }
    return 0;
}
