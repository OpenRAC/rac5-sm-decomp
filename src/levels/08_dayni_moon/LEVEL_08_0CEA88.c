/* LEVEL_08:0x0CEA88 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_00378430;
extern Slot D_003784D8;
extern Entry *D_00249250;
extern void func_0B93E0(int a, unsigned int b, float c);
extern void func_0B9040(int a, R *r, float c);
extern int func_0B2F78(R *r);
extern void func_0B50C8(short a, short b, int c);
extern int func_1439E8(int a);
extern void func_0B5A30(short a, short b, int c, float d, float e);
extern void func_0B4490(short a, short b, int c, float d, float e);
extern void func_0B35E8(int a);
extern void func_0C5350(void *p);
extern int func_0C52F8(void *p);
extern void func_0B5E00(void *p);
extern void func_0B5E38(void *p);
extern void func_145690(int a, R *r, unsigned int c);

void func_0CEA88(void)
{
    R r;
    Entry *e;

    func_0B93E0(0x36, -1, 0.0f);
    func_0B9040(0x205, &r, 0.0f);
    func_0B50C8(func_0B2F78(&r), r.u6, func_1439E8(0x2C9));
    func_0B9040(0x207, &r, 0.0f);
    func_0B5A30(r.u4, r.u6, func_1439E8(0x1CA), 0.9f, 0.9f);
    func_0B9040(0x201, &r, 0.0f);
    func_0B4490(r.x, r.u6, func_1439E8(0x2CA), 0.9f, 0.9f);
    func_0B35E8(0);
    func_0C5350(&D_00378430);
    func_0B35E8(1);
    e = (Entry *)func_0C52F8(&D_00378430);
    if (e) {
        D_003784D8.v = func_1439E8(e->idx);
        if (D_00249250 != e) {
            func_0B5E00(&D_003784D8);
            D_00249250 = e;
        }
        func_0B5E38(&D_003784D8);
        if (e->flag) {
            func_0B9040(0x206, &r, 0.0f);
            func_145690(0, &r, -1);
        }
    }
}
