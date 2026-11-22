/* FRONTEND:0x017940 -- shows the status prompt for the current screen and forwards the choice to the matching handler. */

extern int D_000304AC;

extern int func_0205B8(int a);
extern int func_0207B0(int a);
extern void func_022988(int *p, int v);
extern void func_0229A0(int *p, int a1);
extern char *func_01F778(int id);
extern void func_0140E0(int a, int b, int c, int d);
extern void func_014118(int a);
extern int func_013BF0(void);
extern int func_013C00(void);
extern void func_013EC0(int a);

void func_017940(int *o)
{
    int kind;
    char *a;
    char *b;
    char *c;

    if (func_0205B8(1)) {
        func_022988(o, 0x1C);
        return;
    }
    if (func_0207B0(0)) {
        func_0229A0(o, 0x1D);
        return;
    }
    if (D_000304AC == 1) {
        a = func_01F778(0xA5C);
        b = func_01F778(0x30B);
        func_0140E0(3, (int)a, (int)b, (int)func_01F778(0x218));
    } else {
        c = func_01F778(0xA5C);
        func_0140E0(1, (int)c, (int)func_01F778(0x21A), 0);
    }
    func_014118(10);
    kind = func_013BF0();
    if (func_013C00()) {
        switch (kind) {
        case 1:
            func_013EC0(0);
            if (D_000304AC == 1) {
                func_0229A0(o, 0x20);
            } else {
                func_0229A0(o, 0x1E);
            }
            break;
        case 2:
            func_013EC0(0);
            func_0229A0(o, 0x1E);
            break;
        }
    }
}
