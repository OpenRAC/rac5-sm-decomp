/* LEVEL_02:0x0D8C28 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_003440F8;
extern int D_002196BC;
extern int D_0021959C;
extern unsigned char D_002195A9;
extern int D_002195B0;
extern char *D_002196B8;
extern char D_00229488[];

extern void func_02A870(void);
extern int func_0BC930(int a);
extern void func_0BBD10(void *a);
extern void func_0DD6C0(int a);
extern void func_0D91F8(void);
extern int func_0B5018(int id, struct Loc0D2298 *out, float f);
extern int func_0AEF90(struct Loc0D2298 *l);
extern int func_0AEFC0(struct Loc0D2298 *l);
extern int func_0AEFF0(struct Loc0D2298 *l);
extern int func_0AF0A8(struct Loc0D2298 *l);
extern void func_0B1CF0(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0B4F68(unsigned int id, int a);
extern char *func_0ACCF0(int);
extern void func_13A188(int a, char *s, char *v);
extern int func_13A398(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0D8D98(void);

void func_0D8C28(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_02A870();
    func_0BC930(6);
    D_002196BC = 0;
    func_0BBD10((void *)1);
    func_0DD6C0(1);
    D_002195A9 = 0;
    D_0021959C = 1;
    D_002195B0 = 0;
    func_0D91F8();
    func_0B5018(0x224, &l, 0.0f);
    win = &D_003440F8;
    x = func_0AEF90(&l);
    y = func_0AEFC0(&l);
    w = func_0AEFF0(&l);
    h = func_0AF0A8(&l);
    func_0B1CF0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0B4F68(0x556, 0);
    func_0B4F68(0x557, 0);
    func_0B4F68(0x558, 0);
    func_0B4F68(0x553, 0);
    n0 = func_0ACCF0(0);
    func_13A188(0, D_00229488, n0);
    func_13A398(0, 0x14, 0x14, 0x14);
    D_002196B8 = func_0ACCF0(1);
    func_0D8D98();
}
