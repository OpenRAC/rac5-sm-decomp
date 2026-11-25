/* LEVEL_24:0x0C26C0 -- placement copy of LEVEL_01_0C8DF8.c: picks a menu follow-up from the shared state getters: a confirmed request plays its message, a pending one starts the transition handler, otherwise the screen is reset and the default handler runs. */
extern unsigned char D_001D1848;
extern unsigned char D_001C009C;

extern int func_1286F8(int a);
extern int func_127FB0(int id);
extern void func_0D08A8(int a, int b, int c, int d);
extern void func_0D08E0(int a);
extern int func_1287A8(void);
extern int func_0D0DA8(int a, int b, int c);
extern int func_128818(void);
extern void func_128AB8(void);
extern void func_12B1E0(int *p, int a);
extern void func_128B10(int a);
extern void func_025998(void);
extern int func_128C80(int a);
extern int func_128890(void);
extern void func_025320(void);
extern int func_025570(void);
extern int func_018E98(int a, int b);
extern void func_12B210(int *p);

void func_0C26C0(int *p)
{
    if (func_1286F8(1) != 0) {
        func_0D08A8(0, func_127FB0(0xA6B), 0, 0);
        func_0D08E0(5);
    } else if (func_1287A8() != 0) {
        func_0D0DA8(2, 0xA6A, 0x21A);
        func_128818();
        func_128AB8();
        D_001D1848 = 1;
        func_12B1E0(p, 0x1E);
        func_128B10(1);
    } else {
        func_025998();
        ((int (*)(int, int))func_128C80)(0, 1);
        D_001C009C = 0;
        func_128890();
        func_025320();
        func_018E98(func_025570(), 0);
        func_128B10(1);
        func_12B210(p);
    }
}
