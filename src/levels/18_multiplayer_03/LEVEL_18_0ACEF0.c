/* LEVEL_18:0x0ACEF0 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_001E4410;
extern char D_00276F90[];
extern Slot D_00277038;
extern Entry *D_001AD05C;
extern int D_001AC054;
extern float D_001AD058;

extern void func_099BB0(short x, short y, short w, short h, unsigned int c);
extern void func_096370(unsigned int c);
extern void func_09BD58(int id, int f);
extern void func_09C1A8(int a, unsigned int b, float c);
extern void func_09BE08(int a, R *r, float c);
extern int func_095D20(R *r);
extern int func_095D50(R *r);
extern void func_097E90(short a, short b, int c);
extern int func_10DFE0(int a);
extern void func_0987F8(short a, short b, int c, float d, float e);
extern void func_097258(short a, short b, int c, float d, float e);
extern void func_098148(float d, float e, short a, short b, int c);
extern int func_024578(int a, int b);
extern int *func_0005D8(int a);
extern int func_0A8430(void *p);
extern void func_0A8488(void *p);
extern void func_096380(int a);
extern void func_098BC8(void *p);
extern void func_098C00(void *p);
extern float func_000530(Box *b);
extern void func_095F30(Box *b, int x, int y);
extern int func_095FF8(Box *b, float f);
extern void func_099C40(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_09CB00(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0AB2E0(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0ACEF0(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_099BB0(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_001E4410;
    z = 0.0f;
    func_096370(0xFFFFFFFF);
    func_09BD58(0x51B, 0);
    func_09C1A8(0x29, 0xFFFFFFFF, z);
    func_09BD58(0x51B, 1);
    func_09BE08(0x150, &r, z);
    func_097E90(func_095D20(&r), r.u6, func_10DFE0(0x2C4));
    func_09BE08(0x152, &r, z);
    func_097258(r.x, r.u6, func_10DFE0(0x2C5), 0.75f, 0.75f);
    func_09BE08(0x14F, &r, 0.0f);
    func_098148(0.75f, 0.75f, func_095D20(&r), r.u6, func_10DFE0(0x318));
    func_09BE08(0x149, &r, 0.0f);
    func_0987F8(r.u4, r.u6, func_10DFE0(0x1CA), 0.75f, 0.75f);
    if (func_024578(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0005D8(m->cnt);
            func_09BE08(0x147, &r, 0.0f);
            func_097E90(func_095D20(&r), func_095D50(&r), func_10DFE0(*p));
        }
    }
    e = (Entry *)func_0A8430(D_00276F90);
    if (e) {
        if (e->label) {
            D_00277038.v = func_10DFE0(e->label->name);
            if (D_001AD05C != e) {
                func_098BC8(&D_00277038);
                D_001AD05C = e;
            }
            func_098C00(&D_00277038);
        }
        if (e->box) {
            box = *e->box;
            D_001AC054 = (int)((func_000530(&box) + 0.001f) * 100.0f);
        }
    }
    func_096380(0);
    func_0A8488(D_00276F90);
    func_096380(1);
    func_09BE08(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_099BB0(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_095F30(&box, 2, 2);
    box.w = func_095FF8(&box, (float)D_001AC054 / 100.0f);
    func_099C40(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_09BE08(0x146, &r, 0.0f);
    sprintf(buf, func_10DFE0(0x2B3), D_001AC054);
    func_096370(0xFF000000);
    func_097258(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_096370(0xFFFFFFFF);
    func_097258(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_09CB00(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0AB2E0(D_001AD058, -0.09f);
}
