/* LEVEL_10:0x0C4EB0 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_003325B0;
extern Slot D_00332658;
extern Entry *D_00209390;
extern void func_0AFBC0(int a, unsigned int b, float c);
extern void func_0AF820(int a, R *r, float c);
extern int func_0A9798(R *r);
extern void func_0AB8A8(short a, short b, int c);
extern int func_130310(int a);
extern void func_0AC210(short a, short b, int c, float d, float e);
extern void func_0AAC70(short a, short b, int c, float d, float e);
extern void func_0A9DC8(int a);
extern void func_0BB7A8(void *p);
extern int func_0BB750(void *p);
extern void func_0AC5E0(void *p);
extern void func_0AC618(void *p);
extern void func_131FD8(int a, R *r, unsigned int c);

void func_0C4EB0(void)
{
    R r;
    Entry *e;

    func_0AFBC0(0x36, -1, 0.0f);
    func_0AF820(0x205, &r, 0.0f);
    func_0AB8A8(func_0A9798(&r), r.u6, func_130310(0x2C9));
    func_0AF820(0x207, &r, 0.0f);
    func_0AC210(r.u4, r.u6, func_130310(0x1CA), 0.9f, 0.9f);
    func_0AF820(0x201, &r, 0.0f);
    func_0AAC70(r.x, r.u6, func_130310(0x2CA), 0.9f, 0.9f);
    func_0A9DC8(0);
    func_0BB7A8(&D_003325B0);
    func_0A9DC8(1);
    e = (Entry *)func_0BB750(&D_003325B0);
    if (e) {
        D_00332658.v = func_130310(e->idx);
        if (D_00209390 != e) {
            func_0AC5E0(&D_00332658);
            D_00209390 = e;
        }
        func_0AC618(&D_00332658);
        if (e->flag) {
            func_0AF820(0x206, &r, 0.0f);
            func_131FD8(0, &r, -1);
        }
    }
}
