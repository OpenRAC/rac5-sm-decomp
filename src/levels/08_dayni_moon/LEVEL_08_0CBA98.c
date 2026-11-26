/* LEVEL_08:0x0CBA98 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0E1A18(void);
extern int func_153DA0(void);
extern void func_154780(int);
extern void func_154758(int);
extern void func_0E1CF0(int value);
extern void func_01B1A0(int a, int b);
extern void func_0E1F48(int value);

extern unsigned char D_002479A4;

void func_0CBA98(void)
{
    int v;

    switch (func_0E1A18()) {
    case 2:
        func_0E1CF0(0);
        break;
    case 1:
        if (D_002479A4 != 0) {
            v = func_153DA0();
            if (v != 0) {
                func_154780(v);
            }
        } else {
            v = func_153DA0();
            if (v != 0) {
                func_154758(v);
            }
        }
        func_0E1CF0(0);
        func_01B1A0(4, 0);
        break;
    case 0:
    default:
        func_0E1F48(2);
        break;
    }
}
