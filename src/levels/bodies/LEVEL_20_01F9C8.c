/* LEVEL_20:0x01F9C8 -- placement copy of LEVEL_16_022D20.c: resets all channel slots and then applies the channel setup for the current mode. */
extern int D_00131510;

extern void func_01F770(int ch, int a, int x, int b);
extern void func_01F6E8(int ch, int x);
extern int func_0E5778(int a);
extern int func_0E5970(void);

void func_01F9C8(int unused, int x)
{
    unsigned i;
    int t;

    i = 0;
    do {
        func_01F770(i, 0, x, 1);
        i++;
    } while (i < 0x19);
    t = D_00131510;
    if (t == 0x10) {
        if (func_0E5778(2)) {
            func_01F770(2, 1, x, 1);
            func_01F6E8(2, x);
        }
        func_01F770(0x10, 1, x, 1);
    } else if (t == 0x11) {
        if (func_0E5778(2)) {
            func_01F770(2, 1, x, 1);
            func_01F6E8(2, x);
        }
        func_01F770(0x10, 1, x, 1);
    } else if (t == 0x12) {
        if (func_0E5778(2)) {
            func_01F770(2, 1, x, 1);
            func_01F6E8(2, x);
        }
        func_01F770(0x10, 1, x, 1);
        if (!func_0E5970()) {
            func_01F770(0x12, 1, x, 1);
        }
    } else if (t == 0x13) {
        if (func_0E5778(2)) {
            func_01F770(2, 1, x, 1);
            func_01F6E8(2, x);
        }
        func_01F770(0x10, 1, x, 1);
        if (!func_0E5970()) {
            func_01F770(0xC, 1, x, 1);
            func_01F6E8(0xC, x);
            func_01F770(0x12, 1, x, 1);
        }
    }
}
