/* LEVEL_07:0x0C0AE8 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
typedef struct {
    short x;
    short p0;
    unsigned short u2;
    unsigned short p1;
    unsigned short u4;
    unsigned short p2;
    unsigned short u6;
    unsigned short p3;
} R;
typedef struct {
    short x;
    short p0;
    unsigned short u2;
    unsigned short p1;
    int w;
    unsigned short u6;
    unsigned short p3;
    int v;
} Box;
typedef struct {
    char pad[4];
    int name;
} Label;
typedef struct {
    char pad[0x14];
    int v;
} Slot;
typedef struct {
    char p0[0xD0];
    Box *box;
    Label *label;
} Entry;
typedef struct {
    char p0[0x5D0];
    int cnt;
} Menu;

extern Menu D_0024AA40;
extern char D_0033E5D0[];
extern Slot D_0033E678;
extern Entry *D_00211E5C;
extern int D_00210E54;
extern float D_00211E58;

extern void func_0AE4B0(short x, short y, short w, short h, unsigned int c);
extern void func_0AACA0(unsigned int c);
extern void func_0B0658(int id, int f);
extern void func_0B0AA8(int a, unsigned int b, float c);
extern void func_0B0708(int a, R *r, float c);
extern int func_0AA680(R *r);
extern int func_0AA6B0(R *r);
extern void func_0AC790(short a, short b, int c);
extern int func_1354B0(int a);
extern void func_0AD0F8(short a, short b, int c, float d, float e);
extern void func_0ABB58(short a, short b, int c, float d, float e);
extern void func_0ACA48(float d, float e, short a, short b, int c);
extern int func_027888(int a, int b);
extern int *func_0008D0(int a);
extern int func_0BC468(void *p);
extern void func_0BC4C0(void *p);
extern void func_0AACB0(int a);
extern void func_0AD4C8(void *p);
extern void func_0AD500(void *p);
extern float func_0007F0(Box *b);
extern void func_0AA860(Box *b, int x, int y);
extern int func_0AA928(Box *b, float f);
extern void func_0AE540(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0B1400(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0BEED8(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0C0AE8(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0AE4B0(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_0024AA40;
    z = 0.0f;
    func_0AACA0(0xFFFFFFFF);
    func_0B0658(0x51B, 0);
    func_0B0AA8(0x29, 0xFFFFFFFF, z);
    func_0B0658(0x51B, 1);
    func_0B0708(0x150, &r, z);
    func_0AC790(func_0AA680(&r), r.u6, func_1354B0(0x2C4));
    func_0B0708(0x152, &r, z);
    func_0ABB58(r.x, r.u6, func_1354B0(0x2C5), 0.75f, 0.75f);
    func_0B0708(0x14F, &r, 0.0f);
    func_0ACA48(0.75f, 0.75f, func_0AA680(&r), r.u6, func_1354B0(0x318));
    func_0B0708(0x149, &r, 0.0f);
    func_0AD0F8(r.u4, r.u6, func_1354B0(0x1CA), 0.75f, 0.75f);
    if (func_027888(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0B0708(0x147, &r, 0.0f);
            func_0AC790(func_0AA680(&r), func_0AA6B0(&r), func_1354B0(*p));
        }
    }
    e = (Entry *)func_0BC468(D_0033E5D0);
    if (e) {
        if (e->label) {
            D_0033E678.v = func_1354B0(e->label->name);
            if (D_00211E5C != e) {
                func_0AD4C8(&D_0033E678);
                D_00211E5C = e;
            }
            func_0AD500(&D_0033E678);
        }
        if (e->box) {
            box = *e->box;
            D_00210E54 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_0AACB0(0);
    func_0BC4C0(D_0033E5D0);
    func_0AACB0(1);
    func_0B0708(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0AE4B0(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0AA860(&box, 2, 2);
    box.w = func_0AA928(&box, (float)D_00210E54 / 100.0f);
    func_0AE540(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0B0708(0x146, &r, 0.0f);
    sprintf(buf, func_1354B0(0x2B3), D_00210E54);
    func_0AACA0(0xFF000000);
    func_0ABB58(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0AACA0(0xFFFFFFFF);
    func_0ABB58(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0B1400(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0BEED8(D_00211E58, -0.09f);
}
