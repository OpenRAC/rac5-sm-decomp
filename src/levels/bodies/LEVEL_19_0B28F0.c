/* LEVEL_19:0x0B28F0 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_00277270;
extern Slot D_00277318;
extern Entry *D_001AF588;
extern void func_09CA28(int a, unsigned int b, float c);
extern void func_09C688(int a, R *r, float c);
extern int func_0965A0(R *r);
extern void func_098710(short a, short b, int c);
extern int func_10F9D0(int a);
extern void func_099078(short a, short b, int c, float d, float e);
extern void func_097AD8(short a, short b, int c, float d, float e);
extern void func_096C00(int a);
extern void func_0A8D88(void *p);
extern int func_0A8D30(void *p);
extern void func_099448(void *p);
extern void func_099480(void *p);
extern void func_111568(int a, R *r, unsigned int c);

void func_0B28F0(void)
{
    R r;
    Entry *e;

    func_09CA28(0x36, -1, 0.0f);
    func_09C688(0x205, &r, 0.0f);
    func_098710(func_0965A0(&r), r.u6, func_10F9D0(0x2C9));
    func_09C688(0x207, &r, 0.0f);
    func_099078(r.u4, r.u6, func_10F9D0(0x1CA), 0.9f, 0.9f);
    func_09C688(0x201, &r, 0.0f);
    func_097AD8(r.x, r.u6, func_10F9D0(0x2CA), 0.9f, 0.9f);
    func_096C00(0);
    func_0A8D88(&D_00277270);
    func_096C00(1);
    e = (Entry *)func_0A8D30(&D_00277270);
    if (e) {
        D_00277318.v = func_10F9D0(e->idx);
        if (D_001AF588 != e) {
            func_099448(&D_00277318);
            D_001AF588 = e;
        }
        func_099480(&D_00277318);
        if (e->flag) {
            func_09C688(0x206, &r, 0.0f);
            func_111568(0, &r, -1);
        }
    }
}
