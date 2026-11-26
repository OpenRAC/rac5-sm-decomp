/* LEVEL_06:0x0BB470 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0D1358(void);
extern int func_12C4C8(void);
extern void func_12C4C0(void);
extern void func_12C4B8(void);
extern void func_0D1630(int value);
extern void func_019028(int a, int b);
extern void func_0D1888(int value);

extern unsigned char D_001ED9E4;

void func_0BB470(void)
{
    int v;

    switch (func_0D1358()) {
    case 2:
        func_0D1630(0);
        break;
    case 1:
        if (D_001ED9E4 != 0) {
            v = func_12C4C8();
            if (v != 0) {
                ((void (*)(int))func_12C4C0)(v);
            }
        } else {
            v = func_12C4C8();
            if (v != 0) {
                ((void (*)(int))func_12C4B8)(v);
            }
        }
        func_0D1630(0);
        func_019028(4, 0);
        break;
    case 0:
    default:
        func_0D1888(2);
        break;
    }
}
