/* LEVEL_19:0x0B5EA8 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001AFDA8;
extern int D_001AFE0C;

extern int func_110118(int a);
extern int func_1102F8(int a);
extern void func_112438(void *o, int state);
extern void func_112450(void *o, int state);
extern int func_10F9D0(int id);
extern void func_0C5F20(int a, int b, int c, int d);
extern void func_0C5F58(int a);
extern int func_0C5A28(void);
extern int func_0C5A38(void);
extern void func_0C5D00(int a);

void func_0B5EA8(void *o)
{
    int a;
    int b;

    if (func_110118(1)) {
        func_112438(o, 0x1C);
        return;
    }
    if (func_1102F8(0)) {
        func_112450(o, 0x1D);
        return;
    }
    a = func_10F9D0(0xA5C);
    b = func_10F9D0(0x21A);
    func_0C5F20(1, a, b, 0);
    func_0C5F58(0xA);
    a = func_0C5A28();
    if (func_0C5A38() != 0) {
        switch (a) {
        case 1:
            func_0C5D00(0);
            if (D_001AFDA8 != 0) {
                D_001AFE0C = 0x1A;
                func_112450(o, 0x13);
            } else {
                func_112450(o, 0x1E);
            }
            break;
        case 2:
            func_0C5D00(0);
            func_112450(o, 0x1E);
            break;
        }
    }
}
