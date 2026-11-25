/* LEVEL_05:0x0BF118 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0D5000(void);
extern int func_131770(void);
extern void func_131768(void);
extern void func_131760(void);
extern void func_0D52D8(int value);
extern void func_019DC0(int a, int b);
extern void func_0D5530(int value);

extern unsigned char D_001EDE64;

void func_0BF118(void)
{
    int v;

    switch (func_0D5000()) {
    case 2:
        func_0D52D8(0);
        break;
    case 1:
        if (D_001EDE64 != 0) {
            v = func_131770();
            if (v != 0) {
                ((void (*)(int))func_131768)(v);
            }
        } else {
            v = func_131770();
            if (v != 0) {
                ((void (*)(int))func_131760)(v);
            }
        }
        func_0D52D8(0);
        func_019DC0(4, 0);
        break;
    case 0:
    default:
        func_0D5530(2);
        break;
    }
}
