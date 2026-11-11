/* LEVEL_05:0x0BD030 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_00220E40;
extern char D_00314B90[];
extern Slot D_00314C38;
extern Entry *D_001ECEDC;
extern int D_001EBED4;
extern float D_001ECED8;

extern void func_0AAA70(short x, short y, short w, short h, unsigned int c);
extern void func_0A7260(unsigned int c);
extern void func_0ACC18(int id, int f);
extern void func_0AD068(int a, unsigned int b, float c);
extern void func_0ACCC8(int a, R *r, float c);
extern int func_0A6C40(R *r);
extern int func_0A6C70(R *r);
extern void func_0A8D50(short a, short b, int c);
extern int func_12DE28(int a);
extern void func_0A96B8(short a, short b, int c, float d, float e);
extern void func_0A8118(short a, short b, int c, float d, float e);
extern void func_0A9008(float d, float e, short a, short b, int c);
extern int func_026268(int a, int b);
extern int *func_0008D0(int a);
extern int func_0B89B0(void *p);
extern void func_0B8A08(void *p);
extern void func_0A7270(int a);
extern void func_0A9A88(void *p);
extern void func_0A9AC0(void *p);
extern float func_0007F0(Box *b);
extern void func_0A6E20(Box *b, int x, int y);
extern int func_0A6EE8(Box *b, float f);
extern void func_0AAB00(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0AD9C0(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0BB420(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0BD030(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0AAA70(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_00220E40;
    z = 0.0f;
    func_0A7260(0xFFFFFFFF);
    func_0ACC18(0x51B, 0);
    func_0AD068(0x29, 0xFFFFFFFF, z);
    func_0ACC18(0x51B, 1);
    func_0ACCC8(0x150, &r, z);
    func_0A8D50(func_0A6C40(&r), r.u6, func_12DE28(0x2C4));
    func_0ACCC8(0x152, &r, z);
    func_0A8118(r.x, r.u6, func_12DE28(0x2C5), 0.75f, 0.75f);
    func_0ACCC8(0x14F, &r, 0.0f);
    func_0A9008(0.75f, 0.75f, func_0A6C40(&r), r.u6, func_12DE28(0x318));
    func_0ACCC8(0x149, &r, 0.0f);
    func_0A96B8(r.u4, r.u6, func_12DE28(0x1CA), 0.75f, 0.75f);
    if (func_026268(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0ACCC8(0x147, &r, 0.0f);
            func_0A8D50(func_0A6C40(&r), func_0A6C70(&r), func_12DE28(*p));
        }
    }
    e = (Entry *)func_0B89B0(D_00314B90);
    if (e) {
        if (e->label) {
            D_00314C38.v = func_12DE28(e->label->name);
            if (D_001ECEDC != e) {
                func_0A9A88(&D_00314C38);
                D_001ECEDC = e;
            }
            func_0A9AC0(&D_00314C38);
        }
        if (e->box) {
            box = *e->box;
            D_001EBED4 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_0A7270(0);
    func_0B8A08(D_00314B90);
    func_0A7270(1);
    func_0ACCC8(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0AAA70(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0A6E20(&box, 2, 2);
    box.w = func_0A6EE8(&box, (float)D_001EBED4 / 100.0f);
    func_0AAB00(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0ACCC8(0x146, &r, 0.0f);
    sprintf(buf, func_12DE28(0x2B3), D_001EBED4);
    func_0A7260(0xFF000000);
    func_0A8118(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0A7260(0xFFFFFFFF);
    func_0A8118(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0AD9C0(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0BB420(D_001ECED8, -0.09f);
}
