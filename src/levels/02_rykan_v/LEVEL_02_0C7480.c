/* LEVEL_02:0x0C7480 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0DD3E8(void);
extern int func_13C1A8(void);
extern void func_13C1A0(void);
extern void func_13C198(void);
extern void func_0DD6C0(int value);
extern void func_01B188(int a, int b);
extern void func_0DD918(int value);

extern unsigned char D_00213AA4;

void func_0C7480(void)
{
    int v;

    switch (func_0DD3E8()) {
    case 2:
        func_0DD6C0(0);
        break;
    case 1:
        if (D_00213AA4 != 0) {
            v = func_13C1A8();
            if (v != 0) {
                ((void (*)(int))func_13C1A0)(v);
            }
        } else {
            v = func_13C1A8();
            if (v != 0) {
                ((void (*)(int))func_13C198)(v);
            }
        }
        func_0DD6C0(0);
        func_01B188(4, 0);
        break;
    case 0:
    default:
        func_0DD918(2);
        break;
    }
}
