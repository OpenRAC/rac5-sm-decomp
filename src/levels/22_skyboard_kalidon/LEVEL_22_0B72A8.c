/* LEVEL_22:0x0B72A8 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_0015FF48;
extern unsigned char D_0014E79C;

extern int func_10A0C8(int a);
extern int func_109980(int id);
extern void func_0C5490(int a, int b, int c, int d);
extern void func_0C54C8(int a);
extern int func_10A178(void);
extern int func_0C5980(int a, int b, int c);
extern int func_10A1E8(void);
extern void func_10A488(void);
extern void func_10CBB0(int *p, int a);
extern void func_10A4E0(int a);
extern void func_0229F8(void);
extern int func_10A650(int a);
extern int func_10A260(void);
extern void func_022380(void);
extern int func_0225D0(void);
extern int func_016EC0(int a, int b);
extern void func_10CBE0(int *p);

void func_0B72A8(int *p)
{
    if (func_10A0C8(1) != 0) {
        func_0C5490(0, func_109980(0xA6B), 0, 0);
        func_0C54C8(5);
    } else if (func_10A178() != 0) {
        func_0C5980(2, 0xA6A, 0x21A);
        func_10A1E8();
        func_10A488();
        D_0015FF48 = 1;
        func_10CBB0(p, 0x1E);
        func_10A4E0(1);
    } else {
        func_0229F8();
        ((int (*)(int, int))func_10A650)(0, 1);
        D_0014E79C = 0;
        func_10A260();
        func_022380();
        func_016EC0(func_0225D0(), 0);
        func_10A4E0(1);
        func_10CBE0(p);
    }
}
