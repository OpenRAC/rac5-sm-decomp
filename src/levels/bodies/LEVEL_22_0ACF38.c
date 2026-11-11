/* LEVEL_22:0x0ACF38 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_00186D40;
extern char D_0027E890[];
extern Slot D_0027E938;
extern Entry *D_0015CEDC;
extern int D_0015BED4;
extern float D_0015CED8;

extern void func_09AAC0(short x, short y, short w, short h, unsigned int c);
extern void func_0972B0(unsigned int c);
extern void func_09CC68(int id, int f);
extern void func_09D0B8(int a, unsigned int b, float c);
extern void func_09CD18(int a, R *r, float c);
extern int func_096C90(R *r);
extern int func_096CC0(R *r);
extern void func_098DA0(short a, short b, int c);
extern int func_109980(int a);
extern void func_099708(short a, short b, int c, float d, float e);
extern void func_098168(short a, short b, int c, float d, float e);
extern void func_099058(float d, float e, short a, short b, int c);
extern int func_021EB8(int a, int b);
extern int *func_0006D8(int a);
extern int func_0A88B0(void *p);
extern void func_0A8908(void *p);
extern void func_0972C0(int a);
extern void func_099AD8(void *p);
extern void func_099B10(void *p);
extern float func_000630(Box *b);
extern void func_096E70(Box *b, int x, int y);
extern int func_096F38(Box *b, float f);
extern void func_09AB50(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_09DA10(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0AB328(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0ACF38(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_09AAC0(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_00186D40;
    z = 0.0f;
    func_0972B0(0xFFFFFFFF);
    func_09CC68(0x51B, 0);
    func_09D0B8(0x29, 0xFFFFFFFF, z);
    func_09CC68(0x51B, 1);
    func_09CD18(0x150, &r, z);
    func_098DA0(func_096C90(&r), r.u6, func_109980(0x2C4));
    func_09CD18(0x152, &r, z);
    func_098168(r.x, r.u6, func_109980(0x2C5), 0.75f, 0.75f);
    func_09CD18(0x14F, &r, 0.0f);
    func_099058(0.75f, 0.75f, func_096C90(&r), r.u6, func_109980(0x318));
    func_09CD18(0x149, &r, 0.0f);
    func_099708(r.u4, r.u6, func_109980(0x1CA), 0.75f, 0.75f);
    if (func_021EB8(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0006D8(m->cnt);
            func_09CD18(0x147, &r, 0.0f);
            func_098DA0(func_096C90(&r), func_096CC0(&r), func_109980(*p));
        }
    }
    e = (Entry *)func_0A88B0(D_0027E890);
    if (e) {
        if (e->label) {
            D_0027E938.v = func_109980(e->label->name);
            if (D_0015CEDC != e) {
                func_099AD8(&D_0027E938);
                D_0015CEDC = e;
            }
            func_099B10(&D_0027E938);
        }
        if (e->box) {
            box = *e->box;
            D_0015BED4 = (int)((func_000630(&box) + 0.001f) * 100.0f);
        }
    }
    func_0972C0(0);
    func_0A8908(D_0027E890);
    func_0972C0(1);
    func_09CD18(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_09AAC0(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_096E70(&box, 2, 2);
    box.w = func_096F38(&box, (float)D_0015BED4 / 100.0f);
    func_09AB50(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_09CD18(0x146, &r, 0.0f);
    sprintf(buf, func_109980(0x2B3), D_0015BED4);
    func_0972B0(0xFF000000);
    func_098168(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_0972B0(0xFFFFFFFF);
    func_098168(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_09DA10(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0AB328(D_0015CED8, -0.09f);
}
