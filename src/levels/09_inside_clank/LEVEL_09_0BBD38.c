/* LEVEL_09:0x0BBD38 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_0021C8C0;
extern char D_00310450[];
extern Slot D_003104F8;
extern Entry *D_001E795C;
extern int D_001E6954;
extern float D_001E7958;

extern void func_0A9760(short x, short y, short w, short h, unsigned int c);
extern void func_0A5F50(unsigned int c);
extern void func_0AB908(int id, int f);
extern void func_0ABD58(int a, unsigned int b, float c);
extern void func_0AB9B8(int a, R *r, float c);
extern int func_0A5930(R *r);
extern int func_0A5960(R *r);
extern void func_0A7A40(short a, short b, int c);
extern int func_12B448(int a);
extern void func_0A83A8(short a, short b, int c, float d, float e);
extern void func_0A6E08(short a, short b, int c, float d, float e);
extern void func_0A7CF8(float d, float e, short a, short b, int c);
extern int func_026530(int a, int b);
extern int *func_0008D0(int a);
extern int func_0B76B8(void *p);
extern void func_0B7710(void *p);
extern void func_0A5F60(int a);
extern void func_0A8778(void *p);
extern void func_0A87B0(void *p);
extern float func_0007F0(Box *b);
extern void func_0A5B10(Box *b, int x, int y);
extern int func_0A5BD8(Box *b, float f);
extern void func_0A97F0(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0AC6B0(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0BA128(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0BBD38(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0A9760(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_0021C8C0;
    z = 0.0f;
    func_0A5F50(0xFFFFFFFF);
    func_0AB908(0x51B, 0);
    func_0ABD58(0x29, 0xFFFFFFFF, z);
    func_0AB908(0x51B, 1);
    func_0AB9B8(0x150, &r, z);
    func_0A7A40(func_0A5930(&r), r.u6, func_12B448(0x2C4));
    func_0AB9B8(0x152, &r, z);
    func_0A6E08(r.x, r.u6, func_12B448(0x2C5), 0.75f, 0.75f);
    func_0AB9B8(0x14F, &r, 0.0f);
    func_0A7CF8(0.75f, 0.75f, func_0A5930(&r), r.u6, func_12B448(0x318));
    func_0AB9B8(0x149, &r, 0.0f);
    func_0A83A8(r.u4, r.u6, func_12B448(0x1CA), 0.75f, 0.75f);
    if (func_026530(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0AB9B8(0x147, &r, 0.0f);
            func_0A7A40(func_0A5930(&r), func_0A5960(&r), func_12B448(*p));
        }
    }
    e = (Entry *)func_0B76B8(D_00310450);
    if (e) {
        if (e->label) {
            D_003104F8.v = func_12B448(e->label->name);
            if (D_001E795C != e) {
                func_0A8778(&D_003104F8);
                D_001E795C = e;
            }
            func_0A87B0(&D_003104F8);
        }
        if (e->box) {
            box = *e->box;
            D_001E6954 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_0A5F60(0);
    func_0B7710(D_00310450);
    func_0A5F60(1);
    func_0AB9B8(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0A9760(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0A5B10(&box, 2, 2);
    box.w = func_0A5BD8(&box, (float)D_001E6954 / 100.0f);
    func_0A97F0(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0AB9B8(0x146, &r, 0.0f);
    sprintf(buf, func_12B448(0x2B3), D_001E6954);
    func_0A5F50(0xFF000000);
    func_0A6E08(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0A5F50(0xFFFFFFFF);
    func_0A6E08(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0AC6B0(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0BA128(D_001E7958, -0.09f);
}
