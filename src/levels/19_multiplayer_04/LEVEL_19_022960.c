/* LEVEL_19:0x022960 -- placement copy of LEVEL_16_022D20.c: resets all channel slots and then applies the channel setup for the current mode. */
extern int D_001D16A0;

extern void func_022708(int ch, int a, int x, int b);
extern void func_022680(int ch, int x);
extern int func_113378(int a);
extern int func_1135A8(void);

void func_022960(int unused, int x)
{
    unsigned i;
    int t;

    i = 0;
    do {
        func_022708(i, 0, x, 1);
        i++;
    } while (i < 0x19);
    t = D_001D16A0;
    if (t == 0x10) {
        if (func_113378(2)) {
            func_022708(2, 1, x, 1);
            func_022680(2, x);
        }
        func_022708(0x10, 1, x, 1);
    } else if (t == 0x11) {
        if (func_113378(2)) {
            func_022708(2, 1, x, 1);
            func_022680(2, x);
        }
        func_022708(0x10, 1, x, 1);
    } else if (t == 0x12) {
        if (func_113378(2)) {
            func_022708(2, 1, x, 1);
            func_022680(2, x);
        }
        func_022708(0x10, 1, x, 1);
        if (!func_1135A8()) {
            func_022708(0x12, 1, x, 1);
        }
    } else if (t == 0x13) {
        if (func_113378(2)) {
            func_022708(2, 1, x, 1);
            func_022680(2, x);
        }
        func_022708(0x10, 1, x, 1);
        if (!func_1135A8()) {
            func_022708(0xC, 1, x, 1);
            func_022680(0xC, x);
            func_022708(0x12, 1, x, 1);
        }
    }
}
