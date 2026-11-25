/* LEVEL_16:0x0B0028 -- placement copy of LEVEL_01_0C0B70.c: state dispatcher: state 1 forwards the lookup result to one of two handlers, then runs the shared step and the 4-step; state 2 runs the shared step; anything else starts the 2 handler. */
extern unsigned int func_0C6150(void);
extern int func_125868(void);
extern void func_125860(void);
extern void func_125858(void);
extern void func_0C6428(int value);
extern void func_018B98(int a, int b);
extern void func_0C6680(int value);

extern unsigned char D_001ACB5C;

void func_0B0028(void)
{
    int v;

    switch (func_0C6150()) {
    case 2:
        func_0C6428(0);
        break;
    case 1:
        if (D_001ACB5C != 0) {
            v = func_125868();
            if (v != 0) {
                ((void (*)(int))func_125860)(v);
            }
        } else {
            v = func_125868();
            if (v != 0) {
                ((void (*)(int))func_125858)(v);
            }
        }
        func_0C6428(0);
        func_018B98(4, 0);
        break;
    case 0:
    default:
        func_0C6680(2);
        break;
    }
}
