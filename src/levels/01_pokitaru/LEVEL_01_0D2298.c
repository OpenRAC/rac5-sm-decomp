/* LEVEL_01:0x0D2298 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_0032CBF8;
extern int D_002046FC;
extern int D_002045DC;
extern unsigned char D_002045E9;
extern int D_002045F0;
extern char *D_002046F8;
extern char D_00214508[];

extern void func_02A0A8(void);
extern int func_0B6020(int a);
extern void func_0B5400(void *a);
extern void func_0D6D30(int a);
extern void func_0D2868(void);
extern int func_0AE708(int id, struct Loc0D2298 *out, float f);
extern int func_0A8680(struct Loc0D2298 *l);
extern int func_0A86B0(struct Loc0D2298 *l);
extern int func_0A86E0(struct Loc0D2298 *l);
extern int func_0A8798(struct Loc0D2298 *l);
extern void func_0AB3E0(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0AE658(unsigned int id, int a);
extern char *func_0A63E0(int);
extern void func_133DD8(int a, char *s, char *v);
extern int func_133FE8(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0D2408(void);

void func_0D2298(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_02A0A8();
    func_0B6020(6);
    D_002046FC = 0;
    func_0B5400((void *)1);
    func_0D6D30(1);
    D_002045E9 = 0;
    D_002045DC = 1;
    D_002045F0 = 0;
    func_0D2868();
    func_0AE708(0x224, &l, 0.0f);
    win = &D_0032CBF8;
    x = func_0A8680(&l);
    y = func_0A86B0(&l);
    w = func_0A86E0(&l);
    h = func_0A8798(&l);
    func_0AB3E0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0AE658(0x556, 0);
    func_0AE658(0x557, 0);
    func_0AE658(0x558, 0);
    func_0AE658(0x553, 0);
    n0 = func_0A63E0(0);
    func_133DD8(0, D_00214508, n0);
    func_133FE8(0, 0x14, 0x14, 0x14);
    D_002046F8 = func_0A63E0(1);
    func_0D2408();
}
