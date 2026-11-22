/* LEVEL_18:0x0B55A8 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001B00A8;
extern int D_001B010C;

extern int func_10E728(int a);
extern int func_10E908(int a);
extern void func_110A48(void *o, int state);
extern void func_110A60(void *o, int state);
extern int func_10DFE0(int id);
extern void func_0C5620(int a, int b, int c, int d);
extern void func_0C5658(int a);
extern int func_0C5128(void);
extern int func_0C5138(void);
extern void func_0C5400(int a);

void func_0B55A8(void *o)
{
    int a;
    int b;

    if (func_10E728(1)) {
        func_110A48(o, 0x1C);
        return;
    }
    if (func_10E908(0)) {
        func_110A60(o, 0x1D);
        return;
    }
    a = func_10DFE0(0xA5C);
    b = func_10DFE0(0x21A);
    func_0C5620(1, a, b, 0);
    func_0C5658(0xA);
    a = func_0C5128();
    if (func_0C5138() != 0) {
        switch (a) {
        case 1:
            func_0C5400(0);
            if (D_001B00A8 != 0) {
                D_001B010C = 0x1A;
                func_110A60(o, 0x13);
            } else {
                func_110A60(o, 0x1E);
            }
            break;
        case 2:
            func_0C5400(0);
            func_110A60(o, 0x1E);
            break;
        }
    }
}
