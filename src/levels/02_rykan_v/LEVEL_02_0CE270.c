/* LEVEL_02:0x0CE270 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_00215B70;
extern int D_00215BD4;

extern int func_138FA8(int a);
extern int func_139190(int a);
extern void func_13BA78(void *o, int state);
extern void func_13BA90(void *o, int state);
extern int func_138860(int id);
extern void func_0DD8E0(int a, int b, int c, int d);
extern void func_0DD918(int a);
extern int func_0DD3E8(void);
extern int func_0DD3F8(void);
extern void func_0DD6C0(int a);

void func_0CE270(void *o)
{
    int a;
    int b;

    if (func_138FA8(1)) {
        func_13BA78(o, 0x1C);
        return;
    }
    if (func_139190(0)) {
        func_13BA90(o, 0x1D);
        return;
    }
    a = func_138860(0xA5C);
    b = func_138860(0x21A);
    func_0DD8E0(1, a, b, 0);
    func_0DD918(0xA);
    a = func_0DD3E8();
    if (func_0DD3F8() != 0) {
        switch (a) {
        case 1:
            func_0DD6C0(0);
            if (D_00215B70 != 0) {
                D_00215BD4 = 0x1A;
                func_13BA90(o, 0x13);
            } else {
                func_13BA90(o, 0x1E);
            }
            break;
        case 2:
            func_0DD6C0(0);
            func_13BA90(o, 0x1E);
            break;
        }
    }
}
