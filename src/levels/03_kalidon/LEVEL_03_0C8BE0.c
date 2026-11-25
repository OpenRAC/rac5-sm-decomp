/* LEVEL_03:0x0C8BE0 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_00219248;
extern unsigned char D_00207A9C;

extern int func_130FC0(int a);
extern int func_130878(int id);
extern void func_0D6D38(int a, int b, int c, int d);
extern void func_0D6D70(int a);
extern int func_131070(void);
extern int func_0D7228(int a, int b, int c);
extern int func_1310E0(void);
extern void func_131380(void);
extern void func_133AA8(int *p, int a);
extern void func_1313D8(int a);
extern void func_028018(void);
extern int func_131548(int a);
extern int func_131158(void);
extern void func_0278D0(void);
extern int func_027B20(void);
extern int func_01A610(int a, int b);
extern void func_133AD8(int *p);

void func_0C8BE0(int *p)
{
    if (func_130FC0(1) != 0) {
        func_0D6D38(0, func_130878(0xA6B), 0, 0);
        func_0D6D70(5);
    } else if (func_131070() != 0) {
        func_0D7228(2, 0xA6A, 0x21A);
        func_1310E0();
        func_131380();
        D_00219248 = 1;
        func_133AA8(p, 0x1E);
        func_1313D8(1);
    } else {
        func_028018();
        ((int (*)(int, int))func_131548)(0, 1);
        D_00207A9C = 0;
        func_131158();
        func_0278D0();
        func_01A610(func_027B20(), 0);
        func_1313D8(1);
        func_133AD8(p);
    }
}
