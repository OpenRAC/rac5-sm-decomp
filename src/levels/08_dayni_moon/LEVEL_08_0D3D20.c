/* LEVEL_08:0x0D3D20 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_00249A88;
extern unsigned char D_00237F9C;

extern int func_144130(int a);
extern int func_1439E8(int id);
extern void func_0E1F10(int a, int b, int c, int d);
extern void func_0E1F48(int a);
extern int func_1441E0(void);
extern int func_0E2410(int a, int b, int c);
extern int func_144250(void);
extern void func_1444F0(void);
extern void func_146C18(int *p, int a);
extern void func_144548(int a);
extern void func_028760(void);
extern int func_1446B8(int a);
extern int func_1442C8(void);
extern void func_028018(void);
extern int func_028268(void);
extern int func_01B220(int a, int b);
extern void func_146C48(int *p);

void func_0D3D20(int *p)
{
    if (func_144130(1) != 0) {
        func_0E1F10(0, func_1439E8(0xA6B), 0, 0);
        func_0E1F48(5);
    } else if (func_1441E0() != 0) {
        func_0E2410(2, 0xA6A, 0x21A);
        func_144250();
        func_1444F0();
        D_00249A88 = 1;
        func_146C18(p, 0x1E);
        func_144548(1);
    } else {
        func_028760();
        ((int (*)(int, int))func_1446B8)(0, 1);
        D_00237F9C = 0;
        func_1442C8();
        func_028018();
        func_01B220(func_028268(), 0);
        func_144548(1);
        func_146C48(p);
    }
}
