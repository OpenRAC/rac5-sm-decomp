/* LEVEL_10:0x0CA238 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_00209BC8;
extern unsigned char D_001F841C;

extern int func_130A58(int a);
extern int func_130310(int id);
extern void func_0D8390(int a, int b, int c, int d);
extern void func_0D83C8(int a);
extern int func_130B08(void);
extern int func_0D8880(int a, int b, int c);
extern int func_130B78(void);
extern void func_130E18(void);
extern void func_133560(int *p, int a);
extern void func_130E70(int a);
extern void func_027A18(void);
extern int func_130FE0(int a);
extern int func_130BF0(void);
extern void func_0272D0(void);
extern int func_027520(void);
extern int func_019F28(int a, int b);
extern void func_133590(int *p);

void func_0CA238(int *p)
{
    if (func_130A58(1) != 0) {
        func_0D8390(0, func_130310(0xA6B), 0, 0);
        func_0D83C8(5);
    } else if (func_130B08() != 0) {
        func_0D8880(2, 0xA6A, 0x21A);
        func_130B78();
        func_130E18();
        D_00209BC8 = 1;
        func_133560(p, 0x1E);
        func_130E70(1);
    } else {
        func_027A18();
        ((int (*)(int, int))func_130FE0)(0, 1);
        D_001F841C = 0;
        func_130BF0();
        func_0272D0();
        func_019F28(func_027520(), 0);
        func_130E70(1);
        func_133590(p);
    }
}
