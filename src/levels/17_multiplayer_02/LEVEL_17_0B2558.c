/* LEVEL_17:0x0B2558 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_002683F0;
extern Slot D_00268498;
extern Entry *D_001A1A08;
extern void func_09C690(int a, unsigned int b, float c);
extern void func_09C2F0(int a, R *r, float c);
extern int func_096208(R *r);
extern void func_098378(short a, short b, int c);
extern int func_10E8A8(int a);
extern void func_098CE0(short a, short b, int c, float d, float e);
extern void func_097740(short a, short b, int c, float d, float e);
extern void func_096868(int a);
extern void func_0A89F0(void *p);
extern int func_0A8998(void *p);
extern void func_0990B0(void *p);
extern void func_0990E8(void *p);
extern void func_110440(int a, R *r, unsigned int c);

void func_0B2558(void)
{
    R r;
    Entry *e;

    func_09C690(0x36, -1, 0.0f);
    func_09C2F0(0x205, &r, 0.0f);
    func_098378(func_096208(&r), r.u6, func_10E8A8(0x2C9));
    func_09C2F0(0x207, &r, 0.0f);
    func_098CE0(r.u4, r.u6, func_10E8A8(0x1CA), 0.9f, 0.9f);
    func_09C2F0(0x201, &r, 0.0f);
    func_097740(r.x, r.u6, func_10E8A8(0x2CA), 0.9f, 0.9f);
    func_096868(0);
    func_0A89F0(&D_002683F0);
    func_096868(1);
    e = (Entry *)func_0A8998(&D_002683F0);
    if (e) {
        D_00268498.v = func_10E8A8(e->idx);
        if (D_001A1A08 != e) {
            func_0990B0(&D_00268498);
            D_001A1A08 = e;
        }
        func_0990E8(&D_00268498);
        if (e->flag) {
            func_09C2F0(0x206, &r, 0.0f);
            func_110440(0, &r, -1);
        }
    }
}
