/* LEVEL_22:0x0AF020 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0C4F98(void);
extern int func_10D2D0(void);
extern void func_10D2C8(void);
extern void func_10D2C0(void);
extern void func_0C5270(int value);
extern void func_016E40(int a, int b);
extern void func_0C54C8(int value);

extern unsigned char D_0015DE64;

void func_0AF020(void)
{
    int v;

    switch (func_0C4F98()) {
    case 2:
        func_0C5270(0);
        break;
    case 1:
        if (D_0015DE64 != 0) {
            v = func_10D2D0();
            if (v != 0) {
                ((void (*)(int))func_10D2C8)(v);
            }
        } else {
            v = func_10D2D0();
            if (v != 0) {
                ((void (*)(int))func_10D2C0)(v);
            }
        }
        func_0C5270(0);
        func_016E40(4, 0);
        break;
    case 0:
    default:
        func_0C54C8(2);
        break;
    }
}
