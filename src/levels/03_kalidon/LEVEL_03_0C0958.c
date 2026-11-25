/* LEVEL_03:0x0C0958 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0D6840(void);
extern int func_1341C8(void);
extern void func_1341C0(void);
extern void func_1341B8(void);
extern void func_0D6B18(int value);
extern void func_01A590(int a, int b);
extern void func_0D6D70(int value);

extern unsigned char D_00217164;

void func_0C0958(void)
{
    int v;

    switch (func_0D6840()) {
    case 2:
        func_0D6B18(0);
        break;
    case 1:
        if (D_00217164 != 0) {
            v = func_1341C8();
            if (v != 0) {
                ((void (*)(int))func_1341C0)(v);
            }
        } else {
            v = func_1341C8();
            if (v != 0) {
                ((void (*)(int))func_1341B8)(v);
            }
        }
        func_0D6B18(0);
        func_01A590(4, 0);
        break;
    case 0:
    default:
        func_0D6D70(2);
        break;
    }
}
