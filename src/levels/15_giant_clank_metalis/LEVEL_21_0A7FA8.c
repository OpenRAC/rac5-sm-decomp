/* LEVEL_21:0x0A7FA8 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_00155830;
extern int D_00155894;

extern int func_0F1AC0(int a);
extern int func_0F1CA8(int a);
extern void func_0F4590(void *o, int state);
extern void func_0F45A8(void *o, int state);
extern int func_0F1378(int id);
extern void func_0B7590(int a, int b, int c, int d);
extern void func_0B75C8(int a);
extern int func_0B7098(void);
extern int func_0B70A8(void);
extern void func_0B7370(int a);

void func_0A7FA8(void *o)
{
    int a;
    int b;

    if (func_0F1AC0(1)) {
        func_0F4590(o, 0x1C);
        return;
    }
    if (func_0F1CA8(0)) {
        func_0F45A8(o, 0x1D);
        return;
    }
    a = func_0F1378(0xA5C);
    b = func_0F1378(0x21A);
    func_0B7590(1, a, b, 0);
    func_0B75C8(0xA);
    a = func_0B7098();
    if (func_0B70A8() != 0) {
        switch (a) {
        case 1:
            func_0B7370(0);
            if (D_00155830 != 0) {
                D_00155894 = 0x1A;
                func_0F45A8(o, 0x13);
            } else {
                func_0F45A8(o, 0x1E);
            }
            break;
        case 2:
            func_0B7370(0);
            func_0F45A8(o, 0x1E);
            break;
        }
    }
}
