/* LEVEL_01:0x0BEA88 -- draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_00235140;
extern char D_00328CD0[];
extern Slot D_00328D78;
extern Entry *D_001FDB5C;
extern int D_001FCB54;
extern float D_001FDB58;

extern void func_0AC4B0(short x, short y, short w, short h, unsigned int c);
extern void func_0A8CA0(unsigned int c);
extern void func_0AE658(int id, int f);
extern void func_0AEAA8(int a, unsigned int b, float c);
extern void func_0AE708(int a, R *r, float c);
extern int func_0A8680(R *r);
extern int func_0A86B0(R *r);
extern void func_0AA790(short a, short b, int c);
extern int func_1324B0(int a);
extern void func_0AB0F8(short a, short b, int c, float d, float e);
extern void func_0A9B58(short a, short b, int c, float d, float e);
extern void func_0AAA48(float d, float e, short a, short b, int c);
extern int func_027528(int a, int b);
extern int *func_0008D0(int a);
extern int func_0BA408(void *p);
extern void func_0BA460(void *p);
extern void func_0A8CB0(int a);
extern void func_0AB4C8(void *p);
extern void func_0AB500(void *p);
extern float func_0007F0(Box *b);
extern void func_0A8860(Box *b, int x, int y);
extern int func_0A8928(Box *b, float f);
extern void func_0AC540(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0AF400(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0BCE78(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0BEA88(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0AC4B0(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_00235140;
    z = 0.0f;
    func_0A8CA0(0xFFFFFFFF);
    func_0AE658(0x51B, 0);
    func_0AEAA8(0x29, 0xFFFFFFFF, z);
    func_0AE658(0x51B, 1);
    func_0AE708(0x150, &r, z);
    func_0AA790(func_0A8680(&r), r.u6, func_1324B0(0x2C4));
    func_0AE708(0x152, &r, z);
    func_0A9B58(r.x, r.u6, func_1324B0(0x2C5), 0.75f, 0.75f);
    func_0AE708(0x14F, &r, 0.0f);
    func_0AAA48(0.75f, 0.75f, func_0A8680(&r), r.u6, func_1324B0(0x318));
    func_0AE708(0x149, &r, 0.0f);
    func_0AB0F8(r.u4, r.u6, func_1324B0(0x1CA), 0.75f, 0.75f);
    if (func_027528(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0AE708(0x147, &r, 0.0f);
            func_0AA790(func_0A8680(&r), func_0A86B0(&r), func_1324B0(*p));
        }
    }
    e = (Entry *)func_0BA408(D_00328CD0);
    if (e) {
        if (e->label) {
            D_00328D78.v = func_1324B0(e->label->name);
            if (D_001FDB5C != e) {
                func_0AB4C8(&D_00328D78);
                D_001FDB5C = e;
            }
            func_0AB500(&D_00328D78);
        }
        if (e->box) {
            box = *e->box;
            D_001FCB54 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_0A8CB0(0);
    func_0BA460(D_00328CD0);
    func_0A8CB0(1);
    func_0AE708(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0AC4B0(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0A8860(&box, 2, 2);
    box.w = func_0A8928(&box, (float)D_001FCB54 / 100.0f);
    func_0AC540(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0AE708(0x146, &r, 0.0f);
    sprintf(buf, func_1324B0(0x2B3), D_001FCB54);
    func_0A8CA0(0xFF000000);
    func_0A9B58(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0A8CA0(0xFFFFFFFF);
    func_0A9B58(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0AF400(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0BCE78(D_001FDB58, -0.09f);
}
