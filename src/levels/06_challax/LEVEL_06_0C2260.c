/* LEVEL_06:0x0C2260 -- placement copy of LEVEL_01_0C7960.c: menu state handler: forwards the first two button checks as screen switches, otherwise shows the prompt and acts on its answer. */
extern unsigned char D_001EFAB0;
extern int D_001EFB14;

extern int func_1292C8(int a);
extern int func_1294B0(int a);
extern void func_12BD98(void *o, int state);
extern void func_12BDB0(void *o, int state);
extern int func_128B80(int id);
extern void func_0D1850(int a, int b, int c, int d);
extern void func_0D1888(int a);
extern int func_0D1358(void);
extern int func_0D1368(void);
extern void func_0D1630(int a);

void func_0C2260(void *o)
{
    int a;
    int b;

    if (func_1292C8(1)) {
        func_12BD98(o, 0x1C);
        return;
    }
    if (func_1294B0(0)) {
        func_12BDB0(o, 0x1D);
        return;
    }
    a = func_128B80(0xA5C);
    b = func_128B80(0x21A);
    func_0D1850(1, a, b, 0);
    func_0D1888(0xA);
    a = func_0D1358();
    if (func_0D1368() != 0) {
        switch (a) {
        case 1:
            func_0D1630(0);
            if (D_001EFAB0 != 0) {
                D_001EFB14 = 0x1A;
                func_12BDB0(o, 0x13);
            } else {
                func_12BDB0(o, 0x1E);
            }
            break;
        case 2:
            func_0D1630(0);
            func_12BDB0(o, 0x1E);
            break;
        }
    }
}
