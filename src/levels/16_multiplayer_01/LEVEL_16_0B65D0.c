/* LEVEL_16:0x0B65D0 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001AEC28;
extern int D_001AEC8C;

extern int func_10FA78(int a);
extern int func_10FC58(int a);
extern void func_111D98(void *o, int state);
extern void func_111DB0(void *o, int state);
extern int func_10F330(int id);
extern void func_0C6648(int a, int b, int c, int d);
extern void func_0C6680(int a);
extern int func_0C6150(void);
extern int func_0C6160(void);
extern void func_0C6428(int a);

void func_0B65D0(void *o)
{
    int a;
    int b;

    if (func_10FA78(1)) {
        func_111D98(o, 0x1C);
        return;
    }
    if (func_10FC58(0)) {
        func_111DB0(o, 0x1D);
        return;
    }
    a = func_10F330(0xA5C);
    b = func_10F330(0x21A);
    func_0C6648(1, a, b, 0);
    func_0C6680(0xA);
    a = func_0C6150();
    if (func_0C6160() != 0) {
        switch (a) {
        case 1:
            func_0C6428(0);
            if (D_001AEC28 != 0) {
                D_001AEC8C = 0x1A;
                func_111DB0(o, 0x13);
            } else {
                func_111DB0(o, 0x1E);
            }
            break;
        case 2:
            func_0C6428(0);
            func_111DB0(o, 0x1E);
            break;
        }
    }
}
