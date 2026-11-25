/* LEVEL_05:0x0C73A0 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001EFF48;
extern unsigned char D_001DE79C;

extern int func_12E570(int a);
extern int func_12DE28(int id);
extern void func_0D54F8(int a, int b, int c, int d);
extern void func_0D5530(int a);
extern int func_12E620(void);
extern int func_0D59E8(int a, int b, int c);
extern int func_12E690(void);
extern void func_12E930(void);
extern void func_131058(int *p, int a);
extern void func_12E988(int a);
extern void func_026F78(void);
extern int func_12EAF8(int a);
extern int func_12E708(void);
extern void func_026830(void);
extern int func_026A80(void);
extern int func_019E40(int a, int b);
extern void func_131088(int *p);

void func_0C73A0(int *p)
{
    if (func_12E570(1) != 0) {
        func_0D54F8(0, func_12DE28(0xA6B), 0, 0);
        func_0D5530(5);
    } else if (func_12E620() != 0) {
        func_0D59E8(2, 0xA6A, 0x21A);
        func_12E690();
        func_12E930();
        D_001EFF48 = 1;
        func_131058(p, 0x1E);
        func_12E988(1);
    } else {
        func_026F78();
        ((int (*)(int, int))func_12EAF8)(0, 1);
        D_001DE79C = 0;
        func_12E708();
        func_026830();
        func_019E40(func_026A80(), 0);
        func_12E988(1);
        func_131088(p);
    }
}
