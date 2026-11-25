/* LEVEL_07:0x0D42F8 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_003424F8;
extern int D_002189FC;
extern int D_002188DC;
extern unsigned char D_002188E9;
extern int D_002188F0;
extern char *D_002189F8;
extern char D_00229208[];

extern void func_02A3E8(void);
extern int func_0B8080(int a);
extern void func_0B7460(void *a);
extern void func_0D8D90(int a);
extern void func_0D48C8(void);
extern int func_0B0708(int id, struct Loc0D2298 *out, float f);
extern int func_0AA680(struct Loc0D2298 *l);
extern int func_0AA6B0(struct Loc0D2298 *l);
extern int func_0AA6E0(struct Loc0D2298 *l);
extern int func_0AA798(struct Loc0D2298 *l);
extern void func_0AD3E0(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0B0658(unsigned int id, int a);
extern char *func_0A83E0(int);
extern void func_136DD8(int a, char *s, char *v);
extern int func_136FE8(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0D4468(void);

void func_0D42F8(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_02A3E8();
    func_0B8080(6);
    D_002189FC = 0;
    func_0B7460((void *)1);
    func_0D8D90(1);
    D_002188E9 = 0;
    D_002188DC = 1;
    D_002188F0 = 0;
    func_0D48C8();
    func_0B0708(0x224, &l, 0.0f);
    win = &D_003424F8;
    x = func_0AA680(&l);
    y = func_0AA6B0(&l);
    w = func_0AA6E0(&l);
    h = func_0AA798(&l);
    func_0AD3E0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0B0658(0x556, 0);
    func_0B0658(0x557, 0);
    func_0B0658(0x558, 0);
    func_0B0658(0x553, 0);
    n0 = func_0A83E0(0);
    func_136DD8(0, D_00229208, n0);
    func_136FE8(0, 0x14, 0x14, 0x14);
    D_002189F8 = func_0A83E0(1);
    func_0D4468();
}
