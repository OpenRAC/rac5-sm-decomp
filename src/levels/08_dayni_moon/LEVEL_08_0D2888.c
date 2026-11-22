/* LEVEL_08:0x0D2888 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_00249A70;
extern int D_00249AD4;

extern int func_144130(int a);
extern int func_144318(int a);
extern void func_146C00(void *o, int state);
extern void func_146C18(void *o, int state);
extern int func_1439E8(int id);
extern void func_0E1F10(int a, int b, int c, int d);
extern void func_0E1F48(int a);
extern int func_0E1A18(void);
extern int func_0E1A28(void);
extern void func_0E1CF0(int a);

void func_0D2888(void *o)
{
    int a;
    int b;

    if (func_144130(1)) {
        func_146C00(o, 0x1C);
        return;
    }
    if (func_144318(0)) {
        func_146C18(o, 0x1D);
        return;
    }
    a = func_1439E8(0xA5C);
    b = func_1439E8(0x21A);
    func_0E1F10(1, a, b, 0);
    func_0E1F48(0xA);
    a = func_0E1A18();
    if (func_0E1A28() != 0) {
        switch (a) {
        case 1:
            func_0E1CF0(0);
            if (D_00249A70 != 0) {
                D_00249AD4 = 0x1A;
                func_146C18(o, 0x13);
            } else {
                func_146C18(o, 0x1E);
            }
            break;
        case 2:
            func_0E1CF0(0);
            func_146C18(o, 0x1E);
            break;
        }
    }
}
