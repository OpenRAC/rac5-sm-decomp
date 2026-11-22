/* LEVEL_20:0x0A0B00 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_00111308;
extern int D_0011136C;

extern int func_0E2860(int a);
extern int func_0E2A40(int a);
extern void func_0E4B80(void *o, int state);
extern void func_0E4B98(void *o, int state);
extern int func_0E2118(int id);
extern void func_0B0B78(int a, int b, int c, int d);
extern void func_0B0BB0(int a);
extern int func_0B0680(void);
extern int func_0B0690(void);
extern void func_0B0958(int a);

void func_0A0B00(void *o)
{
    int a;
    int b;

    if (func_0E2860(1)) {
        func_0E4B80(o, 0x1C);
        return;
    }
    if (func_0E2A40(0)) {
        func_0E4B98(o, 0x1D);
        return;
    }
    a = func_0E2118(0xA5C);
    b = func_0E2118(0x21A);
    func_0B0B78(1, a, b, 0);
    func_0B0BB0(0xA);
    a = func_0B0680();
    if (func_0B0690() != 0) {
        switch (a) {
        case 1:
            func_0B0958(0);
            if (D_00111308 != 0) {
                D_0011136C = 0x1A;
                func_0E4B98(o, 0x13);
            } else {
                func_0E4B98(o, 0x1E);
            }
            break;
        case 2:
            func_0B0958(0);
            func_0E4B98(o, 0x1E);
            break;
        }
    }
}
