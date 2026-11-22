/* LEVEL_09:0x0C4C10 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001EA9B0;
extern int D_001EAA14;

extern int func_12BB90(int a);
extern int func_12BD78(int a);
extern void func_12E660(void *o, int state);
extern void func_12E678(void *o, int state);
extern int func_12B448(int id);
extern void func_0D4200(int a, int b, int c, int d);
extern void func_0D4238(int a);
extern int func_0D3D08(void);
extern int func_0D3D18(void);
extern void func_0D3FE0(int a);

void func_0C4C10(void *o)
{
    int a;
    int b;

    if (func_12BB90(1)) {
        func_12E660(o, 0x1C);
        return;
    }
    if (func_12BD78(0)) {
        func_12E678(o, 0x1D);
        return;
    }
    a = func_12B448(0xA5C);
    b = func_12B448(0x21A);
    func_0D4200(1, a, b, 0);
    func_0D4238(0xA);
    a = func_0D3D08();
    if (func_0D3D18() != 0) {
        switch (a) {
        case 1:
            func_0D3FE0(0);
            if (D_001EA9B0 != 0) {
                D_001EAA14 = 0x1A;
                func_12E678(o, 0x13);
            } else {
                func_12E678(o, 0x1E);
            }
            break;
        case 2:
            func_0D3FE0(0);
            func_12E678(o, 0x1E);
            break;
        }
    }
}
