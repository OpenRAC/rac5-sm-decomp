/* LEVEL_18:0x0B6A40 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001B00C0;
extern unsigned char D_0019C324;

extern int func_10E728(int a);
extern int func_10DFE0(int id);
extern void func_0C5620(int a, int b, int c, int d);
extern void func_0C5658(int a);
extern int func_10E7D8(void);
extern int func_0C5B10(int a, int b, int c);
extern int func_10E848(void);
extern void func_10EA20(void);
extern void func_110A60(int *p, int a);
extern void func_10EA48(int a);
extern void func_0252D0(void);
extern int func_10EB08(int a);
extern int func_10E8A8(void);
extern void func_024CC0(void);
extern int func_024F10(void);
extern int func_018260(int a, int b);
extern void func_110A90(int *p);

void func_0B6A40(int *p)
{
    if (func_10E728(1) != 0) {
        func_0C5620(0, func_10DFE0(0xA6B), 0, 0);
        func_0C5658(5);
    } else if (func_10E7D8() != 0) {
        func_0C5B10(2, 0xA6A, 0x21A);
        func_10E848();
        func_10EA20();
        D_001B00C0 = 1;
        func_110A60(p, 0x1E);
        func_10EA48(1);
    } else {
        func_0252D0();
        ((int (*)(int, int))func_10EB08)(0, 1);
        D_0019C324 = 0;
        func_10E8A8();
        func_024CC0();
        func_018260(func_024F10(), 0);
        func_10EA48(1);
        func_110A90(p);
    }
}
