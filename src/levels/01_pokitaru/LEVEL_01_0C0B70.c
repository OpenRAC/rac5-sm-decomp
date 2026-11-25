/* LEVEL_01:0x0C0B70 -- state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0D6A58(void);
extern int func_135DF8(void);
extern void func_135DF0(void);
extern void func_135DE8(void);
extern void func_0D6D30(int value);
extern void func_01A828(int a, int b);
extern void func_0D6F88(int value);

extern unsigned char D_001FEAE4;

void func_0C0B70(void)
{
    int v;

    switch (func_0D6A58()) {
    case 2:
        func_0D6D30(0);
        break;
    case 1:
        if (D_001FEAE4 != 0) {
            v = func_135DF8();
            if (v != 0) {
                ((void (*)(int))func_135DF0)(v);
            }
        } else {
            v = func_135DF8();
            if (v != 0) {
                ((void (*)(int))func_135DE8)(v);
            }
        }
        func_0D6D30(0);
        func_01A828(4, 0);
        break;
    case 0:
    default:
        func_0D6F88(2);
        break;
    }
}
