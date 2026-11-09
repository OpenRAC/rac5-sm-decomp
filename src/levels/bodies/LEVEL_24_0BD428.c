/* LEVEL_24:0x0BD428 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_002F5070;
extern Slot D_002F5118;
extern Entry *D_001D1010;
extern void func_0A8320(int a, unsigned int b, float c);
extern void func_0A7F80(int a, R *r, float c);
extern int func_0A1EF8(R *r);
extern void func_0A4008(short a, short b, int c);
extern int func_127FB0(int a);
extern void func_0A4970(short a, short b, int c, float d, float e);
extern void func_0A33D0(short a, short b, int c, float d, float e);
extern void func_0A2528(int a);
extern void func_0B3CF0(void *p);
extern int func_0B3C98(void *p);
extern void func_0A4D40(void *p);
extern void func_0A4D78(void *p);
extern void func_129C58(int a, R *r, unsigned int c);

void func_0BD428(void)
{
    R r;
    Entry *e;

    func_0A8320(0x36, -1, 0.0f);
    func_0A7F80(0x205, &r, 0.0f);
    func_0A4008(func_0A1EF8(&r), r.u6, func_127FB0(0x2C9));
    func_0A7F80(0x207, &r, 0.0f);
    func_0A4970(r.u4, r.u6, func_127FB0(0x1CA), 0.9f, 0.9f);
    func_0A7F80(0x201, &r, 0.0f);
    func_0A33D0(r.x, r.u6, func_127FB0(0x2CA), 0.9f, 0.9f);
    func_0A2528(0);
    func_0B3CF0(&D_002F5070);
    func_0A2528(1);
    e = (Entry *)func_0B3C98(&D_002F5070);
    if (e) {
        D_002F5118.v = func_127FB0(e->idx);
        if (D_001D1010 != e) {
            func_0A4D40(&D_002F5118);
            D_001D1010 = e;
        }
        func_0A4D78(&D_002F5118);
        if (e->flag) {
            func_0A7F80(0x206, &r, 0.0f);
            func_129C58(0, &r, -1);
        }
    }
}
