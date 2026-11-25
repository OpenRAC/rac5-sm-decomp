/* LEVEL_20:0x0A1F98 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_00111320;
extern unsigned char D_000FD58C;

extern int func_0E2860(int a);
extern int func_0E2118(int id);
extern void func_0B0B78(int a, int b, int c, int d);
extern void func_0B0BB0(int a);
extern int func_0E2910(void);
extern int func_0B1068(int a, int b, int c);
extern int func_0E2980(void);
extern void func_0E2B58(void);
extern void func_0E4B98(int *p, int a);
extern void func_0E2B80(int a);
extern void func_022840(void);
extern int func_0E2C40(int a);
extern int func_0E29E0(void);
extern void func_022288(void);
extern int func_022480(void);
extern int func_0169D0(int a, int b);
extern void func_0E4BC8(int *p);

void func_0A1F98(int *p)
{
    if (func_0E2860(1) != 0) {
        func_0B0B78(0, func_0E2118(0xA6B), 0, 0);
        func_0B0BB0(5);
    } else if (func_0E2910() != 0) {
        func_0B1068(2, 0xA6A, 0x21A);
        func_0E2980();
        func_0E2B58();
        D_00111320 = 1;
        func_0E4B98(p, 0x1E);
        func_0E2B80(1);
    } else {
        func_022840();
        ((int (*)(int, int))func_0E2C40)(0, 1);
        D_000FD58C = 0;
        func_0E29E0();
        func_022288();
        func_0169D0(func_022480(), 0);
        func_0E2B80(1);
        func_0E4BC8(p);
    }
}
