/* LEVEL_10:0x0C8DA0 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_00209BB0;
extern int D_00209C14;

extern int func_130A58(int a);
extern int func_130C40(int a);
extern void func_133548(void *o, int state);
extern void func_133560(void *o, int state);
extern int func_130310(int id);
extern void func_0D8390(int a, int b, int c, int d);
extern void func_0D83C8(int a);
extern int func_0D7E98(void);
extern int func_0D7EA8(void);
extern void func_0D8170(int a);

void func_0C8DA0(void *o)
{
    int a;
    int b;

    if (func_130A58(1)) {
        func_133548(o, 0x1C);
        return;
    }
    if (func_130C40(0)) {
        func_133560(o, 0x1D);
        return;
    }
    a = func_130310(0xA5C);
    b = func_130310(0x21A);
    func_0D8390(1, a, b, 0);
    func_0D83C8(0xA);
    a = func_0D7E98();
    if (func_0D7EA8() != 0) {
        switch (a) {
        case 1:
            func_0D8170(0);
            if (D_00209BB0 != 0) {
                D_00209C14 = 0x1A;
                func_133560(o, 0x13);
            } else {
                func_133560(o, 0x1E);
            }
            break;
        case 2:
            func_0D8170(0);
            func_133560(o, 0x1E);
            break;
        }
    }
}
