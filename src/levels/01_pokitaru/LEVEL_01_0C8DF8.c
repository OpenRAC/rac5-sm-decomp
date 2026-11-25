/* LEVEL_01:0x0C8DF8 -- picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_00200BC8;
extern unsigned char D_001EF41C;

extern int func_132BF8(int a);
extern int func_1324B0(int id);
extern void func_0D6F50(int a, int b, int c, int d);
extern void func_0D6F88(int a);
extern int func_132CA8(void);
extern int func_0D7440(int a, int b, int c);
extern int func_132D18(void);
extern void func_132FB8(void);
extern void func_1356E0(int *p, int a);
extern void func_133010(int a);
extern void func_028138(void);
extern int func_133180(int a);
extern int func_132D90(void);
extern void func_0279F0(void);
extern int func_027C40(void);
extern int func_01A8A8(int a, int b);
extern void func_135710(int *p);

void func_0C8DF8(int *p)
{
    if (func_132BF8(1) != 0) {
        func_0D6F50(0, func_1324B0(0xA6B), 0, 0);
        func_0D6F88(5);
    } else if (func_132CA8() != 0) {
        func_0D7440(2, 0xA6A, 0x21A);
        func_132D18();
        func_132FB8();
        D_00200BC8 = 1;
        func_1356E0(p, 0x1E);
        func_133010(1);
    } else {
        func_028138();
        ((int (*)(int, int))func_133180)(0, 1);
        D_001EF41C = 0;
        func_132D90();
        func_0279F0();
        func_01A8A8(func_027C40(), 0);
        func_133010(1);
        func_135710(p);
    }
}
