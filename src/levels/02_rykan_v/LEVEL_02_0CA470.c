/* LEVEL_02:0x0CA470 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_003406B0;
extern Slot D_00340758;
extern Entry *D_00215350;
extern void func_0B53B8(int a, unsigned int b, float c);
extern void func_0B5018(int a, R *r, float c);
extern int func_0AEF90(R *r);
extern void func_0B10A0(short a, short b, int c);
extern int func_138860(int a);
extern void func_0B1A08(short a, short b, int c, float d, float e);
extern void func_0B0468(short a, short b, int c, float d, float e);
extern void func_0AF5C0(int a);
extern void func_0C0D70(void *p);
extern int func_0C0D18(void *p);
extern void func_0B1DD8(void *p);
extern void func_0B1E10(void *p);
extern void func_13A508(int a, R *r, unsigned int c);

void func_0CA470(void)
{
    R r;
    Entry *e;

    func_0B53B8(0x36, -1, 0.0f);
    func_0B5018(0x205, &r, 0.0f);
    func_0B10A0(func_0AEF90(&r), r.u6, func_138860(0x2C9));
    func_0B5018(0x207, &r, 0.0f);
    func_0B1A08(r.u4, r.u6, func_138860(0x1CA), 0.9f, 0.9f);
    func_0B5018(0x201, &r, 0.0f);
    func_0B0468(r.x, r.u6, func_138860(0x2CA), 0.9f, 0.9f);
    func_0AF5C0(0);
    func_0C0D70(&D_003406B0);
    func_0AF5C0(1);
    e = (Entry *)func_0C0D18(&D_003406B0);
    if (e) {
        D_00340758.v = func_138860(e->idx);
        if (D_00215350 != e) {
            func_0B1DD8(&D_00340758);
            D_00215350 = e;
        }
        func_0B1E10(&D_00340758);
        if (e->flag) {
            func_0B5018(0x206, &r, 0.0f);
            func_13A508(0, &r, -1);
        }
    }
}
