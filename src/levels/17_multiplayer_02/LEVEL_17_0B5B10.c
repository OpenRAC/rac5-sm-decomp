/* LEVEL_17:0x0B5B10 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001A2228;
extern int D_001A228C;

extern int func_10EFF0(int a);
extern int func_10F1D0(int a);
extern void func_111310(void *o, int state);
extern void func_111328(void *o, int state);
extern int func_10E8A8(int id);
extern void func_0C5B88(int a, int b, int c, int d);
extern void func_0C5BC0(int a);
extern int func_0C5690(void);
extern int func_0C56A0(void);
extern void func_0C5968(int a);

void func_0B5B10(void *o)
{
    int a;
    int b;

    if (func_10EFF0(1)) {
        func_111310(o, 0x1C);
        return;
    }
    if (func_10F1D0(0)) {
        func_111328(o, 0x1D);
        return;
    }
    a = func_10E8A8(0xA5C);
    b = func_10E8A8(0x21A);
    func_0C5B88(1, a, b, 0);
    func_0C5BC0(0xA);
    a = func_0C5690();
    if (func_0C56A0() != 0) {
        switch (a) {
        case 1:
            func_0C5968(0);
            if (D_001A2228 != 0) {
                D_001A228C = 0x1A;
                func_111328(o, 0x13);
            } else {
                func_111328(o, 0x1E);
            }
            break;
        case 2:
            func_0C5968(0);
            func_111328(o, 0x1E);
            break;
        }
    }
}
