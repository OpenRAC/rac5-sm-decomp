/* LEVEL_22:0x0B5E10 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_0015FF30;
extern int D_0015FF94;

extern int func_10A0C8(int a);
extern int func_10A2B0(int a);
extern void func_10CB98(void *o, int state);
extern void func_10CBB0(void *o, int state);
extern int func_109980(int id);
extern void func_0C5490(int a, int b, int c, int d);
extern void func_0C54C8(int a);
extern int func_0C4F98(void);
extern int func_0C4FA8(void);
extern void func_0C5270(int a);

void func_0B5E10(void *o)
{
    int a;
    int b;

    if (func_10A0C8(1)) {
        func_10CB98(o, 0x1C);
        return;
    }
    if (func_10A2B0(0)) {
        func_10CBB0(o, 0x1D);
        return;
    }
    a = func_109980(0xA5C);
    b = func_109980(0x21A);
    func_0C5490(1, a, b, 0);
    func_0C54C8(0xA);
    a = func_0C4F98();
    if (func_0C4FA8() != 0) {
        switch (a) {
        case 1:
            func_0C5270(0);
            if (D_0015FF30 != 0) {
                D_0015FF94 = 0x1A;
                func_10CBB0(o, 0x13);
            } else {
                func_10CBB0(o, 0x1E);
            }
            break;
        case 2:
            func_0C5270(0);
            func_10CBB0(o, 0x1E);
            break;
        }
    }
}
