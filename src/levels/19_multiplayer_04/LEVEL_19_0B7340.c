/* LEVEL_19:0x0B7340 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001AFDC0;
extern unsigned char D_0019C024;

extern int func_110118(int a);
extern int func_10F9D0(int id);
extern void func_0C5F20(int a, int b, int c, int d);
extern void func_0C5F58(int a);
extern int func_1101C8(void);
extern int func_0C6410(int a, int b, int c);
extern int func_110238(void);
extern void func_110410(void);
extern void func_112450(int *p, int a);
extern void func_110438(int a);
extern void func_0258C8(void);
extern int func_1104F8(int a);
extern int func_110298(void);
extern void func_0252B8(void);
extern int func_025508(void);
extern int func_018918(int a, int b);
extern void func_112480(int *p);

void func_0B7340(int *p)
{
    if (func_110118(1) != 0) {
        func_0C5F20(0, func_10F9D0(0xA6B), 0, 0);
        func_0C5F58(5);
    } else if (func_1101C8() != 0) {
        func_0C6410(2, 0xA6A, 0x21A);
        func_110238();
        func_110410();
        D_001AFDC0 = 1;
        func_112450(p, 0x1E);
        func_110438(1);
    } else {
        func_0258C8();
        ((int (*)(int, int))func_1104F8)(0, 1);
        D_0019C024 = 0;
        func_110298();
        func_0252B8();
        func_018918(func_025508(), 0);
        func_110438(1);
        func_112480(p);
    }
}
