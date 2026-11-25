/* LEVEL_24:0x0BA438 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0D03B0(void);
extern int func_1383D8(void);
extern void func_138DB8(int);
extern void func_138D90(int);
extern void func_0D0688(int value);
extern void func_018E18(int a, int b);
extern void func_0D08E0(int value);

extern unsigned char D_001CF764;

void func_0BA438(void)
{
    int v;

    switch (func_0D03B0()) {
    case 2:
        func_0D0688(0);
        break;
    case 1:
        if (D_001CF764 != 0) {
            v = func_1383D8();
            if (v != 0) {
                func_138DB8(v);
            }
        } else {
            v = func_1383D8();
            if (v != 0) {
                func_138D90(v);
            }
        }
        func_0D0688(0);
        func_018E18(4, 0);
        break;
    case 0:
    default:
        func_0D08E0(2);
        break;
    }
}
