/* LEVEL_04:0x0C42A0 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_0024F950;
extern char D_003434D0[];
extern Slot D_00343578;
extern Entry *D_0021701C;
extern int D_00216014;
extern float D_00217018;

extern void func_0B1700(short x, short y, short w, short h, unsigned int c);
extern void func_0ADEF0(unsigned int c);
extern void func_0B38A8(int id, int f);
extern void func_0B3CF8(int a, unsigned int b, float c);
extern void func_0B3958(int a, R *r, float c);
extern int func_0AD890(R *r);
extern int func_0AD8C0(R *r);
extern void func_0AF9E0(short a, short b, int c);
extern int func_13E930(int a);
extern void func_0B0348(short a, short b, int c, float d, float e);
extern void func_0AEDA8(short a, short b, int c, float d, float e);
extern void func_0AFC98(float d, float e, short a, short b, int c);
extern int func_0271B8(int a, int b);
extern int *func_0006D8(int a);
extern int func_0BFBE8(void *p);
extern void func_0BFC40(void *p);
extern void func_0ADF00(int a);
extern void func_0B0718(void *p);
extern void func_0B0750(void *p);
extern float func_000630(Box *b);
extern void func_0ADA70(Box *b, int x, int y);
extern int func_0ADB78(Box *b, float f);
extern void func_0B1790(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0B4650(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0C2690(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0C42A0(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0B1700(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_0024F950;
    z = 0.0f;
    func_0ADEF0(0xFFFFFFFF);
    func_0B38A8(0x51B, 0);
    func_0B3CF8(0x29, 0xFFFFFFFF, z);
    func_0B38A8(0x51B, 1);
    func_0B3958(0x150, &r, z);
    func_0AF9E0(func_0AD890(&r), r.u6, func_13E930(0x2C4));
    func_0B3958(0x152, &r, z);
    func_0AEDA8(r.x, r.u6, func_13E930(0x2C5), 0.75f, 0.75f);
    func_0B3958(0x14F, &r, 0.0f);
    func_0AFC98(0.75f, 0.75f, func_0AD890(&r), r.u6, func_13E930(0x318));
    func_0B3958(0x149, &r, 0.0f);
    func_0B0348(r.u4, r.u6, func_13E930(0x1CA), 0.75f, 0.75f);
    if (func_0271B8(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0006D8(m->cnt);
            func_0B3958(0x147, &r, 0.0f);
            func_0AF9E0(func_0AD890(&r), func_0AD8C0(&r), func_13E930(*p));
        }
    }
    e = (Entry *)func_0BFBE8(D_003434D0);
    if (e) {
        if (e->label) {
            D_00343578.v = func_13E930(e->label->name);
            if (D_0021701C != e) {
                func_0B0718(&D_00343578);
                D_0021701C = e;
            }
            func_0B0750(&D_00343578);
        }
        if (e->box) {
            box = *e->box;
            D_00216014 = (int)((func_000630(&box) + 0.001f) * 100.0f);
        }
    }
    func_0ADF00(0);
    func_0BFC40(D_003434D0);
    func_0ADF00(1);
    func_0B3958(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0B1700(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0ADA70(&box, 2, 2);
    box.w = func_0ADB78(&box, (float)D_00216014 / 100.0f);
    func_0B1790(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0B3958(0x146, &r, 0.0f);
    sprintf(buf, func_13E930(0x2B3), D_00216014);
    func_0ADEF0(0xFF000000);
    func_0AEDA8(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0ADEF0(0xFFFFFFFF);
    func_0AEDA8(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0B4650(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0C2690(D_00217018, -0.09f);
}
