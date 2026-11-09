/* LEVEL_18:0x022368 -- placement copy of LEVEL_16_022D20.c: resets all channel slots and then applies the channel setup for the current mode. */
extern int D_001D1A20;

extern void func_022110(int ch, int a, int x, int b);
extern void func_022088(int ch, int x);
extern int func_111988(int a);
extern int func_111BB8(void);

void func_022368(int unused, int x)
{
    unsigned i;
    int t;

    i = 0;
    do {
        func_022110(i, 0, x, 1);
        i++;
    } while (i < 0x19);
    t = D_001D1A20;
    if (t == 0x10) {
        if (func_111988(2)) {
            func_022110(2, 1, x, 1);
            func_022088(2, x);
        }
        func_022110(0x10, 1, x, 1);
    } else if (t == 0x11) {
        if (func_111988(2)) {
            func_022110(2, 1, x, 1);
            func_022088(2, x);
        }
        func_022110(0x10, 1, x, 1);
    } else if (t == 0x12) {
        if (func_111988(2)) {
            func_022110(2, 1, x, 1);
            func_022088(2, x);
        }
        func_022110(0x10, 1, x, 1);
        if (!func_111BB8()) {
            func_022110(0x12, 1, x, 1);
        }
    } else if (t == 0x13) {
        if (func_111988(2)) {
            func_022110(2, 1, x, 1);
            func_022088(2, x);
        }
        func_022110(0x10, 1, x, 1);
        if (!func_111BB8()) {
            func_022110(0xC, 1, x, 1);
            func_022088(0xC, x);
            func_022110(0x12, 1, x, 1);
        }
    }
}
