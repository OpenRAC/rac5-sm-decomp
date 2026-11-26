/* LEVEL_23:0x0B7910 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0CD888(void);
extern int func_127570(void);
extern void func_127568(void);
extern void func_127560(void);
extern void func_0CDB60(int value);
extern void func_019338(int a, int b);
extern void func_0CDDB8(int value);

extern unsigned char D_001D1EE4;

void func_0B7910(void)
{
    int v;

    switch (func_0CD888()) {
    case 2:
        func_0CDB60(0);
        break;
    case 1:
        if (D_001D1EE4 != 0) {
            v = func_127570();
            if (v != 0) {
                ((void (*)(int))func_127568)(v);
            }
        } else {
            v = func_127570();
            if (v != 0) {
                ((void (*)(int))func_127560)(v);
            }
        }
        func_0CDB60(0);
        func_019338(4, 0);
        break;
    case 0:
    default:
        func_0CDDB8(2);
        break;
    }
}
