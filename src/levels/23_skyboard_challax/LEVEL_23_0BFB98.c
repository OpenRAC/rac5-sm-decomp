/* LEVEL_23:0x0BFB98 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001D3FC8;
extern unsigned char D_001C281C;

extern int func_124370(int a);
extern int func_123C28(int id);
extern void func_0CDD80(int a, int b, int c, int d);
extern void func_0CDDB8(int a);
extern int func_124420(void);
extern int func_0CE270(int a, int b, int c);
extern int func_124490(void);
extern void func_124730(void);
extern void func_126E58(int *p, int a);
extern void func_124788(int a);
extern void func_025E90(void);
extern int func_1248F8(int a);
extern int func_124508(void);
extern void func_025748(void);
extern int func_025998(void);
extern int func_0193B8(int a, int b);
extern void func_126E88(int *p);

void func_0BFB98(int *p)
{
    if (func_124370(1) != 0) {
        func_0CDD80(0, func_123C28(0xA6B), 0, 0);
        func_0CDDB8(5);
    } else if (func_124420() != 0) {
        func_0CE270(2, 0xA6A, 0x21A);
        func_124490();
        func_124730();
        D_001D3FC8 = 1;
        func_126E58(p, 0x1E);
        func_124788(1);
    } else {
        func_025E90();
        ((int (*)(int, int))func_1248F8)(0, 1);
        D_001C281C = 0;
        func_124508();
        func_025748();
        func_0193B8(func_025998(), 0);
        func_124788(1);
        func_126E88(p);
    }
}
