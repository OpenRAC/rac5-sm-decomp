/* LEVEL_03:0x1281A8 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_117FB0(void *a, void *b);
int func_118160(void *buf, int size, int mode, int obj);
void func_1182B8(int index);
extern char D_00230E48[];

int func_1281A8(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_117FB0(a0, D_00230E48);
    if (s0 != 0) {
        if (func_118160(buf, 2048, 1, s0) == 1) {
            func_1182B8(s0);
            return buf[15] + 0xC0;
        }
        func_1182B8(s0);
    }
    return 0;
}
