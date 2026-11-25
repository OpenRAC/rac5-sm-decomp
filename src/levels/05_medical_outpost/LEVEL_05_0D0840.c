/* LEVEL_05:0x0D0840 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_00318AB8;
extern int D_001F3A7C;
extern int D_001F395C;
extern unsigned char D_001F3969;
extern int D_001F3970;
extern char *D_001F3A78;
extern char D_00203408[];

extern void func_028D20(void);
extern int func_0B45C8(int a);
extern void func_0B39A8(void *a);
extern void func_0D52D8(int a);
extern void func_0D0E10(void);
extern int func_0ACCC8(int id, struct Loc0D2298 *out, float f);
extern int func_0A6C40(struct Loc0D2298 *l);
extern int func_0A6C70(struct Loc0D2298 *l);
extern int func_0A6CA0(struct Loc0D2298 *l);
extern int func_0A6D58(struct Loc0D2298 *l);
extern void func_0A99A0(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0ACC18(unsigned int id, int a);
extern char *func_0A49A0(int);
extern void func_12F750(int a, char *s, char *v);
extern int func_12F960(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0D09B0(void);

void func_0D0840(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_028D20();
    func_0B45C8(6);
    D_001F3A7C = 0;
    func_0B39A8((void *)1);
    func_0D52D8(1);
    D_001F3969 = 0;
    D_001F395C = 1;
    D_001F3970 = 0;
    func_0D0E10();
    func_0ACCC8(0x224, &l, 0.0f);
    win = &D_00318AB8;
    x = func_0A6C40(&l);
    y = func_0A6C70(&l);
    w = func_0A6CA0(&l);
    h = func_0A6D58(&l);
    func_0A99A0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0ACC18(0x556, 0);
    func_0ACC18(0x557, 0);
    func_0ACC18(0x558, 0);
    func_0ACC18(0x553, 0);
    n0 = func_0A49A0(0);
    func_12F750(0, D_00203408, n0);
    func_12F960(0, 0x14, 0x14, 0x14);
    D_001F3A78 = func_0A49A0(1);
    func_0D09B0();
}
