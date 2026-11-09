/* LEVEL_16:0x022D20 -- resets all channel slots and then applies the channel setup for the current mode. */
extern int D_001D04A0;

extern void func_022AC8(int ch, int a, int x, int b);
extern void func_022A40(int ch, int x);
extern int func_112BD0(int a);
extern int func_112E00(void);

void func_022D20(int unused, int x)
{
    unsigned i;
    int t;

    i = 0;
    do {
        func_022AC8(i, 0, x, 1);
        i++;
    } while (i < 0x19);
    t = D_001D04A0;
    if (t == 0x10) {
        if (func_112BD0(2)) {
            func_022AC8(2, 1, x, 1);
            func_022A40(2, x);
        }
        func_022AC8(0x10, 1, x, 1);
    } else if (t == 0x11) {
        if (func_112BD0(2)) {
            func_022AC8(2, 1, x, 1);
            func_022A40(2, x);
        }
        func_022AC8(0x10, 1, x, 1);
    } else if (t == 0x12) {
        if (func_112BD0(2)) {
            func_022AC8(2, 1, x, 1);
            func_022A40(2, x);
        }
        func_022AC8(0x10, 1, x, 1);
        if (!func_112E00()) {
            func_022AC8(0x12, 1, x, 1);
        }
    } else if (t == 0x13) {
        if (func_112BD0(2)) {
            func_022AC8(2, 1, x, 1);
            func_022A40(2, x);
        }
        func_022AC8(0x10, 1, x, 1);
        if (!func_112E00()) {
            func_022AC8(0xC, 1, x, 1);
            func_022A40(0xC, x);
            func_022AC8(0x12, 1, x, 1);
        }
    }
}
