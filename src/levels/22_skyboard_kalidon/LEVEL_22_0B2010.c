/* LEVEL_22:0x0B2010 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_0027ED70;
extern Slot D_0027EE18;
extern Entry *D_0015F710;
extern void func_09D0B8(int a, unsigned int b, float c);
extern void func_09CD18(int a, R *r, float c);
extern int func_096C90(R *r);
extern void func_098DA0(short a, short b, int c);
extern int func_109980(int a);
extern void func_099708(short a, short b, int c, float d, float e);
extern void func_098168(short a, short b, int c, float d, float e);
extern void func_0972C0(int a);
extern void func_0A8908(void *p);
extern int func_0A88B0(void *p);
extern void func_099AD8(void *p);
extern void func_099B10(void *p);
extern void func_10B628(int a, R *r, unsigned int c);

void func_0B2010(void)
{
    R r;
    Entry *e;

    func_09D0B8(0x36, -1, 0.0f);
    func_09CD18(0x205, &r, 0.0f);
    func_098DA0(func_096C90(&r), r.u6, func_109980(0x2C9));
    func_09CD18(0x207, &r, 0.0f);
    func_099708(r.u4, r.u6, func_109980(0x1CA), 0.9f, 0.9f);
    func_09CD18(0x201, &r, 0.0f);
    func_098168(r.x, r.u6, func_109980(0x2CA), 0.9f, 0.9f);
    func_0972C0(0);
    func_0A8908(&D_0027ED70);
    func_0972C0(1);
    e = (Entry *)func_0A88B0(&D_0027ED70);
    if (e) {
        D_0027EE18.v = func_109980(e->idx);
        if (D_0015F710 != e) {
            func_099AD8(&D_0027EE18);
            D_0015F710 = e;
        }
        func_099B10(&D_0027EE18);
        if (e->flag) {
            func_09CD18(0x206, &r, 0.0f);
            func_10B628(0, &r, -1);
        }
    }
}
