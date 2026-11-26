/* LEVEL_04:0x0D7B30 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_003473F8;
extern int D_0021DBBC;
extern int D_0021DA9C;
extern unsigned char D_0021DAA9;
extern int D_0021DAB0;
extern char *D_0021DBB8;
extern char D_0022DE88[];

extern void func_029B50(void);
extern int func_0BB828(int a);
extern void func_0BAAF0(void *a);
extern void func_0DC5E0(int a);
extern void func_0D8100(void);
extern int func_0B3958(int id, struct Loc0D2298 *out, float f);
extern int func_0AD890(struct Loc0D2298 *l);
extern int func_0AD8C0(struct Loc0D2298 *l);
extern int func_0AD8F0(struct Loc0D2298 *l);
extern int func_0AD9A8(struct Loc0D2298 *l);
extern void func_0B0630(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0B38A8(unsigned int id, int a);
extern char *func_0AB5F0(int);
extern void func_140258(int a, char *s, char *v);
extern int func_140468(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0D7CA0(void);

void func_0D7B30(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_029B50();
    func_0BB828(6);
    D_0021DBBC = 0;
    func_0BAAF0((void *)1);
    func_0DC5E0(1);
    D_0021DAA9 = 0;
    D_0021DA9C = 1;
    D_0021DAB0 = 0;
    func_0D8100();
    func_0B3958(0x224, &l, 0.0f);
    win = &D_003473F8;
    x = func_0AD890(&l);
    y = func_0AD8C0(&l);
    w = func_0AD8F0(&l);
    h = func_0AD9A8(&l);
    func_0B0630(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0B38A8(0x556, 0);
    func_0B38A8(0x557, 0);
    func_0B38A8(0x558, 0);
    func_0B38A8(0x553, 0);
    n0 = func_0AB5F0(0);
    func_140258(0, D_0022DE88, n0);
    func_140468(0, 0x14, 0x14, 0x14);
    D_0021DBB8 = func_0AB5F0(1);
    func_0D7CA0();
}
