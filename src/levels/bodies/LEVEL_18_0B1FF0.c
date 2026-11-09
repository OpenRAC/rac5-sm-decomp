/* LEVEL_18:0x0B1FF0 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_00277470;
extern Slot D_00277518;
extern Entry *D_001AF888;
extern void func_09C1A8(int a, unsigned int b, float c);
extern void func_09BE08(int a, R *r, float c);
extern int func_095D20(R *r);
extern void func_097E90(short a, short b, int c);
extern int func_10DFE0(int a);
extern void func_0987F8(short a, short b, int c, float d, float e);
extern void func_097258(short a, short b, int c, float d, float e);
extern void func_096380(int a);
extern void func_0A8488(void *p);
extern int func_0A8430(void *p);
extern void func_098BC8(void *p);
extern void func_098C00(void *p);
extern void func_10FB78(int a, R *r, unsigned int c);

void func_0B1FF0(void)
{
    R r;
    Entry *e;

    func_09C1A8(0x36, -1, 0.0f);
    func_09BE08(0x205, &r, 0.0f);
    func_097E90(func_095D20(&r), r.u6, func_10DFE0(0x2C9));
    func_09BE08(0x207, &r, 0.0f);
    func_0987F8(r.u4, r.u6, func_10DFE0(0x1CA), 0.9f, 0.9f);
    func_09BE08(0x201, &r, 0.0f);
    func_097258(r.x, r.u6, func_10DFE0(0x2CA), 0.9f, 0.9f);
    func_096380(0);
    func_0A8488(&D_00277470);
    func_096380(1);
    e = (Entry *)func_0A8430(&D_00277470);
    if (e) {
        D_00277518.v = func_10DFE0(e->idx);
        if (D_001AF888 != e) {
            func_098BC8(&D_00277518);
            D_001AF888 = e;
        }
        func_098C00(&D_00277518);
        if (e->flag) {
            func_09BE08(0x206, &r, 0.0f);
            func_10FB78(0, &r, -1);
        }
    }
}
