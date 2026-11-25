/* LEVEL_20:0x09A558 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0B0680(void);
extern int func_0F7938(void);
extern void func_0F7930(void);
extern void func_0F7928(void);
extern void func_0B0958(int value);
extern void func_016950(int a, int b);
extern void func_0B0BB0(int value);

extern unsigned char D_0010F23C;

void func_09A558(void)
{
    int v;

    switch (func_0B0680()) {
    case 2:
        func_0B0958(0);
        break;
    case 1:
        if (D_0010F23C != 0) {
            v = func_0F7938();
            if (v != 0) {
                ((void (*)(int))func_0F7930)(v);
            }
        } else {
            v = func_0F7938();
            if (v != 0) {
                ((void (*)(int))func_0F7928)(v);
            }
        }
        func_0B0958(0);
        func_016950(4, 0);
        break;
    case 0:
    default:
        func_0B0BB0(2);
        break;
    }
}
