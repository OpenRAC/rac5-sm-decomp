/* LEVEL_07:0x0C99C0 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_00214EB0;
extern int D_00214F14;

extern int func_135BF8(int a);
extern int func_135DE0(int a);
extern void func_1386C8(void *o, int state);
extern void func_1386E0(void *o, int state);
extern int func_1354B0(int id);
extern void func_0D8FB0(int a, int b, int c, int d);
extern void func_0D8FE8(int a);
extern int func_0D8AB8(void);
extern int func_0D8AC8(void);
extern void func_0D8D90(int a);

void func_0C99C0(void *o)
{
    int a;
    int b;

    if (func_135BF8(1)) {
        func_1386C8(o, 0x1C);
        return;
    }
    if (func_135DE0(0)) {
        func_1386E0(o, 0x1D);
        return;
    }
    a = func_1354B0(0xA5C);
    b = func_1354B0(0x21A);
    func_0D8FB0(1, a, b, 0);
    func_0D8FE8(0xA);
    a = func_0D8AB8();
    if (func_0D8AC8() != 0) {
        switch (a) {
        case 1:
            func_0D8D90(0);
            if (D_00214EB0 != 0) {
                D_00214F14 = 0x1A;
                func_1386E0(o, 0x13);
            } else {
                func_1386E0(o, 0x1E);
            }
            break;
        case 2:
            func_0D8D90(0);
            func_1386E0(o, 0x1E);
            break;
        }
    }
}
