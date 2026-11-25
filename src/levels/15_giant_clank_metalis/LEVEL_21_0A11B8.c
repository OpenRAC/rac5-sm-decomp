/* LEVEL_21:0x0A11B8 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0B7098(void);
extern int func_0F4CC8(void);
extern void func_0F4CC0(void);
extern void func_0F4CB8(void);
extern void func_0B7370(int value);
extern void func_016A10(int a, int b);
extern void func_0B75C8(int value);

extern unsigned char D_00153764;

void func_0A11B8(void)
{
    int v;

    switch (func_0B7098()) {
    case 2:
        func_0B7370(0);
        break;
    case 1:
        if (D_00153764 != 0) {
            v = func_0F4CC8();
            if (v != 0) {
                ((void (*)(int))func_0F4CC0)(v);
            }
        } else {
            v = func_0F4CC8();
            if (v != 0) {
                ((void (*)(int))func_0F4CB8)(v);
            }
        }
        func_0B7370(0);
        func_016A10(4, 0);
        break;
    case 0:
    default:
        func_0B75C8(2);
        break;
    }
}
