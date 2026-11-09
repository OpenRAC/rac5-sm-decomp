/* LEVEL_01.REL:0x0D2298: reviewed 368-byte candidate, held for ABI review.
 * Resets the menu state, builds the title window from its measured rectangle,
 * registers the text entries, and starts the screen.
 * pinned C with gnu-ee-trial links 368/368 bytes and is byte-exact at this and
 * 19 other USA placements, but the prototypes disagree.
 * It declares func_0B5400 returning void with (int), but the accepted
 * LEVEL_01_0B5400.c defines it returning void with (pointer).
 * It declares func_133FE8 returning void with (int, int, int, int), but the
 * accepted LEVEL_01_133FE8.c defines it returning int with (int, int, int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Loc0D2298 {
    char pad[16];
};

struct Win0D2298 {
    char pad0[0x20];
    unsigned int flags;
    char pad24[0x15];
    unsigned char b39;
};

extern struct Win0D2298 D_0032CBF8;
extern int D_002046FC;
extern int D_002045DC;
extern unsigned char D_002045E9;
extern int D_002045F0;
extern int D_002046F8;
extern char D_00214508[];

extern void func_02A0A8(void);
extern int func_0B6020(int a);
extern void func_0B5400(int a);
extern void func_0D6D30(int a);
extern void func_0D2868(void);
extern int func_0AE708(int id, struct Loc0D2298 *out, float f);
extern int func_0A8680(struct Loc0D2298 *l);
extern int func_0A86B0(struct Loc0D2298 *l);
extern int func_0A86E0(struct Loc0D2298 *l);
extern int func_0A8798(struct Loc0D2298 *l);
extern void func_0AB3E0(struct Win0D2298 *w, int x, int y, int ww, int hh, unsigned int color);
extern void func_0AE658(int id, int a);
extern int func_0A63E0(int a);
extern void func_133DD8(int a, char *s, int v);
extern void func_133FE8(int a, int b, int c, int d);
extern void func_0D2408(void);

void func_0D2298(void)
{
    struct Loc0D2298 l;
    struct Win0D2298 *win;
    short x;
    short y;
    short w;
    short h;
    int n0;

    func_02A0A8();
    func_0B6020(6);
    D_002046FC = 0;
    func_0B5400(1);
    func_0D6D30(1);
    D_002045E9 = 0;
    D_002045DC = 1;
    D_002045F0 = 0;
    func_0D2868();
    func_0AE708(0x224, &l, 0.0f);
    win = &D_0032CBF8;
    x = func_0A8680(&l);
    y = func_0A86B0(&l);
    w = func_0A86E0(&l);
    h = func_0A8798(&l);
    func_0AB3E0(win, x, y, w, h, 0x40602020);
    win->flags |= 0x840;
    win->b39 = 0;
    func_0AE658(0x556, 0);
    func_0AE658(0x557, 0);
    func_0AE658(0x558, 0);
    func_0AE658(0x553, 0);
    n0 = func_0A63E0(0);
    func_133DD8(0, D_00214508, n0);
    func_133FE8(0, 0x14, 0x14, 0x14);
    D_002046F8 = func_0A63E0(1);
    func_0D2408();
}
