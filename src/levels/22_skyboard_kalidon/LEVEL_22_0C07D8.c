/* LEVEL_22:0x0C07D8 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_002827B8;
extern int D_00163A7C;
extern int D_0016395C;
extern unsigned char D_00163969;
extern int D_00163970;
extern char *D_00163A78;
extern char D_00171988[];

extern void func_024640(void);
extern int func_0A4570(int a);
extern void func_0A39E0(void *a);
extern void func_0C5270(int a);
extern void func_0C0DA8(void);
extern int func_09CD18(int id, struct Loc0D2298 *out, float f);
extern int func_096C90(struct Loc0D2298 *l);
extern int func_096CC0(struct Loc0D2298 *l);
extern int func_096CF0(struct Loc0D2298 *l);
extern int func_096DA8(struct Loc0D2298 *l);
extern void func_0999F0(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_09CC68(unsigned int id, int a);
extern char *func_0949F0(int);
extern void func_10B2A8(int a, char *s, char *v);
extern int func_10B4B8(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0C0948(void);

void func_0C07D8(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_024640();
    func_0A4570(6);
    D_00163A7C = 0;
    func_0A39E0((void *)1);
    func_0C5270(1);
    D_00163969 = 0;
    D_0016395C = 1;
    D_00163970 = 0;
    func_0C0DA8();
    func_09CD18(0x224, &l, 0.0f);
    win = &D_002827B8;
    x = func_096C90(&l);
    y = func_096CC0(&l);
    w = func_096CF0(&l);
    h = func_096DA8(&l);
    func_0999F0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_09CC68(0x556, 0);
    func_09CC68(0x557, 0);
    func_09CC68(0x558, 0);
    func_09CC68(0x553, 0);
    n0 = func_0949F0(0);
    func_10B2A8(0, D_00171988, n0);
    func_10B4B8(0, 0x14, 0x14, 0x14);
    D_00163A78 = func_0949F0(1);
    func_0C0948();
}
