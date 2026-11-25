/* LEVEL_15:0x0A9440 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_00155848;
extern unsigned char D_00144084;

extern int func_0F1AC0(int a);
extern int func_0F1378(int id);
extern void func_0B7590(int a, int b, int c, int d);
extern void func_0B75C8(int a);
extern int func_0F1B70(void);
extern int func_0B7A80(int a, int b, int c);
extern int func_0F1BE0(void);
extern void func_0F1E80(void);
extern void func_0F45A8(int *p, int a);
extern void func_0F1ED8(int a);
extern void func_022018(void);
extern int func_0F2048(int a);
extern int func_0F1C58(void);
extern void func_0219A0(void);
extern int func_021BF0(void);
extern int func_016A90(int a, int b);
extern void func_0F45D8(int *p);

void func_0A9440(int *p)
{
    if (func_0F1AC0(1) != 0) {
        func_0B7590(0, func_0F1378(0xA6B), 0, 0);
        func_0B75C8(5);
    } else if (func_0F1B70() != 0) {
        func_0B7A80(2, 0xA6A, 0x21A);
        func_0F1BE0();
        func_0F1E80();
        D_00155848 = 1;
        func_0F45A8(p, 0x1E);
        func_0F1ED8(1);
    } else {
        func_022018();
        ((int (*)(int, int))func_0F2048)(0, 1);
        D_00144084 = 0;
        func_0F1C58();
        func_0219A0();
        func_016A90(func_021BF0(), 0);
        func_0F1ED8(1);
        func_0F45D8(p);
    }
}
