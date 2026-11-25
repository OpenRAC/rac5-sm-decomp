/* LEVEL_07:0x0CAE58 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_00214EC8;
extern unsigned char D_0020371C;

extern int func_135BF8(int a);
extern int func_1354B0(int id);
extern void func_0D8FB0(int a, int b, int c, int d);
extern void func_0D8FE8(int a);
extern int func_135CA8(void);
extern int func_0D94A0(int a, int b, int c);
extern int func_135D18(void);
extern void func_135FB8(void);
extern void func_1386E0(int *p, int a);
extern void func_136010(int a);
extern void func_028498(void);
extern int func_136180(int a);
extern int func_135D90(void);
extern void func_027D50(void);
extern int func_027FA0(void);
extern int func_01AF68(int a, int b);
extern void func_138710(int *p);

void func_0CAE58(int *p)
{
    if (func_135BF8(1) != 0) {
        func_0D8FB0(0, func_1354B0(0xA6B), 0, 0);
        func_0D8FE8(5);
    } else if (func_135CA8() != 0) {
        func_0D94A0(2, 0xA6A, 0x21A);
        func_135D18();
        func_135FB8();
        D_00214EC8 = 1;
        func_1386E0(p, 0x1E);
        func_136010(1);
    } else {
        func_028498();
        ((int (*)(int, int))func_136180)(0, 1);
        D_0020371C = 0;
        func_135D90();
        func_027D50();
        func_01AF68(func_027FA0(), 0);
        func_136010(1);
        func_138710(p);
    }
}
