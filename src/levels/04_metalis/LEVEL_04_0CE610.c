/* LEVEL_04:0x0CE610 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_0021A088;
extern unsigned char D_0020859C;

extern int func_13F078(int a);
extern int func_13E930(int id);
extern void func_0DC800(int a, int b, int c, int d);
extern void func_0DC838(int a);
extern int func_13F128(void);
extern int func_0DCD00(int a, int b, int c);
extern int func_13F198(void);
extern void func_13F438(void);
extern void func_141B60(int *p, int a);
extern void func_13F490(int a);
extern void func_027DC8(void);
extern int func_13F600(int a);
extern int func_13F210(void);
extern void func_027680(void);
extern int func_0278D0(void);
extern int func_01A528(int a, int b);
extern void func_141B90(int *p);

void func_0CE610(int *p)
{
    if (func_13F078(1) != 0) {
        func_0DC800(0, func_13E930(0xA6B), 0, 0);
        func_0DC838(5);
    } else if (func_13F128() != 0) {
        func_0DCD00(2, 0xA6A, 0x21A);
        func_13F198();
        func_13F438();
        D_0021A088 = 1;
        func_141B60(p, 0x1E);
        func_13F490(1);
    } else {
        func_027DC8();
        ((int (*)(int, int))func_13F600)(0, 1);
        D_0020859C = 0;
        func_13F210();
        func_027680();
        func_01A528(func_0278D0(), 0);
        func_13F490(1);
        func_141B90(p);
    }
}
