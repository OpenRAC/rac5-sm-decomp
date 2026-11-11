/* LEVEL_03:0x0BE870 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_0024FFC0;
extern char D_00343B50[];
extern Slot D_00343BF8;
extern Entry *D_002161DC;
extern int D_002151D4;
extern float D_002161D8;

extern void func_0AC230(short x, short y, short w, short h, unsigned int c);
extern void func_0A8A20(unsigned int c);
extern void func_0AE3D8(int id, int f);
extern void func_0AE828(int a, unsigned int b, float c);
extern void func_0AE488(int a, R *r, float c);
extern int func_0A8400(R *r);
extern int func_0A8430(R *r);
extern void func_0AA510(short a, short b, int c);
extern int func_130878(int a);
extern void func_0AAE78(short a, short b, int c, float d, float e);
extern void func_0A98D8(short a, short b, int c, float d, float e);
extern void func_0AA7C8(float d, float e, short a, short b, int c);
extern int func_027408(int a, int b);
extern int *func_0008D0(int a);
extern int func_0BA1F0(void *p);
extern void func_0BA248(void *p);
extern void func_0A8A30(int a);
extern void func_0AB248(void *p);
extern void func_0AB280(void *p);
extern float func_0007F0(Box *b);
extern void func_0A85E0(Box *b, int x, int y);
extern int func_0A86A8(Box *b, float f);
extern void func_0AC2C0(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0AF180(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0BCC60(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0BE870(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0AC230(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_0024FFC0;
    z = 0.0f;
    func_0A8A20(0xFFFFFFFF);
    func_0AE3D8(0x51B, 0);
    func_0AE828(0x29, 0xFFFFFFFF, z);
    func_0AE3D8(0x51B, 1);
    func_0AE488(0x150, &r, z);
    func_0AA510(func_0A8400(&r), r.u6, func_130878(0x2C4));
    func_0AE488(0x152, &r, z);
    func_0A98D8(r.x, r.u6, func_130878(0x2C5), 0.75f, 0.75f);
    func_0AE488(0x14F, &r, 0.0f);
    func_0AA7C8(0.75f, 0.75f, func_0A8400(&r), r.u6, func_130878(0x318));
    func_0AE488(0x149, &r, 0.0f);
    func_0AAE78(r.u4, r.u6, func_130878(0x1CA), 0.75f, 0.75f);
    if (func_027408(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0AE488(0x147, &r, 0.0f);
            func_0AA510(func_0A8400(&r), func_0A8430(&r), func_130878(*p));
        }
    }
    e = (Entry *)func_0BA1F0(D_00343B50);
    if (e) {
        if (e->label) {
            D_00343BF8.v = func_130878(e->label->name);
            if (D_002161DC != e) {
                func_0AB248(&D_00343BF8);
                D_002161DC = e;
            }
            func_0AB280(&D_00343BF8);
        }
        if (e->box) {
            box = *e->box;
            D_002151D4 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_0A8A30(0);
    func_0BA248(D_00343B50);
    func_0A8A30(1);
    func_0AE488(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0AC230(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0A85E0(&box, 2, 2);
    box.w = func_0A86A8(&box, (float)D_002151D4 / 100.0f);
    func_0AC2C0(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0AE488(0x146, &r, 0.0f);
    sprintf(buf, func_130878(0x2B3), D_002151D4);
    func_0A8A20(0xFF000000);
    func_0A98D8(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0A8A20(0xFFFFFFFF);
    func_0A98D8(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0AF180(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0BCC60(D_002161D8, -0.09f);
}
