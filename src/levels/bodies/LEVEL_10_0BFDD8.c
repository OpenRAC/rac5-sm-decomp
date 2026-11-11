/* LEVEL_10:0x0BFDD8 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_0023E540;
extern char D_003320D0[];
extern Slot D_00332178;
extern Entry *D_00206B5C;
extern int D_00205B54;
extern float D_00206B58;

extern void func_0AD5C8(short x, short y, short w, short h, unsigned int c);
extern void func_0A9DB8(unsigned int c);
extern void func_0AF770(int id, int f);
extern void func_0AFBC0(int a, unsigned int b, float c);
extern void func_0AF820(int a, R *r, float c);
extern int func_0A9798(R *r);
extern int func_0A97C8(R *r);
extern void func_0AB8A8(short a, short b, int c);
extern int func_130310(int a);
extern void func_0AC210(short a, short b, int c, float d, float e);
extern void func_0AAC70(short a, short b, int c, float d, float e);
extern void func_0ABB60(float d, float e, short a, short b, int c);
extern int func_026E08(int a, int b);
extern int *func_000660(int a);
extern int func_0BB750(void *p);
extern void func_0BB7A8(void *p);
extern void func_0A9DC8(int a);
extern void func_0AC5E0(void *p);
extern void func_0AC618(void *p);
extern float func_0005B8(Box *b);
extern void func_0A9978(Box *b, int x, int y);
extern int func_0A9A40(Box *b, float f);
extern void func_0AD658(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0B0518(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0BE1C8(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0BFDD8(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0AD5C8(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_0023E540;
    z = 0.0f;
    func_0A9DB8(0xFFFFFFFF);
    func_0AF770(0x51B, 0);
    func_0AFBC0(0x29, 0xFFFFFFFF, z);
    func_0AF770(0x51B, 1);
    func_0AF820(0x150, &r, z);
    func_0AB8A8(func_0A9798(&r), r.u6, func_130310(0x2C4));
    func_0AF820(0x152, &r, z);
    func_0AAC70(r.x, r.u6, func_130310(0x2C5), 0.75f, 0.75f);
    func_0AF820(0x14F, &r, 0.0f);
    func_0ABB60(0.75f, 0.75f, func_0A9798(&r), r.u6, func_130310(0x318));
    func_0AF820(0x149, &r, 0.0f);
    func_0AC210(r.u4, r.u6, func_130310(0x1CA), 0.75f, 0.75f);
    if (func_026E08(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_000660(m->cnt);
            func_0AF820(0x147, &r, 0.0f);
            func_0AB8A8(func_0A9798(&r), func_0A97C8(&r), func_130310(*p));
        }
    }
    e = (Entry *)func_0BB750(D_003320D0);
    if (e) {
        if (e->label) {
            D_00332178.v = func_130310(e->label->name);
            if (D_00206B5C != e) {
                func_0AC5E0(&D_00332178);
                D_00206B5C = e;
            }
            func_0AC618(&D_00332178);
        }
        if (e->box) {
            box = *e->box;
            D_00205B54 = (int)((func_0005B8(&box) + 0.001f) * 100.0f);
        }
    }
    func_0A9DC8(0);
    func_0BB7A8(D_003320D0);
    func_0A9DC8(1);
    func_0AF820(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0AD5C8(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0A9978(&box, 2, 2);
    box.w = func_0A9A40(&box, (float)D_00205B54 / 100.0f);
    func_0AD658(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0AF820(0x146, &r, 0.0f);
    sprintf(buf, func_130310(0x2B3), D_00205B54);
    func_0A9DB8(0xFF000000);
    func_0AAC70(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0A9DB8(0xFFFFFFFF);
    func_0AAC70(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0B0518(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0BE1C8(D_00206B58, -0.09f);
}
