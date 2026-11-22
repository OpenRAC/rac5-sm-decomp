/* LEVEL_04:0x0CD178 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_0021A070;
extern int D_0021A0D4;

extern int func_13F078(int a);
extern int func_13F260(int a);
extern void func_141B48(void *o, int state);
extern void func_141B60(void *o, int state);
extern int func_13E930(int id);
extern void func_0DC800(int a, int b, int c, int d);
extern void func_0DC838(int a);
extern int func_0DC308(void);
extern int func_0DC318(void);
extern void func_0DC5E0(int a);

void func_0CD178(void *o)
{
    int a;
    int b;

    if (func_13F078(1)) {
        func_141B48(o, 0x1C);
        return;
    }
    if (func_13F260(0)) {
        func_141B60(o, 0x1D);
        return;
    }
    a = func_13E930(0xA5C);
    b = func_13E930(0x21A);
    func_0DC800(1, a, b, 0);
    func_0DC838(0xA);
    a = func_0DC308();
    if (func_0DC318() != 0) {
        switch (a) {
        case 1:
            func_0DC5E0(0);
            if (D_0021A070 != 0) {
                D_0021A0D4 = 0x1A;
                func_141B60(o, 0x13);
            } else {
                func_141B60(o, 0x1E);
            }
            break;
        case 2:
            func_0DC5E0(0);
            func_141B60(o, 0x1E);
            break;
        }
    }
}
