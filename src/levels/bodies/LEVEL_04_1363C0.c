/* LEVEL_04:0x1363C0 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_1253A8(void *a, void *b);
int func_125558(void *buf, int size, int mode, int obj);
void func_1256B0(int index);
extern char D_002318C8[];

int func_1363C0(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_1253A8(a0, D_002318C8);
    if (s0 != 0) {
        if (func_125558(buf, 2048, 1, s0) == 1) {
            func_1256B0(s0);
            return buf[15] + 0xC0;
        }
        func_1256B0(s0);
    }
    return 0;
}
