/* LEVEL_24:0x0CBBD8 -- placement copy of LEVEL_16_0C1990.c: placement copy of LEVEL_01_0D2298.c: resets the menu state, builds the title window from its measured rectangle, registers the text entries, and starts the screen. */

struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_002F8AB8;
extern int D_001D537C;
extern int D_001D525C;
extern unsigned char D_001D5269;
extern int D_001D5270;
extern char *D_001D5378;
extern char D_001E5288[];

extern void func_0275E8(void);
extern int func_0AF8B0(int a);
extern void func_0AEC90(void *a);
extern void func_0D0688(int a);
extern void func_0CC1A8(void);
extern int func_0A7F80(int id, struct Loc0D2298 *out, float f);
extern int func_0A1EF8(struct Loc0D2298 *l);
extern int func_0A1F28(struct Loc0D2298 *l);
extern int func_0A1F58(struct Loc0D2298 *l);
extern int func_0A2010(struct Loc0D2298 *l);
extern void func_0A4C58(struct Win0D2298 *w, short x, short y, short ww, short hh, unsigned int color);
extern int func_0A7ED0(unsigned int id, int a);
extern char *func_09FC58(int);
extern void func_1298D8(int a, char *s, char *v);
extern int func_129AE8(unsigned int a, unsigned char b, unsigned char c, unsigned char d);
extern void func_0CBD48(void);

void func_0CBBD8(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    char *n0;

    func_0275E8();
    func_0AF8B0(6);
    D_001D537C = 0;
    func_0AEC90((void *)1);
    func_0D0688(1);
    D_001D5269 = 0;
    D_001D525C = 1;
    D_001D5270 = 0;
    func_0CC1A8();
    func_0A7F80(0x224, &l, 0.0f);
    win = &D_002F8AB8;
    x = func_0A1EF8(&l);
    y = func_0A1F28(&l);
    w = func_0A1F58(&l);
    h = func_0A2010(&l);
    func_0A4C58(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0A7ED0(0x556, 0);
    func_0A7ED0(0x557, 0);
    func_0A7ED0(0x558, 0);
    func_0A7ED0(0x553, 0);
    n0 = func_09FC58(0);
    func_1298D8(0, D_001E5288, n0);
    func_129AE8(0, 0x14, 0x14, 0x14);
    D_001D5378 = func_09FC58(1);
    func_0CBD48();
}
