/* LEVEL_06:0x0C36F8 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001EFAC8;
extern unsigned char D_001DE31C;

extern int func_1292C8(int a);
extern int func_128B80(int id);
extern void func_0D1850(int a, int b, int c, int d);
extern void func_0D1888(int a);
extern int func_129378(void);
extern int func_0D1D40(int a, int b, int c);
extern int func_1293E8(void);
extern void func_129688(void);
extern void func_12BDB0(int *p, int a);
extern void func_1296E0(int a);
extern void func_0266E8(void);
extern int func_129850(int a);
extern int func_129460(void);
extern void func_025FA0(void);
extern int func_0261F0(void);
extern int func_0190A8(int a, int b);
extern void func_12BDE0(int *p);

void func_0C36F8(int *p)
{
    if (func_1292C8(1) != 0) {
        func_0D1850(0, func_128B80(0xA6B), 0, 0);
        func_0D1888(5);
    } else if (func_129378() != 0) {
        func_0D1D40(2, 0xA6A, 0x21A);
        func_1293E8();
        func_129688();
        D_001EFAC8 = 1;
        func_12BDB0(p, 0x1E);
        func_1296E0(1);
    } else {
        func_0266E8();
        ((int (*)(int, int))func_129850)(0, 1);
        D_001DE31C = 0;
        func_129460();
        func_025FA0();
        func_0190A8(func_0261F0(), 0);
        func_1296E0(1);
        func_12BDE0(p);
    }
}
