/* LEVEL_06:0x0B9388 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_00221EC0;
extern char D_00315A50[];
extern Slot D_00315AF8;
extern Entry *D_001ECA5C;
extern int D_001EBA54;
extern float D_001ECA58;

extern void func_0A6C80(short x, short y, short w, short h, unsigned int c);
extern void func_0A3470(unsigned int c);
extern void func_0A8E28(int id, int f);
extern void func_0A9278(int a, unsigned int b, float c);
extern void func_0A8ED8(int a, R *r, float c);
extern int func_0A2E50(R *r);
extern int func_0A2E80(R *r);
extern void func_0A4F60(short a, short b, int c);
extern int func_128B80(int a);
extern void func_0A58C8(short a, short b, int c, float d, float e);
extern void func_0A4328(short a, short b, int c, float d, float e);
extern void func_0A5218(float d, float e, short a, short b, int c);
extern int func_0259D8(int a, int b);
extern int *func_0008D0(int a);
extern int func_0B4D08(void *p);
extern void func_0B4D60(void *p);
extern void func_0A3480(int a);
extern void func_0A5C98(void *p);
extern void func_0A5CD0(void *p);
extern float func_0007F0(Box *b);
extern void func_0A3030(Box *b, int x, int y);
extern int func_0A30F8(Box *b, float f);
extern void func_0A6D10(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0A9BD0(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0B7778(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0B9388(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0A6C80(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_00221EC0;
    z = 0.0f;
    func_0A3470(0xFFFFFFFF);
    func_0A8E28(0x51B, 0);
    func_0A9278(0x29, 0xFFFFFFFF, z);
    func_0A8E28(0x51B, 1);
    func_0A8ED8(0x150, &r, z);
    func_0A4F60(func_0A2E50(&r), r.u6, func_128B80(0x2C4));
    func_0A8ED8(0x152, &r, z);
    func_0A4328(r.x, r.u6, func_128B80(0x2C5), 0.75f, 0.75f);
    func_0A8ED8(0x14F, &r, 0.0f);
    func_0A5218(0.75f, 0.75f, func_0A2E50(&r), r.u6, func_128B80(0x318));
    func_0A8ED8(0x149, &r, 0.0f);
    func_0A58C8(r.u4, r.u6, func_128B80(0x1CA), 0.75f, 0.75f);
    if (func_0259D8(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0A8ED8(0x147, &r, 0.0f);
            func_0A4F60(func_0A2E50(&r), func_0A2E80(&r), func_128B80(*p));
        }
    }
    e = (Entry *)func_0B4D08(D_00315A50);
    if (e) {
        if (e->label) {
            D_00315AF8.v = func_128B80(e->label->name);
            if (D_001ECA5C != e) {
                func_0A5C98(&D_00315AF8);
                D_001ECA5C = e;
            }
            func_0A5CD0(&D_00315AF8);
        }
        if (e->box) {
            box = *e->box;
            D_001EBA54 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_0A3480(0);
    func_0B4D60(D_00315A50);
    func_0A3480(1);
    func_0A8ED8(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0A6C80(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0A3030(&box, 2, 2);
    box.w = func_0A30F8(&box, (float)D_001EBA54 / 100.0f);
    func_0A6D10(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0A8ED8(0x146, &r, 0.0f);
    sprintf(buf, func_128B80(0x2B3), D_001EBA54);
    func_0A3470(0xFF000000);
    func_0A4328(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0A3470(0xFFFFFFFF);
    func_0A4328(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0A9BD0(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0B7778(D_001ECA58, -0.09f);
}
