/* LEVEL_19:0x0AF900 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0C5A28(void);
extern int func_1261D0(void);
extern void func_1261C8(void);
extern void func_1261C0(void);
extern void func_0C5D00(int value);
extern void func_018898(int a, int b);
extern void func_0C5F58(int value);

extern unsigned char D_001ADCDC;

void func_0AF900(void)
{
    int v;

    switch (func_0C5A28()) {
    case 2:
        func_0C5D00(0);
        break;
    case 1:
        if (D_001ADCDC != 0) {
            v = func_1261D0();
            if (v != 0) {
                ((void (*)(int))func_1261C8)(v);
            }
        } else {
            v = func_1261D0();
            if (v != 0) {
                ((void (*)(int))func_1261C0)(v);
            }
        }
        func_0C5D00(0);
        func_018898(4, 0);
        break;
    case 0:
    default:
        func_0C5F58(2);
        break;
    }
}
