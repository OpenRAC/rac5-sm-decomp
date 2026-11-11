/* LEVEL_23:0x0B5828 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_002025C0;
extern char D_002FA110[];
extern Slot D_002FA1B8;
extern Entry *D_001D0F5C;
extern int D_001CFF54;
extern float D_001D0F58;

extern void func_0A3220(short x, short y, short w, short h, unsigned int c);
extern void func_09FA10(unsigned int c);
extern void func_0A53C8(int id, int f);
extern void func_0A5818(int a, unsigned int b, float c);
extern void func_0A5478(int a, R *r, float c);
extern int func_09F3F0(R *r);
extern int func_09F420(R *r);
extern void func_0A1500(short a, short b, int c);
extern int func_123C28(int a);
extern void func_0A1E68(short a, short b, int c, float d, float e);
extern void func_0A08C8(short a, short b, int c, float d, float e);
extern void func_0A17B8(float d, float e, short a, short b, int c);
extern int func_025280(int a, int b);
extern int *func_0008D0(int a);
extern int func_0B11A0(void *p);
extern void func_0B11F8(void *p);
extern void func_09FA20(int a);
extern void func_0A2238(void *p);
extern void func_0A2270(void *p);
extern float func_0007F0(Box *b);
extern void func_09F5D0(Box *b, int x, int y);
extern int func_09F698(Box *b, float f);
extern void func_0A32B0(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0A6170(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0B3C18(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0B5828(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0A3220(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_002025C0;
    z = 0.0f;
    func_09FA10(0xFFFFFFFF);
    func_0A53C8(0x51B, 0);
    func_0A5818(0x29, 0xFFFFFFFF, z);
    func_0A53C8(0x51B, 1);
    func_0A5478(0x150, &r, z);
    func_0A1500(func_09F3F0(&r), r.u6, func_123C28(0x2C4));
    func_0A5478(0x152, &r, z);
    func_0A08C8(r.x, r.u6, func_123C28(0x2C5), 0.75f, 0.75f);
    func_0A5478(0x14F, &r, 0.0f);
    func_0A17B8(0.75f, 0.75f, func_09F3F0(&r), r.u6, func_123C28(0x318));
    func_0A5478(0x149, &r, 0.0f);
    func_0A1E68(r.u4, r.u6, func_123C28(0x1CA), 0.75f, 0.75f);
    if (func_025280(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0A5478(0x147, &r, 0.0f);
            func_0A1500(func_09F3F0(&r), func_09F420(&r), func_123C28(*p));
        }
    }
    e = (Entry *)func_0B11A0(D_002FA110);
    if (e) {
        if (e->label) {
            D_002FA1B8.v = func_123C28(e->label->name);
            if (D_001D0F5C != e) {
                func_0A2238(&D_002FA1B8);
                D_001D0F5C = e;
            }
            func_0A2270(&D_002FA1B8);
        }
        if (e->box) {
            box = *e->box;
            D_001CFF54 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_09FA20(0);
    func_0B11F8(D_002FA110);
    func_09FA20(1);
    func_0A5478(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0A3220(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_09F5D0(&box, 2, 2);
    box.w = func_09F698(&box, (float)D_001CFF54 / 100.0f);
    func_0A32B0(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0A5478(0x146, &r, 0.0f);
    sprintf(buf, func_123C28(0x2B3), D_001CFF54);
    func_09FA10(0xFF000000);
    func_0A08C8(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_09FA10(0xFFFFFFFF);
    func_0A08C8(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0A6170(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0B3C18(D_001D0F58, -0.09f);
}
