/* LEVEL_04:0x0C6388 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0DC308(void);
extern int func_14ED08(void);
extern void func_14F6E8(int);
extern void func_14F6C0(int);
extern void func_0DC5E0(int value);
extern void func_01A4A8(int a, int b);
extern void func_0DC838(int value);

extern unsigned char D_00217FA4;

void func_0C6388(void)
{
    int v;

    switch (func_0DC308()) {
    case 2:
        func_0DC5E0(0);
        break;
    case 1:
        if (D_00217FA4 != 0) {
            v = func_14ED08();
            if (v != 0) {
                func_14F6E8(v);
            }
        } else {
            v = func_14ED08();
            if (v != 0) {
                func_14F6C0(v);
            }
        }
        func_0DC5E0(0);
        func_01A4A8(4, 0);
        break;
    case 0:
    default:
        func_0DC838(2);
        break;
    }
}
