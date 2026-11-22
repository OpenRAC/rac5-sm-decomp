/* LEVEL_03:0x0C7748 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_00219230;
extern int D_00219294;

extern int func_130FC0(int a);
extern int func_1311A8(int a);
extern void func_133A90(void *o, int state);
extern void func_133AA8(void *o, int state);
extern int func_130878(int id);
extern void func_0D6D38(int a, int b, int c, int d);
extern void func_0D6D70(int a);
extern int func_0D6840(void);
extern int func_0D6850(void);
extern void func_0D6B18(int a);

void func_0C7748(void *o)
{
    int a;
    int b;

    if (func_130FC0(1)) {
        func_133A90(o, 0x1C);
        return;
    }
    if (func_1311A8(0)) {
        func_133AA8(o, 0x1D);
        return;
    }
    a = func_130878(0xA5C);
    b = func_130878(0x21A);
    func_0D6D38(1, a, b, 0);
    func_0D6D70(0xA);
    a = func_0D6840();
    if (func_0D6850() != 0) {
        switch (a) {
        case 1:
            func_0D6B18(0);
            if (D_00219230 != 0) {
                D_00219294 = 0x1A;
                func_133AA8(o, 0x13);
            } else {
                func_133AA8(o, 0x1E);
            }
            break;
        case 2:
            func_0D6B18(0);
            func_133AA8(o, 0x1E);
            break;
        }
    }
}
