/* LEVEL_08:0x0C99B0 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_002843D0;
extern char D_00377F50[];
extern Slot D_00377FF8;
extern Entry *D_00246A1C;
extern int D_00245A14;
extern float D_00246A18;

extern void func_0B6DE8(short x, short y, short w, short h, unsigned int c);
extern void func_0B35D8(unsigned int c);
extern void func_0B8F90(int id, int f);
extern void func_0B93E0(int a, unsigned int b, float c);
extern void func_0B9040(int a, R *r, float c);
extern int func_0B2F78(R *r);
extern int func_0B2FA8(R *r);
extern void func_0B50C8(short a, short b, int c);
extern int func_1439E8(int a);
extern void func_0B5A30(short a, short b, int c, float d, float e);
extern void func_0B4490(short a, short b, int c, float d, float e);
extern void func_0B5380(float d, float e, short a, short b, int c);
extern int func_027B50(int a, int b);
extern int *func_0008D0(int a);
extern int func_0C52F8(void *p);
extern void func_0C5350(void *p);
extern void func_0B35E8(int a);
extern void func_0B5E00(void *p);
extern void func_0B5E38(void *p);
extern float func_0007F0(Box *b);
extern void func_0B3158(Box *b, int x, int y);
extern int func_0B3260(Box *b, float f);
extern void func_0B6E78(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_0B9D38(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0C7DA0(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0C99B0(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_0B6DE8(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_002843D0;
    z = 0.0f;
    func_0B35D8(0xFFFFFFFF);
    func_0B8F90(0x51B, 0);
    func_0B93E0(0x29, 0xFFFFFFFF, z);
    func_0B8F90(0x51B, 1);
    func_0B9040(0x150, &r, z);
    func_0B50C8(func_0B2F78(&r), r.u6, func_1439E8(0x2C4));
    func_0B9040(0x152, &r, z);
    func_0B4490(r.x, r.u6, func_1439E8(0x2C5), 0.75f, 0.75f);
    func_0B9040(0x14F, &r, 0.0f);
    func_0B5380(0.75f, 0.75f, func_0B2F78(&r), r.u6, func_1439E8(0x318));
    func_0B9040(0x149, &r, 0.0f);
    func_0B5A30(r.u4, r.u6, func_1439E8(0x1CA), 0.75f, 0.75f);
    if (func_027B50(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0008D0(m->cnt);
            func_0B9040(0x147, &r, 0.0f);
            func_0B50C8(func_0B2F78(&r), func_0B2FA8(&r), func_1439E8(*p));
        }
    }
    e = (Entry *)func_0C52F8(D_00377F50);
    if (e) {
        if (e->label) {
            D_00377FF8.v = func_1439E8(e->label->name);
            if (D_00246A1C != e) {
                func_0B5E00(&D_00377FF8);
                D_00246A1C = e;
            }
            func_0B5E38(&D_00377FF8);
        }
        if (e->box) {
            box = *e->box;
            D_00245A14 = (int)((func_0007F0(&box) + 0.001f) * 100.0f);
        }
    }
    func_0B35E8(0);
    func_0C5350(D_00377F50);
    func_0B35E8(1);
    func_0B9040(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_0B6DE8(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0B3158(&box, 2, 2);
    box.w = func_0B3260(&box, (float)D_00245A14 / 100.0f);
    func_0B6E78(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_0B9040(0x146, &r, 0.0f);
    sprintf(buf, func_1439E8(0x2B3), D_00245A14);
    func_0B35D8(0xFF000000);
    func_0B4490(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0B35D8(0xFFFFFFFF);
    func_0B4490(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_0B9D38(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0C7DA0(D_00246A18, -0.09f);
}
