/* LEVEL_02:0x0CF708 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_00215B88;
extern unsigned char D_0020409C;

extern int func_138FA8(int a);
extern int func_138860(int id);
extern void func_0DD8E0(int a, int b, int c, int d);
extern void func_0DD918(int a);
extern int func_139058(void);
extern int func_0DDDD0(int a, int b, int c);
extern int func_1390C8(void);
extern void func_139368(void);
extern void func_13BA90(int *p, int a);
extern void func_1393C0(int a);
extern void func_028920(void);
extern int func_139530(int a);
extern int func_139140(void);
extern void func_0281D8(void);
extern int func_028428(void);
extern int func_01B208(int a, int b);
extern void func_13BAC0(int *p);

void func_0CF708(int *p)
{
    if (func_138FA8(1) != 0) {
        func_0DD8E0(0, func_138860(0xA6B), 0, 0);
        func_0DD918(5);
    } else if (func_139058() != 0) {
        func_0DDDD0(2, 0xA6A, 0x21A);
        func_1390C8();
        func_139368();
        D_00215B88 = 1;
        func_13BA90(p, 0x1E);
        func_1393C0(1);
    } else {
        func_028920();
        ((int (*)(int, int))func_139530)(0, 1);
        D_0020409C = 0;
        func_139140();
        func_0281D8();
        func_01B208(func_028428(), 0);
        func_1393C0(1);
        func_13BAC0(p);
    }
}
