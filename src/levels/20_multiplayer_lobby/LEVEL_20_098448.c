/* LEVEL_20:0x098448 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_0013BA10;
extern char D_0019A450[];
extern Slot D_0019A4F8;
extern Entry *D_0010E2BC;
extern int D_0010D2B4;
extern float D_0010E2B8;

extern void func_085298(short x, short y, short w, short h, unsigned int c);
extern void func_081A58(unsigned int c);
extern void func_087440(int id, int f);
extern void func_087890(int a, unsigned int b, float c);
extern void func_0874F0(int a, R *r, float c);
extern int func_081408(R *r);
extern int func_081438(R *r);
extern void func_083578(short a, short b, int c);
extern int func_0E2118(int a);
extern void func_083EE0(short a, short b, int c, float d, float e);
extern void func_082940(short a, short b, int c, float d, float e);
extern void func_083830(float d, float e, short a, short b, int c);
extern int func_021B40(int a, int b);
extern int *func_0005D8(int a);
extern int func_093988(void *p);
extern void func_0939E0(void *p);
extern void func_081A68(int a);
extern void func_0842B0(void *p);
extern void func_0842E8(void *p);
extern float func_000530(Box *b);
extern void func_081618(Box *b, int x, int y);
extern int func_0816E0(Box *b, float f);
extern void func_085328(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0881E8(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_096838(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_098448(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_085298(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_0013BA10;
    z = 0.0f;
    func_081A58(0xFFFFFFFF);
    func_087440(0x51B, 0);
    func_087890(0x29, 0xFFFFFFFF, z);
    func_087440(0x51B, 1);
    func_0874F0(0x150, &r, z);
    func_083578(func_081408(&r), r.u6, func_0E2118(0x2C4));
    func_0874F0(0x152, &r, z);
    func_082940(r.x, r.u6, func_0E2118(0x2C5), 0.75f, 0.75f);
    func_0874F0(0x14F, &r, 0.0f);
    func_083830(0.75f, 0.75f, func_081408(&r), r.u6, func_0E2118(0x318));
    func_0874F0(0x149, &r, 0.0f);
    func_083EE0(r.u4, r.u6, func_0E2118(0x1CA), 0.75f, 0.75f);
    if (func_021B40(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0005D8(m->cnt);
            func_0874F0(0x147, &r, 0.0f);
            func_083578(func_081408(&r), func_081438(&r), func_0E2118(*p));
        }
    }
    e = (Entry *)func_093988(D_0019A450);
    if (e) {
        if (e->label) {
            D_0019A4F8.v = func_0E2118(e->label->name);
            if (D_0010E2BC != e) {
                func_0842B0(&D_0019A4F8);
                D_0010E2BC = e;
            }
            func_0842E8(&D_0019A4F8);
        }
        if (e->box) {
            box = *e->box;
            D_0010D2B4 = (int)((func_000530(&box) + 0.001f) * 100.0f);
        }
    }
    func_081A68(0);
    func_0939E0(D_0019A450);
    func_081A68(1);
    func_0874F0(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_085298(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_081618(&box, 2, 2);
    box.w = func_0816E0(&box, (float)D_0010D2B4 / 100.0f);
    func_085328(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0874F0(0x146, &r, 0.0f);
    sprintf(buf, func_0E2118(0x2B3), D_0010D2B4);
    func_081A58(0xFF000000);
    func_082940(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_081A58(0xFFFFFFFF);
    func_082940(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0881E8(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_096838(D_0010E2B8, -0.09f);
}
