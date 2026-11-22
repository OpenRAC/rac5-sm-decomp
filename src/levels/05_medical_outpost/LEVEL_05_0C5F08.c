/* LEVEL_05:0x0C5F08 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001EFF30;
extern int D_001EFF94;

extern int func_12E570(int a);
extern int func_12E758(int a);
extern void func_131040(void *o, int state);
extern void func_131058(void *o, int state);
extern int func_12DE28(int id);
extern void func_0D54F8(int a, int b, int c, int d);
extern void func_0D5530(int a);
extern int func_0D5000(void);
extern int func_0D5010(void);
extern void func_0D52D8(int a);

void func_0C5F08(void *o)
{
    int a;
    int b;

    if (func_12E570(1)) {
        func_131040(o, 0x1C);
        return;
    }
    if (func_12E758(0)) {
        func_131058(o, 0x1D);
        return;
    }
    a = func_12DE28(0xA5C);
    b = func_12DE28(0x21A);
    func_0D54F8(1, a, b, 0);
    func_0D5530(0xA);
    a = func_0D5000();
    if (func_0D5010() != 0) {
        switch (a) {
        case 1:
            func_0D52D8(0);
            if (D_001EFF30 != 0) {
                D_001EFF94 = 0x1A;
                func_131058(o, 0x13);
            } else {
                func_131058(o, 0x1E);
            }
            break;
        case 2:
            func_0D52D8(0);
            func_131058(o, 0x1E);
            break;
        }
    }
}
