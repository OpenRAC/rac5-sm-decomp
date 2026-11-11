/* LEVEL_15:0x0A41A8 -- placement copy of LEVEL_01_0C3B60.c: plays the set of menu effects and selects the active entry. */
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

extern Entry D_002409F0;
extern Slot D_00240A98;
extern Entry *D_00155010;
extern void func_08F370(int a, unsigned int b, float c);
extern void func_08EFD0(int a, R *r, float c);
extern int func_088F48(R *r);
extern void func_08B058(short a, short b, int c);
extern int func_0F1378(int a);
extern void func_08B9C0(short a, short b, int c, float d, float e);
extern void func_08A420(short a, short b, int c, float d, float e);
extern void func_089578(int a);
extern void func_09AAA8(void *p);
extern int func_09AA50(void *p);
extern void func_08BD90(void *p);
extern void func_08BDC8(void *p);
extern void func_0F3020(int a, R *r, unsigned int c);

void func_0A41A8(void)
{
    R r;
    Entry *e;

    func_08F370(0x36, -1, 0.0f);
    func_08EFD0(0x205, &r, 0.0f);
    func_08B058(func_088F48(&r), r.u6, func_0F1378(0x2C9));
    func_08EFD0(0x207, &r, 0.0f);
    func_08B9C0(r.u4, r.u6, func_0F1378(0x1CA), 0.9f, 0.9f);
    func_08EFD0(0x201, &r, 0.0f);
    func_08A420(r.x, r.u6, func_0F1378(0x2CA), 0.9f, 0.9f);
    func_089578(0);
    func_09AAA8(&D_002409F0);
    func_089578(1);
    e = (Entry *)func_09AA50(&D_002409F0);
    if (e) {
        D_00240A98.v = func_0F1378(e->idx);
        if (D_00155010 != e) {
            func_08BD90(&D_00240A98);
            D_00155010 = e;
        }
        func_08BDC8(&D_00240A98);
        if (e->flag) {
            func_08EFD0(0x206, &r, 0.0f);
            func_0F3020(0, &r, -1);
        }
    }
}
