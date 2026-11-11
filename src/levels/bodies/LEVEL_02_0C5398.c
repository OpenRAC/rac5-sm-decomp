/* LEVEL_02:0x0C5398 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_0024C650;
extern char D_003401D0[];
extern Slot D_00340278;
extern Entry *D_00212B1C;
extern int D_00211B14;
extern float D_00212B18;

extern void func_0B2DC0(short x, short y, short w, short h, unsigned int c);
extern void func_0AF5B0(unsigned int c);
extern void func_0B4F68(int id, int f);
extern void func_0B53B8(int a, unsigned int b, float c);
extern void func_0B5018(int a, R *r, float c);
extern int func_0AEF90(R *r);
extern int func_0AEFC0(R *r);
extern void func_0B10A0(short a, short b, int c);
extern int func_138860(int a);
extern void func_0B1A08(short a, short b, int c, float d, float e);
extern void func_0B0468(short a, short b, int c, float d, float e);
extern void func_0B1358(float d, float e, short a, short b, int c);
extern int func_027D10(int a, int b);
extern int *func_0008D0(int a);
extern int func_0C0D18(void *p);
extern void func_0C0D70(void *p);
extern void func_0AF5C0(int a);
extern void func_0B1DD8(void *p);
extern void func_0B1E10(void *p);
extern float func_0007F0(Box *b);
extern void func_0AF170(Box *b, int x, int y);
extern int func_0AF238(Box *b, float f);
extern void func_0B2E50(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0B5D10(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0C3788(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0C5398(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0B2DC0(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_0024C650;
    z = 0.0f;
    func_0AF5B0(0xFFFFFFFF);
    func_0B4F68(0x51B, 0);
    func_0B53B8(0x29, 0xFFFFFFFF, z);
    func_0B4F68(0x51B, 1);
    func_0B5018(0x150, &r, z);
    func_0B10A0(func_0AEF90(&r), r.u6, func_138860(0x2C4));
    func_0B5018(0x152, &r, z);
    func_0B0468(r.x, r.u6, func_138860(0x2C5), 0.75f, 0.75f);
    func_0B5018(0x14F, &r, 0.0f);
    func_0B1358(0.75f, 0.75f, func_0AEF90(&r), r.u6, func_138860(0x318));
    func_0B5018(0x149, &r, 0.0f);
    func_0B1A08(r.u4, r.u6, func_138860(0x1CA), 0.75f, 0.75f);
    if (func_027D10(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0B5018(0x147, &r, 0.0f);
            func_0B10A0(func_0AEF90(&r), func_0AEFC0(&r), func_138860(*p));
        }
    }
    e = (Entry *)func_0C0D18(D_003401D0);
    if (e) {
        if (e->label) {
            D_00340278.v = func_138860(e->label->name);
            if (D_00212B1C != e) {
                func_0B1DD8(&D_00340278);
                D_00212B1C = e;
            }
            func_0B1E10(&D_00340278);
        }
        if (e->box) {
            box = *e->box;
            D_00211B14 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_0AF5C0(0);
    func_0C0D70(D_003401D0);
    func_0AF5C0(1);
    func_0B5018(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0B2DC0(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0AF170(&box, 2, 2);
    box.w = func_0AF238(&box, (float)D_00211B14 / 100.0f);
    func_0B2E50(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0B5018(0x146, &r, 0.0f);
    sprintf(buf, func_138860(0x2B3), D_00211B14);
    func_0AF5B0(0xFF000000);
    func_0B0468(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0AF5B0(0xFFFFFFFF);
    func_0B0468(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0B5D10(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0C3788(D_00212B18, -0.09f);
}
