/* LEVEL_18:0x0AF000 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0C5128(void);
extern int func_124920(void);
extern void func_124918(void);
extern void func_124910(void);
extern void func_0C5400(int value);
extern void func_0181E0(int a, int b);
extern void func_0C5658(int value);

extern unsigned char D_001ADFDC;

void func_0AF000(void)
{
    int v;

    switch (func_0C5128()) {
    case 2:
        func_0C5400(0);
        break;
    case 1:
        if (D_001ADFDC != 0) {
            v = func_124920();
            if (v != 0) {
                ((void (*)(int))func_124918)(v);
            }
        } else {
            v = func_124920();
            if (v != 0) {
                ((void (*)(int))func_124910)(v);
            }
        }
        func_0C5400(0);
        func_0181E0(4, 0);
        break;
    case 0:
    default:
        func_0C5658(2);
        break;
    }
}
