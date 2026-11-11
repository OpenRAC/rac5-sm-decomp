/* LEVEL_17:0x0AD458 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_001D5390;
extern char D_00267F10[];
extern Slot D_00267FB8;
extern Entry *D_0019F1DC;
extern int D_0019E1D4;
extern float D_0019F1D8;

extern void func_09A098(short x, short y, short w, short h, unsigned int c);
extern void func_096858(unsigned int c);
extern void func_09C240(int id, int f);
extern void func_09C690(int a, unsigned int b, float c);
extern void func_09C2F0(int a, R *r, float c);
extern int func_096208(R *r);
extern int func_096238(R *r);
extern void func_098378(short a, short b, int c);
extern int func_10E8A8(int a);
extern void func_098CE0(short a, short b, int c, float d, float e);
extern void func_097740(short a, short b, int c, float d, float e);
extern void func_098630(float d, float e, short a, short b, int c);
extern int func_024948(int a, int b);
extern int *func_0005D8(int a);
extern int func_0A8998(void *p);
extern void func_0A89F0(void *p);
extern void func_096868(int a);
extern void func_0990B0(void *p);
extern void func_0990E8(void *p);
extern float func_000530(Box *b);
extern void func_096418(Box *b, int x, int y);
extern int func_0964E0(Box *b, float f);
extern void func_09A128(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_09CFE8(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0AB848(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0AD458(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_09A098(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_001D5390;
    z = 0.0f;
    func_096858(0xFFFFFFFF);
    func_09C240(0x51B, 0);
    func_09C690(0x29, 0xFFFFFFFF, z);
    func_09C240(0x51B, 1);
    func_09C2F0(0x150, &r, z);
    func_098378(func_096208(&r), r.u6, func_10E8A8(0x2C4));
    func_09C2F0(0x152, &r, z);
    func_097740(r.x, r.u6, func_10E8A8(0x2C5), 0.75f, 0.75f);
    func_09C2F0(0x14F, &r, 0.0f);
    func_098630(0.75f, 0.75f, func_096208(&r), r.u6, func_10E8A8(0x318));
    func_09C2F0(0x149, &r, 0.0f);
    func_098CE0(r.u4, r.u6, func_10E8A8(0x1CA), 0.75f, 0.75f);
    if (func_024948(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0005D8(m->cnt);
            func_09C2F0(0x147, &r, 0.0f);
            func_098378(func_096208(&r), func_096238(&r), func_10E8A8(*p));
        }
    }
    e = (Entry *)func_0A8998(D_00267F10);
    if (e) {
        if (e->label) {
            D_00267FB8.v = func_10E8A8(e->label->name);
            if (D_0019F1DC != e) {
                func_0990B0(&D_00267FB8);
                D_0019F1DC = e;
            }
            func_0990E8(&D_00267FB8);
        }
        if (e->box) {
            box = *e->box;
            D_0019E1D4 = (int)((func_000530(&box) + 0.001f) * 100.0f);
        }
    }
    func_096868(0);
    func_0A89F0(D_00267F10);
    func_096868(1);
    func_09C2F0(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_09A098(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_096418(&box, 2, 2);
    box.w = func_0964E0(&box, (float)D_0019E1D4 / 100.0f);
    func_09A128(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_09C2F0(0x146, &r, 0.0f);
    sprintf(buf, func_10E8A8(0x2B3), D_0019E1D4);
    func_096858(0xFF000000);
    func_097740(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_096858(0xFFFFFFFF);
    func_097740(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_09CFE8(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0AB848(D_0019F1D8, -0.09f);
}
