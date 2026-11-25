/* LEVEL_10:0x0D36D8 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_00335FF8;
extern int D_0020D6FC;
extern int D_0020D5DC;
extern unsigned char D_0020D5E9;
extern int D_0020D5F0;
extern char *D_0020D6F8;
extern char D_0021D488[];

extern void func_029E80(void);
extern int func_0B71F8(int a);
extern void func_0B65D8(void *a);
extern void func_0D8170(int a);
extern void func_0D3CA8(void);
extern int func_0AF820(int id, struct Loc0D2298 *out, float f);
extern int func_0A9798(struct Loc0D2298 *l);
extern int func_0A97C8(struct Loc0D2298 *l);
extern int func_0A97F8(struct Loc0D2298 *l);
extern int func_0A98B0(struct Loc0D2298 *l);
extern void func_0AC4F8(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0AF770(unsigned int id, int a);
extern char *func_0A74F8(int);
extern void func_131C58(int a, char *s, char *v);
extern int func_131E68(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0D3848(void);

void func_0D36D8(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_029E80();
    func_0B71F8(6);
    D_0020D6FC = 0;
    func_0B65D8((void *)1);
    func_0D8170(1);
    D_0020D5E9 = 0;
    D_0020D5DC = 1;
    D_0020D5F0 = 0;
    func_0D3CA8();
    func_0AF820(0x224, &l, 0.0f);
    win = &D_00335FF8;
    x = func_0A9798(&l);
    y = func_0A97C8(&l);
    w = func_0A97F8(&l);
    h = func_0A98B0(&l);
    func_0AC4F8(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0AF770(0x556, 0);
    func_0AF770(0x557, 0);
    func_0AF770(0x558, 0);
    func_0AF770(0x553, 0);
    n0 = func_0A74F8(0);
    func_131C58(0, D_0021D488, n0);
    func_131E68(0, 0x14, 0x14, 0x14);
    D_0020D6F8 = func_0A74F8(1);
    func_0D3848();
}
