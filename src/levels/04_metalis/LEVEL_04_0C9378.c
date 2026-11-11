/* LEVEL_04:0x0C9378 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_003439B0;
extern Slot D_00343A58;
extern Entry *D_00219850;
extern void func_0B3CF8(int a, unsigned int b, float c);
extern void func_0B3958(int a, R *r, float c);
extern int func_0AD890(R *r);
extern void func_0AF9E0(short a, short b, int c);
extern int func_13E930(int a);
extern void func_0B0348(short a, short b, int c, float d, float e);
extern void func_0AEDA8(short a, short b, int c, float d, float e);
extern void func_0ADF00(int a);
extern void func_0BFC40(void *p);
extern int func_0BFBE8(void *p);
extern void func_0B0718(void *p);
extern void func_0B0750(void *p);
extern void func_1405D8(int a, R *r, unsigned int c);

void func_0C9378(void)
{
    R r;
    Entry *e;

    func_0B3CF8(0x36, -1, 0.0f);
    func_0B3958(0x205, &r, 0.0f);
    func_0AF9E0(func_0AD890(&r), r.u6, func_13E930(0x2C9));
    func_0B3958(0x207, &r, 0.0f);
    func_0B0348(r.u4, r.u6, func_13E930(0x1CA), 0.9f, 0.9f);
    func_0B3958(0x201, &r, 0.0f);
    func_0AEDA8(r.x, r.u6, func_13E930(0x2CA), 0.9f, 0.9f);
    func_0ADF00(0);
    func_0BFC40(&D_003439B0);
    func_0ADF00(1);
    e = (Entry *)func_0BFBE8(&D_003439B0);
    if (e) {
        D_00343A58.v = func_13E930(e->idx);
        if (D_00219850 != e) {
            func_0B0718(&D_00343A58);
            D_00219850 = e;
        }
        func_0B0750(&D_00343A58);
        if (e->flag) {
            func_0B3958(0x206, &r, 0.0f);
            func_1405D8(0, &r, -1);
        }
    }
}
