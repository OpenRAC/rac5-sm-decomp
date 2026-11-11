/* LEVEL_09:0x0C0E10 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_00310930;
extern Slot D_003109D8;
extern Entry *D_001EA190;
extern void func_0ABD58(int a, unsigned int b, float c);
extern void func_0AB9B8(int a, R *r, float c);
extern int func_0A5930(R *r);
extern void func_0A7A40(short a, short b, int c);
extern int func_12B448(int a);
extern void func_0A83A8(short a, short b, int c, float d, float e);
extern void func_0A6E08(short a, short b, int c, float d, float e);
extern void func_0A5F60(int a);
extern void func_0B7710(void *p);
extern int func_0B76B8(void *p);
extern void func_0A8778(void *p);
extern void func_0A87B0(void *p);
extern void func_12D0F0(int a, R *r, unsigned int c);

void func_0C0E10(void)
{
    R r;
    Entry *e;

    func_0ABD58(0x36, -1, 0.0f);
    func_0AB9B8(0x205, &r, 0.0f);
    func_0A7A40(func_0A5930(&r), r.u6, func_12B448(0x2C9));
    func_0AB9B8(0x207, &r, 0.0f);
    func_0A83A8(r.u4, r.u6, func_12B448(0x1CA), 0.9f, 0.9f);
    func_0AB9B8(0x201, &r, 0.0f);
    func_0A6E08(r.x, r.u6, func_12B448(0x2CA), 0.9f, 0.9f);
    func_0A5F60(0);
    func_0B7710(&D_00310930);
    func_0A5F60(1);
    e = (Entry *)func_0B76B8(&D_00310930);
    if (e) {
        D_003109D8.v = func_12B448(e->idx);
        if (D_001EA190 != e) {
            func_0A8778(&D_003109D8);
            D_001EA190 = e;
        }
        func_0A87B0(&D_003109D8);
        if (e->flag) {
            func_0AB9B8(0x206, &r, 0.0f);
            func_12D0F0(0, &r, -1);
        }
    }
}
