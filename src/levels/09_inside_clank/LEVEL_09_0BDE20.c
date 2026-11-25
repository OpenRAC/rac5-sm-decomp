/* LEVEL_09:0x0BDE20 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0D3D08(void);
extern int func_12ED90(void);
extern void func_12ED88(void);
extern void func_12ED80(void);
extern void func_0D3FE0(int value);
extern void func_019C18(int a, int b);
extern void func_0D4238(int value);

extern unsigned char D_001E88E4;

void func_0BDE20(void)
{
    int v;

    switch (func_0D3D08()) {
    case 2:
        func_0D3FE0(0);
        break;
    case 1:
        if (D_001E88E4 != 0) {
            v = func_12ED90();
            if (v != 0) {
                ((void (*)(int))func_12ED88)(v);
            }
        } else {
            v = func_12ED90();
            if (v != 0) {
                ((void (*)(int))func_12ED80)(v);
            }
        }
        func_0D3FE0(0);
        func_019C18(4, 0);
        break;
    case 0:
    default:
        func_0D4238(2);
        break;
    }
}
