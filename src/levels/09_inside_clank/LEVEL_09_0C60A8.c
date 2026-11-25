/* LEVEL_09:0x0C60A8 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001EA9C8;
extern unsigned char D_001D921C;

extern int func_12BB90(int a);
extern int func_12B448(int id);
extern void func_0D4200(int a, int b, int c, int d);
extern void func_0D4238(int a);
extern int func_12BC40(void);
extern int func_0D46F0(int a, int b, int c);
extern int func_12BCB0(void);
extern void func_12BF50(void);
extern void func_12E678(int *p, int a);
extern void func_12BFA8(int a);
extern void func_027140(void);
extern int func_12C118(int a);
extern int func_12BD28(void);
extern void func_0269F8(void);
extern int func_026C48(void);
extern int func_019C98(int a, int b);
extern void func_12E6A8(int *p);

void func_0C60A8(int *p)
{
    if (func_12BB90(1) != 0) {
        func_0D4200(0, func_12B448(0xA6B), 0, 0);
        func_0D4238(5);
    } else if (func_12BC40() != 0) {
        func_0D46F0(2, 0xA6A, 0x21A);
        func_12BCB0();
        func_12BF50();
        D_001EA9C8 = 1;
        func_12E678(p, 0x1E);
        func_12BFA8(1);
    } else {
        func_027140();
        ((int (*)(int, int))func_12C118)(0, 1);
        D_001D921C = 0;
        func_12BD28();
        func_0269F8();
        func_019C98(func_026C48(), 0);
        func_12BFA8(1);
        func_12E6A8(p);
    }
}
