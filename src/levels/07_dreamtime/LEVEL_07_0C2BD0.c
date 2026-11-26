/* LEVEL_07:0x0C2BD0 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0D8AB8(void);
extern int func_138DF8(void);
extern void func_138DF0(void);
extern void func_138DE8(void);
extern void func_0D8D90(int value);
extern void func_01AEE8(int a, int b);
extern void func_0D8FE8(int value);

extern unsigned char D_00212DE4;

void func_0C2BD0(void)
{
    int v;

    switch (func_0D8AB8()) {
    case 2:
        func_0D8D90(0);
        break;
    case 1:
        if (D_00212DE4 != 0) {
            v = func_138DF8();
            if (v != 0) {
                ((void (*)(int))func_138DF0)(v);
            }
        } else {
            v = func_138DF8();
            if (v != 0) {
                ((void (*)(int))func_138DE8)(v);
            }
        }
        func_0D8D90(0);
        func_01AEE8(4, 0);
        break;
    case 0:
    default:
        func_0D8FE8(2);
        break;
    }
}
