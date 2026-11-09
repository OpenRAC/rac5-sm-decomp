/* LEVEL_07:0x0C5BC0 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_0033EAB0;
extern Slot D_0033EB58;
extern Entry *D_00214690;
extern void func_0B0AA8(int a, unsigned int b, float c);
extern void func_0B0708(int a, R *r, float c);
extern int func_0AA680(R *r);
extern void func_0AC790(short a, short b, int c);
extern int func_1354B0(int a);
extern void func_0AD0F8(short a, short b, int c, float d, float e);
extern void func_0ABB58(short a, short b, int c, float d, float e);
extern void func_0AACB0(int a);
extern void func_0BC4C0(void *p);
extern int func_0BC468(void *p);
extern void func_0AD4C8(void *p);
extern void func_0AD500(void *p);
extern void func_137158(int a, R *r, unsigned int c);

void func_0C5BC0(void)
{
    R r;
    Entry *e;

    func_0B0AA8(0x36, -1, 0.0f);
    func_0B0708(0x205, &r, 0.0f);
    func_0AC790(func_0AA680(&r), r.u6, func_1354B0(0x2C9));
    func_0B0708(0x207, &r, 0.0f);
    func_0AD0F8(r.u4, r.u6, func_1354B0(0x1CA), 0.9f, 0.9f);
    func_0B0708(0x201, &r, 0.0f);
    func_0ABB58(r.x, r.u6, func_1354B0(0x2CA), 0.9f, 0.9f);
    func_0AACB0(0);
    func_0BC4C0(&D_0033EAB0);
    func_0AACB0(1);
    e = (Entry *)func_0BC468(&D_0033EAB0);
    if (e) {
        D_0033EB58.v = func_1354B0(e->idx);
        if (D_00214690 != e) {
            func_0AD4C8(&D_0033EB58);
            D_00214690 = e;
        }
        func_0AD500(&D_0033EB58);
        if (e->flag) {
            func_0B0708(0x206, &r, 0.0f);
            func_137158(0, &r, -1);
        }
    }
}
