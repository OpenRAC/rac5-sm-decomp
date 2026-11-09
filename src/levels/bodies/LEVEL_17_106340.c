/* LEVEL_17:0x106340 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_0F9B40(void *a, void *b);
int func_0F9CF0(void *buf, int size, int mode, int obj);
void func_0F9E48(int index);
extern char D_001C0298[];

int func_106340(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_0F9B40(a0, D_001C0298);
    if (s0 != 0) {
        if (func_0F9CF0(buf, 2048, 1, s0) == 1) {
            func_0F9E48(s0);
            return buf[15] + 0xC0;
        }
        func_0F9E48(s0);
    }
    return 0;
}
