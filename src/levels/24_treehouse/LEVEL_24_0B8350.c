/* LEVEL_24:0x0B8350 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_00201040;
extern char D_002F4B90[];
extern Slot D_002F4C38;
extern Entry *D_001CE7DC;
extern int D_001CD7D4;
extern float D_001CE7D8;

extern void func_0A5D28(short x, short y, short w, short h, unsigned int c);
extern void func_0A2518(unsigned int c);
extern void func_0A7ED0(int id, int f);
extern void func_0A8320(int a, unsigned int b, float c);
extern void func_0A7F80(int a, R *r, float c);
extern int func_0A1EF8(R *r);
extern int func_0A1F28(R *r);
extern void func_0A4008(short a, short b, int c);
extern int func_127FB0(int a);
extern void func_0A4970(short a, short b, int c, float d, float e);
extern void func_0A33D0(short a, short b, int c, float d, float e);
extern void func_0A42C0(float d, float e, short a, short b, int c);
extern int func_024E58(int a, int b);
extern int *func_0006D8(int a);
extern int func_0B3C98(void *p);
extern void func_0B3CF0(void *p);
extern void func_0A2528(int a);
extern void func_0A4D40(void *p);
extern void func_0A4D78(void *p);
extern float func_000630(Box *b);
extern void func_0A20D8(Box *b, int x, int y);
extern int func_0A21A0(Box *b, float f);
extern void func_0A5DB8(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0A8C78(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0B6740(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0B8350(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0A5D28(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_00201040;
    z = 0.0f;
    func_0A2518(0xFFFFFFFF);
    func_0A7ED0(0x51B, 0);
    func_0A8320(0x29, 0xFFFFFFFF, z);
    func_0A7ED0(0x51B, 1);
    func_0A7F80(0x150, &r, z);
    func_0A4008(func_0A1EF8(&r), r.u6, func_127FB0(0x2C4));
    func_0A7F80(0x152, &r, z);
    func_0A33D0(r.x, r.u6, func_127FB0(0x2C5), 0.75f, 0.75f);
    func_0A7F80(0x14F, &r, 0.0f);
    func_0A42C0(0.75f, 0.75f, func_0A1EF8(&r), r.u6, func_127FB0(0x318));
    func_0A7F80(0x149, &r, 0.0f);
    func_0A4970(r.u4, r.u6, func_127FB0(0x1CA), 0.75f, 0.75f);
    if (func_024E58(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0006D8(m->cnt);
            func_0A7F80(0x147, &r, 0.0f);
            func_0A4008(func_0A1EF8(&r), func_0A1F28(&r), func_127FB0(*p));
        }
    }
    e = (Entry *)func_0B3C98(D_002F4B90);
    if (e) {
        if (e->label) {
            D_002F4C38.v = func_127FB0(e->label->name);
            if (D_001CE7DC != e) {
                func_0A4D40(&D_002F4C38);
                D_001CE7DC = e;
            }
            func_0A4D78(&D_002F4C38);
        }
        if (e->box) {
            box = *e->box;
            D_001CD7D4 = (int)((func_000630(&box) + 0.001f) * 100.0f);
        }
    }
    func_0A2528(0);
    func_0B3CF0(D_002F4B90);
    func_0A2528(1);
    func_0A7F80(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0A5D28(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0A20D8(&box, 2, 2);
    box.w = func_0A21A0(&box, (float)D_001CD7D4 / 100.0f);
    func_0A5DB8(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0A7F80(0x146, &r, 0.0f);
    sprintf(buf, func_127FB0(0x2B3), D_001CD7D4);
    func_0A2518(0xFF000000);
    func_0A33D0(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0A2518(0xFFFFFFFF);
    func_0A33D0(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0A8C78(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0B6740(D_001CE7D8, -0.09f);
}
