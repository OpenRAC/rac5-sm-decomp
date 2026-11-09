/* LEVEL_23:0x0BA900 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_002FA5F0;
extern Slot D_002FA698;
extern Entry *D_001D3790;
extern void func_0A5818(int a, unsigned int b, float c);
extern void func_0A5478(int a, R *r, float c);
extern int func_09F3F0(R *r);
extern void func_0A1500(short a, short b, int c);
extern int func_123C28(int a);
extern void func_0A1E68(short a, short b, int c, float d, float e);
extern void func_0A08C8(short a, short b, int c, float d, float e);
extern void func_09FA20(int a);
extern void func_0B11F8(void *p);
extern int func_0B11A0(void *p);
extern void func_0A2238(void *p);
extern void func_0A2270(void *p);
extern void func_1258D0(int a, R *r, unsigned int c);

void func_0BA900(void)
{
    R r;
    Entry *e;

    func_0A5818(0x36, -1, 0.0f);
    func_0A5478(0x205, &r, 0.0f);
    func_0A1500(func_09F3F0(&r), r.u6, func_123C28(0x2C9));
    func_0A5478(0x207, &r, 0.0f);
    func_0A1E68(r.u4, r.u6, func_123C28(0x1CA), 0.9f, 0.9f);
    func_0A5478(0x201, &r, 0.0f);
    func_0A08C8(r.x, r.u6, func_123C28(0x2CA), 0.9f, 0.9f);
    func_09FA20(0);
    func_0B11F8(&D_002FA5F0);
    func_09FA20(1);
    e = (Entry *)func_0B11A0(&D_002FA5F0);
    if (e) {
        D_002FA698.v = func_123C28(e->idx);
        if (D_001D3790 != e) {
            func_0A2238(&D_002FA698);
            D_001D3790 = e;
        }
        func_0A2270(&D_002FA698);
        if (e->flag) {
            func_0A5478(0x206, &r, 0.0f);
            func_1258D0(0, &r, -1);
        }
    }
}
