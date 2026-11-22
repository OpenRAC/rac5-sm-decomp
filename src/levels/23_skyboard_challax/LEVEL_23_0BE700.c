/* LEVEL_23:0x0BE700 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001D3FB0;
extern int D_001D4014;

extern int func_124370(int a);
extern int func_124558(int a);
extern void func_126E40(void *o, int state);
extern void func_126E58(void *o, int state);
extern int func_123C28(int id);
extern void func_0CDD80(int a, int b, int c, int d);
extern void func_0CDDB8(int a);
extern int func_0CD888(void);
extern int func_0CD898(void);
extern void func_0CDB60(int a);

void func_0BE700(void *o)
{
    int a;
    int b;

    if (func_124370(1)) {
        func_126E40(o, 0x1C);
        return;
    }
    if (func_124558(0)) {
        func_126E58(o, 0x1D);
        return;
    }
    a = func_123C28(0xA5C);
    b = func_123C28(0x21A);
    func_0CDD80(1, a, b, 0);
    func_0CDDB8(0xA);
    a = func_0CD888();
    if (func_0CD898() != 0) {
        switch (a) {
        case 1:
            func_0CDB60(0);
            if (D_001D3FB0 != 0) {
                D_001D4014 = 0x1A;
                func_126E58(o, 0x13);
            } else {
                func_126E58(o, 0x1E);
            }
            break;
        case 2:
            func_0CDB60(0);
            func_126E58(o, 0x1E);
            break;
        }
    }
}
