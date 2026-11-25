/* LEVEL_17:0x0B6FA8 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001A2240;
extern unsigned char D_0018E4A4;

extern int func_10EFF0(int a);
extern int func_10E8A8(int id);
extern void func_0C5B88(int a, int b, int c, int d);
extern void func_0C5BC0(int a);
extern int func_10F0A0(void);
extern int func_0C6078(int a, int b, int c);
extern int func_10F110(void);
extern void func_10F2E8(void);
extern void func_111328(int *p, int a);
extern void func_10F310(int a);
extern void func_0256A0(void);
extern int func_10F3D0(int a);
extern int func_10F170(void);
extern void func_025090(void);
extern int func_0252E0(void);
extern int func_018598(int a, int b);
extern void func_111358(int *p);

void func_0B6FA8(int *p)
{
    if (func_10EFF0(1) != 0) {
        func_0C5B88(0, func_10E8A8(0xA6B), 0, 0);
        func_0C5BC0(5);
    } else if (func_10F0A0() != 0) {
        func_0C6078(2, 0xA6A, 0x21A);
        func_10F110();
        func_10F2E8();
        D_001A2240 = 1;
        func_111328(p, 0x1E);
        func_10F310(1);
    } else {
        func_0256A0();
        ((int (*)(int, int))func_10F3D0)(0, 1);
        D_0018E4A4 = 0;
        func_10F170();
        func_025090();
        func_018598(func_0252E0(), 0);
        func_10F310(1);
        func_111358(p);
    }
}
