/* LEVEL_02:0x160830 -- maps a masked selector to one of up to three helper calls with a small constant. */
extern void func_036BB0(char *a0, int a1);

void func_160830(char *a0, int a1)
{
    unsigned int m;

    m = a1 & 0xFF;
    if (m - 4 < 2) {
        func_036BB0(a0, 1);
        return;
    }
    if (m == 3) {
        func_036BB0(a0, 2);
        return;
    }
    if (m < 2) {
        return;
    }
    if (m == 6) {
        return;
    }
    func_036BB0(a0, 0);
}
