/* LEVEL_18:0x0C0968 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_0027AFF8;
extern int D_001B3A2C;
extern int D_001B390C;
extern unsigned char D_001B3919;
extern int D_001B3920;
extern char *D_001B3A28;
extern char D_001CA948[];

extern void func_0270B0(void);
extern int func_0A40A8(int a);
extern void func_0A32F8(void *a);
extern void func_0C5400(int a);
extern void func_0C0F38(void);
extern int func_09BE08(int id, struct Loc0D2298 *out, float f);
extern int func_095D20(struct Loc0D2298 *l);
extern int func_095D50(struct Loc0D2298 *l);
extern int func_095D80(struct Loc0D2298 *l);
extern int func_095E38(struct Loc0D2298 *l);
extern void func_098AE0(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_09BD58(unsigned int id, int a);
extern int func_0946D0(void);
extern void func_10F7F8(int a, char *s, char *v);
extern int func_10FA08(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0C0AD8(void);

void func_0C0968(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_0270B0();
    func_0A40A8(6);
    D_001B3A2C = 0;
    func_0A32F8((void *)1);
    func_0C5400(1);
    D_001B3919 = 0;
    D_001B390C = 1;
    D_001B3920 = 0;
    func_0C0F38();
    func_09BE08(0x224, &l, 0.0f);
    win = &D_0027AFF8;
    x = func_095D20(&l);
    y = func_095D50(&l);
    w = func_095D80(&l);
    h = func_095E38(&l);
    func_098AE0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_09BD58(0x556, 0);
    func_09BD58(0x557, 0);
    func_09BD58(0x558, 0);
    func_09BD58(0x553, 0);
    n0 = ((char *(*)(int))func_0946D0)(0);
    func_10F7F8(0, D_001CA948, n0);
    func_10FA08(0, 0x14, 0x14, 0x14);
    D_001B3A28 = ((char *(*)(int))func_0946D0)(1);
    func_0C0AD8();
}
