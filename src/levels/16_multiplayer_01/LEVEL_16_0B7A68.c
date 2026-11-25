/* LEVEL_16:0x0B7A68 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001AEC40;
extern unsigned char D_0019AEA4;

extern int func_10FA78(int a);
extern int func_10F330(int id);
extern void func_0C6648(int a, int b, int c, int d);
extern void func_0C6680(int a);
extern int func_10FB28(void);
extern int func_0C6B38(int a, int b, int c);
extern int func_10FB98(void);
extern void func_10FD70(void);
extern void func_111DB0(int *p, int a);
extern void func_10FD98(int a);
extern void func_025D20(void);
extern int func_10FE58(int a);
extern int func_10FBF8(void);
extern void func_025710(void);
extern int func_025960(void);
extern int func_018C18(int a, int b);
extern void func_111DE0(int *p);

void func_0B7A68(int *p)
{
    if (func_10FA78(1) != 0) {
        func_0C6648(0, func_10F330(0xA6B), 0, 0);
        func_0C6680(5);
    } else if (func_10FB28() != 0) {
        func_0C6B38(2, 0xA6A, 0x21A);
        func_10FB98();
        func_10FD70();
        D_001AEC40 = 1;
        func_111DB0(p, 0x1E);
        func_10FD98(1);
    } else {
        func_025D20();
        ((int (*)(int, int))func_10FE58)(0, 1);
        D_0019AEA4 = 0;
        func_10FBF8();
        func_025710();
        func_018C18(func_025960(), 0);
        func_10FD98(1);
        func_111DE0(p);
    }
}
