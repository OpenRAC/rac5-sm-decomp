/* LEVEL_17:0x0226A0 -- placement copy of LEVEL_16_022D20.c: resets all channel slots and then applies the channel setup for the current mode. */
extern int D_001C3920;

extern void func_022448(int ch, int a, int x, int b);
extern void func_0223C0(int ch, int x);
extern int func_112360(int a);
extern int func_112590(void);

void func_0226A0(int unused, int x)
{
    unsigned i;
    int t;

    i = 0;
    do {
        func_022448(i, 0, x, 1);
        i++;
    } while (i < 0x19);
    t = D_001C3920;
    if (t == 0x10) {
        if (func_112360(2)) {
            func_022448(2, 1, x, 1);
            func_0223C0(2, x);
        }
        func_022448(0x10, 1, x, 1);
    } else if (t == 0x11) {
        if (func_112360(2)) {
            func_022448(2, 1, x, 1);
            func_0223C0(2, x);
        }
        func_022448(0x10, 1, x, 1);
    } else if (t == 0x12) {
        if (func_112360(2)) {
            func_022448(2, 1, x, 1);
            func_0223C0(2, x);
        }
        func_022448(0x10, 1, x, 1);
        if (!func_112590()) {
            func_022448(0x12, 1, x, 1);
        }
    } else if (t == 0x13) {
        if (func_112360(2)) {
            func_022448(2, 1, x, 1);
            func_0223C0(2, x);
        }
        func_022448(0x10, 1, x, 1);
        if (!func_112590()) {
            func_022448(0xC, 1, x, 1);
            func_0223C0(0xC, x);
            func_022448(0x12, 1, x, 1);
        }
    }
}
