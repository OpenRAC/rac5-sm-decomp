/* LEVEL_10:0x0C1EC0 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0D7E98(void);
extern int func_133C78(void);
extern void func_133C70(void);
extern void func_133C68(void);
extern void func_0D8170(int value);
extern void func_019EA8(int a, int b);
extern void func_0D83C8(int value);

extern unsigned char D_00207AE4;

void func_0C1EC0(void)
{
    int v;

    switch (func_0D7E98()) {
    case 2:
        func_0D8170(0);
        break;
    case 1:
        if (D_00207AE4 != 0) {
            v = func_133C78();
            if (v != 0) {
                ((void (*)(int))func_133C70)(v);
            }
        } else {
            v = func_133C78();
            if (v != 0) {
                ((void (*)(int))func_133C68)(v);
            }
        }
        func_0D8170(0);
        func_019EA8(4, 0);
        break;
    case 0:
    default:
        func_0D83C8(2);
        break;
    }
}
