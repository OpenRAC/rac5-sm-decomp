/* LEVEL_15:0x0B28D8 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_00244438;
extern int D_0015937C;
extern int D_0015925C;
extern unsigned char D_00159269;
extern int D_00159270;
extern char *D_00159378;
extern char D_00168C88[];

extern void func_023880(void);
extern int func_096530(int a);
extern void func_0959A0(void *a);
extern void func_0B7370(int a);
extern void func_0B2EA8(void);
extern int func_08EFD0(int id, struct Loc0D2298 *out, float f);
extern int func_088F48(struct Loc0D2298 *l);
extern int func_088F78(struct Loc0D2298 *l);
extern int func_088FA8(struct Loc0D2298 *l);
extern int func_089060(struct Loc0D2298 *l);
extern void func_08BCA8(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_08EF20(unsigned int id, int a);
extern char *func_086CA8(int);
extern void func_0F2CA0(int a, char *s, char *v);
extern int func_0F2EB0(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0B2A48(void);

void func_0B28D8(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_023880();
    func_096530(6);
    D_0015937C = 0;
    func_0959A0((void *)1);
    func_0B7370(1);
    D_00159269 = 0;
    D_0015925C = 1;
    D_00159270 = 0;
    func_0B2EA8();
    func_08EFD0(0x224, &l, 0.0f);
    win = &D_00244438;
    x = func_088F48(&l);
    y = func_088F78(&l);
    w = func_088FA8(&l);
    h = func_089060(&l);
    func_08BCA8(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_08EF20(0x556, 0);
    func_08EF20(0x557, 0);
    func_08EF20(0x558, 0);
    func_08EF20(0x553, 0);
    n0 = func_086CA8(0);
    func_0F2CA0(0, D_00168C88, n0);
    func_0F2EB0(0, 0x14, 0x14, 0x14);
    D_00159378 = func_086CA8(1);
    func_0B2A48();
}
