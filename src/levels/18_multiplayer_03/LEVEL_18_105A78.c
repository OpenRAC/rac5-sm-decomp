/* LEVEL_18:0x105A78 -- placement copy of LEVEL_01_129F40.c: runs a locator and a parser on a 2 KiB scratch buffer, returning an offset word or zero. */
int func_0F8D68(void *a, void *b);
int func_0F8F18(void *buf, int size, int mode, int obj);
void func_0F9070(int index);
extern char D_001CE398[];

int func_105A78(void *a0)
{
    int buf[512];
    int s0;

    s0 = func_0F8D68(a0, D_001CE398);
    if (s0 != 0) {
        if (func_0F8F18(buf, 2048, 1, s0) == 1) {
            func_0F9070(s0);
            return buf[15] + 0xC0;
        }
        func_0F9070(s0);
    }
    return 0;
}
