/* LEVEL_03:0x0D2080 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_00347A78;
extern int D_0021CD7C;
extern int D_0021CC5C;
extern unsigned char D_0021CC69;
extern int D_0021CC70;
extern char *D_0021CD78;
extern char D_0022D408[];

extern void func_029EA0(void);
extern int func_0B5E08(int a);
extern void func_0B51E8(void *a);
extern void func_0D6B18(int a);
extern void func_0D2650(void);
extern int func_0AE488(int id, struct Loc0D2298 *out, float f);
extern int func_0A8400(struct Loc0D2298 *l);
extern int func_0A8430(struct Loc0D2298 *l);
extern int func_0A8460(struct Loc0D2298 *l);
extern int func_0A8518(struct Loc0D2298 *l);
extern void func_0AB160(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0AE3D8(unsigned int id, int a);
extern char *func_0A6160(int);
extern void func_1321A0(int a, char *s, char *v);
extern int func_1323B0(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0D21F0(void);

void func_0D2080(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_029EA0();
    func_0B5E08(6);
    D_0021CD7C = 0;
    func_0B51E8((void *)1);
    func_0D6B18(1);
    D_0021CC69 = 0;
    D_0021CC5C = 1;
    D_0021CC70 = 0;
    func_0D2650();
    func_0AE488(0x224, &l, 0.0f);
    win = &D_00347A78;
    x = func_0A8400(&l);
    y = func_0A8430(&l);
    w = func_0A8460(&l);
    h = func_0A8518(&l);
    func_0AB160(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0AE3D8(0x556, 0);
    func_0AE3D8(0x557, 0);
    func_0AE3D8(0x558, 0);
    func_0AE3D8(0x553, 0);
    n0 = func_0A6160(0);
    func_1321A0(0, D_0022D408, n0);
    func_1323B0(0, 0x14, 0x14, 0x14);
    D_0021CD78 = func_0A6160(1);
    func_0D21F0();
}
