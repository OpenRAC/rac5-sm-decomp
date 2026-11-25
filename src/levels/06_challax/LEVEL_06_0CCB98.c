/* LEVEL_06:0x0CCB98 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_00319978;
extern int D_001F35FC;
extern int D_001F34DC;
extern unsigned char D_001F34E9;
extern int D_001F34F0;
extern char *D_001F35F8;
extern char D_00203388[];

extern void func_028490(void);
extern int func_0B0848(int a);
extern void func_0AFC28(void *a);
extern void func_0D1630(int a);
extern void func_0CD168(void);
extern int func_0A8ED8(int id, struct Loc0D2298 *out, float f);
extern int func_0A2E50(struct Loc0D2298 *l);
extern int func_0A2E80(struct Loc0D2298 *l);
extern int func_0A2EB0(struct Loc0D2298 *l);
extern int func_0A2F68(struct Loc0D2298 *l);
extern void func_0A5BB0(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0A8E28(unsigned int id, int a);
extern char *func_0A0BB0(int);
extern void func_12A4A8(int a, char *s, char *v);
extern int func_12A6B8(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0CCD08(void);

void func_0CCB98(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_028490();
    func_0B0848(6);
    D_001F35FC = 0;
    func_0AFC28((void *)1);
    func_0D1630(1);
    D_001F34E9 = 0;
    D_001F34DC = 1;
    D_001F34F0 = 0;
    func_0CD168();
    func_0A8ED8(0x224, &l, 0.0f);
    win = &D_00319978;
    x = func_0A2E50(&l);
    y = func_0A2E80(&l);
    w = func_0A2EB0(&l);
    h = func_0A2F68(&l);
    func_0A5BB0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0A8E28(0x556, 0);
    func_0A8E28(0x557, 0);
    func_0A8E28(0x558, 0);
    func_0A8E28(0x553, 0);
    n0 = func_0A0BB0(0);
    func_12A4A8(0, D_00203388, n0);
    func_12A6B8(0, 0x14, 0x14, 0x14);
    D_001F35F8 = func_0A0BB0(1);
    func_0CCD08();
}
