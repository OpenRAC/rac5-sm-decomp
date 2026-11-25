/* LEVEL_19:0x0C1268 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_0027ADF8;
extern int D_001B372C;
extern int D_001B360C;
extern unsigned char D_001B3619;
extern int D_001B3620;
extern char *D_001B3728;
extern char D_001CA5C8[];

extern void func_0276A8(void);
extern int func_0A4928(int a);
extern void func_0A3B78(void *a);
extern void func_0C5D00(int a);
extern void func_0C1838(void);
extern int func_09C688(int id, struct Loc0D2298 *out, float f);
extern int func_0965A0(struct Loc0D2298 *l);
extern int func_0965D0(struct Loc0D2298 *l);
extern int func_096600(struct Loc0D2298 *l);
extern int func_0966B8(struct Loc0D2298 *l);
extern void func_099360(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_09C5D8(unsigned int id, int a);
extern int func_094F50(void);
extern void func_1111E8(int a, char *s, char *v);
extern int func_1113F8(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0C13D8(void);

void func_0C1268(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_0276A8();
    func_0A4928(6);
    D_001B372C = 0;
    func_0A3B78((void *)1);
    func_0C5D00(1);
    D_001B3619 = 0;
    D_001B360C = 1;
    D_001B3620 = 0;
    func_0C1838();
    func_09C688(0x224, &l, 0.0f);
    win = &D_0027ADF8;
    x = func_0965A0(&l);
    y = func_0965D0(&l);
    w = func_096600(&l);
    h = func_0966B8(&l);
    func_099360(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_09C5D8(0x556, 0);
    func_09C5D8(0x557, 0);
    func_09C5D8(0x558, 0);
    func_09C5D8(0x553, 0);
    n0 = ((char *(*)(int))func_094F50)(0);
    func_1111E8(0, D_001CA5C8, n0);
    func_1113F8(0, 0x14, 0x14, 0x14);
    D_001B3728 = ((char *(*)(int))func_094F50)(1);
    func_0C13D8();
}
