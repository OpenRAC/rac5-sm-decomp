/* LEVEL_15:0x09F0D0 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_0017D2C0;
extern char D_00240510[];
extern Slot D_002405B8;
extern Entry *D_001527DC;
extern int D_001517D4;
extern float D_001527D8;

extern void func_08CD78(short x, short y, short w, short h, unsigned int c);
extern void func_089568(unsigned int c);
extern void func_08EF20(int id, int f);
extern void func_08F370(int a, unsigned int b, float c);
extern void func_08EFD0(int a, R *r, float c);
extern int func_088F48(R *r);
extern int func_088F78(R *r);
extern void func_08B058(short a, short b, int c);
extern int func_0F1378(int a);
extern void func_08B9C0(short a, short b, int c, float d, float e);
extern void func_08A420(short a, short b, int c, float d, float e);
extern void func_08B310(float d, float e, short a, short b, int c);
extern int func_021518(int a, int b);
extern int *func_000680(int a);
extern int func_09AA50(void *p);
extern void func_09AAA8(void *p);
extern void func_089578(int a);
extern void func_08BD90(void *p);
extern void func_08BDC8(void *p);
extern float func_0005D8(Box *b);
extern void func_089128(Box *b, int x, int y);
extern int func_0891F0(Box *b, float f);
extern void func_08CE08(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_08FCC8(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_09D4C0(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_09F0D0(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_08CD78(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_0017D2C0;
    z = 0.0f;
    func_089568(0xFFFFFFFF);
    func_08EF20(0x51B, 0);
    func_08F370(0x29, 0xFFFFFFFF, z);
    func_08EF20(0x51B, 1);
    func_08EFD0(0x150, &r, z);
    func_08B058(func_088F48(&r), r.u6, func_0F1378(0x2C4));
    func_08EFD0(0x152, &r, z);
    func_08A420(r.x, r.u6, func_0F1378(0x2C5), 0.75f, 0.75f);
    func_08EFD0(0x14F, &r, 0.0f);
    func_08B310(0.75f, 0.75f, func_088F48(&r), r.u6, func_0F1378(0x318));
    func_08EFD0(0x149, &r, 0.0f);
    func_08B9C0(r.u4, r.u6, func_0F1378(0x1CA), 0.75f, 0.75f);
    if (func_021518(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_000680(m->cnt);
            func_08EFD0(0x147, &r, 0.0f);
            func_08B058(func_088F48(&r), func_088F78(&r), func_0F1378(*p));
        }
    }
    e = (Entry *)func_09AA50(D_00240510);
    if (e) {
        if (e->label) {
            D_002405B8.v = func_0F1378(e->label->name);
            if (D_001527DC != e) {
                func_08BD90(&D_002405B8);
                D_001527DC = e;
            }
            func_08BDC8(&D_002405B8);
        }
        if (e->box) {
            box = *e->box;
            D_001517D4 = (int)((func_0005D8(&box) + 0.001f) * 100.0f);
        }
    }
    func_089578(0);
    func_09AAA8(D_00240510);
    func_089578(1);
    func_08EFD0(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_08CD78(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_089128(&box, 2, 2);
    box.w = func_0891F0(&box, (float)D_001517D4 / 100.0f);
    func_08CE08(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_08EFD0(0x146, &r, 0.0f);
    sprintf(buf, func_0F1378(0x2B3), D_001517D4);
    func_089568(0xFF000000);
    func_08A420(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_089568(0xFFFFFFFF);
    func_08A420(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_08FCC8(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_09D4C0(D_001527D8, -0.09f);
}
