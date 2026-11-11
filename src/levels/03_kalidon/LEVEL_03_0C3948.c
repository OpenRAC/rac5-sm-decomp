/* LEVEL_03:0x0C3948 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
typedef struct {
    short x;
    short p0;
    short p1;
    short p2;
    unsigned short u4;
    unsigned short p3;
    unsigned short u6;
    unsigned short p4;
} R;
typedef struct {
    char p0[0xD0];
    int idx;
    int flag;
} Entry;
typedef struct {
    char p0[0x14];
    int v;
} Slot;

extern Entry D_00344030;
extern Slot D_003440D8;
extern Entry *D_00218A10;
extern void func_0AE828(int a, unsigned int b, float c);
extern void func_0AE488(int a, R *r, float c);
extern int func_0A8400(R *r);
extern void func_0AA510(short a, short b, int c);
extern int func_130878(int a);
extern void func_0AAE78(short a, short b, int c, float d, float e);
extern void func_0A98D8(short a, short b, int c, float d, float e);
extern void func_0A8A30(int a);
extern void func_0BA248(void *p);
extern int func_0BA1F0(void *p);
extern void func_0AB248(void *p);
extern void func_0AB280(void *p);
extern void func_132520(int a, R *r, unsigned int c);

void func_0C3948(void)
{
    R r;
    Entry *e;

    func_0AE828(0x36, -1, 0.0f);
    func_0AE488(0x205, &r, 0.0f);
    func_0AA510(func_0A8400(&r), r.u6, func_130878(0x2C9));
    func_0AE488(0x207, &r, 0.0f);
    func_0AAE78(r.u4, r.u6, func_130878(0x1CA), 0.9f, 0.9f);
    func_0AE488(0x201, &r, 0.0f);
    func_0A98D8(r.x, r.u6, func_130878(0x2CA), 0.9f, 0.9f);
    func_0A8A30(0);
    func_0BA248(&D_00344030);
    func_0A8A30(1);
    e = (Entry *)func_0BA1F0(&D_00344030);
    if (e) {
        D_003440D8.v = func_130878(e->idx);
        if (D_00218A10 != e) {
            func_0AB248(&D_003440D8);
            D_00218A10 = e;
        }
        func_0AB280(&D_003440D8);
        if (e->flag) {
            func_0AE488(0x206, &r, 0.0f);
            func_132520(0, &r, -1);
        }
    }
}
