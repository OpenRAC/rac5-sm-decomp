/* LEVEL_01:0x0C7960 -- menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_00200BB0;
extern int D_00200C14;

extern int func_132BF8(int a);
extern int func_132DE0(int a);
extern void func_1356C8(void *o, int state);
extern void func_1356E0(void *o, int state);
extern int func_1324B0(int id);
extern void func_0D6F50(int a, int b, int c, int d);
extern void func_0D6F88(int a);
extern int func_0D6A58(void);
extern int func_0D6A68(void);
extern void func_0D6D30(int a);

void func_0C7960(void *o)
{
    int a;
    int b;

    if (func_132BF8(1)) {
        func_1356C8(o, 0x1C);
        return;
    }
    if (func_132DE0(0)) {
        func_1356E0(o, 0x1D);
        return;
    }
    a = func_1324B0(0xA5C);
    b = func_1324B0(0x21A);
    func_0D6F50(1, a, b, 0);
    func_0D6F88(0xA);
    a = func_0D6A58();
    if (func_0D6A68() != 0) {
        switch (a) {
        case 1:
            func_0D6D30(0);
            if (D_00200BB0 != 0) {
                D_00200C14 = 0x1A;
                func_1356E0(o, 0x13);
            } else {
                func_1356E0(o, 0x1E);
            }
            break;
        case 2:
            func_0D6D30(0);
            func_1356E0(o, 0x1E);
            break;
        }
    }
}
