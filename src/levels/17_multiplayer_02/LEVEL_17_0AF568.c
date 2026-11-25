/* LEVEL_17:0x0AF568 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0C5690(void);
extern int func_125290(void);
extern void func_125288(void);
extern void func_125280(void);
extern void func_0C5968(int value);
extern void func_018518(int a, int b);
extern void func_0C5BC0(int value);

extern unsigned char D_001A015C;

void func_0AF568(void)
{
    int v;

    switch (func_0C5690()) {
    case 2:
        func_0C5968(0);
        break;
    case 1:
        if (D_001A015C != 0) {
            v = func_125290();
            if (v != 0) {
                ((void (*)(int))func_125288)(v);
            }
        } else {
            v = func_125290();
            if (v != 0) {
                ((void (*)(int))func_125280)(v);
            }
        }
        func_0C5968(0);
        func_018518(4, 0);
        break;
    case 0:
    default:
        func_0C5BC0(2);
        break;
    }
}
