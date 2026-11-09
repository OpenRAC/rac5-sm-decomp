/* LEVEL_05:0x0C2108 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_00315070;
extern Slot D_00315118;
extern Entry *D_001EF710;
extern void func_0AD068(int a, unsigned int b, float c);
extern void func_0ACCC8(int a, R *r, float c);
extern int func_0A6C40(R *r);
extern void func_0A8D50(short a, short b, int c);
extern int func_12DE28(int a);
extern void func_0A96B8(short a, short b, int c, float d, float e);
extern void func_0A8118(short a, short b, int c, float d, float e);
extern void func_0A7270(int a);
extern void func_0B8A08(void *p);
extern int func_0B89B0(void *p);
extern void func_0A9A88(void *p);
extern void func_0A9AC0(void *p);
extern void func_12FAD0(int a, R *r, unsigned int c);

void func_0C2108(void)
{
    R r;
    Entry *e;

    func_0AD068(0x36, -1, 0.0f);
    func_0ACCC8(0x205, &r, 0.0f);
    func_0A8D50(func_0A6C40(&r), r.u6, func_12DE28(0x2C9));
    func_0ACCC8(0x207, &r, 0.0f);
    func_0A96B8(r.u4, r.u6, func_12DE28(0x1CA), 0.9f, 0.9f);
    func_0ACCC8(0x201, &r, 0.0f);
    func_0A8118(r.x, r.u6, func_12DE28(0x2CA), 0.9f, 0.9f);
    func_0A7270(0);
    func_0B8A08(&D_00315070);
    func_0A7270(1);
    e = (Entry *)func_0B89B0(&D_00315070);
    if (e) {
        D_00315118.v = func_12DE28(e->idx);
        if (D_001EF710 != e) {
            func_0A9A88(&D_00315118);
            D_001EF710 = e;
        }
        func_0A9AC0(&D_00315118);
        if (e->flag) {
            func_0ACCC8(0x206, &r, 0.0f);
            func_12FAD0(0, &r, -1);
        }
    }
}
