/* LEVEL_16:0x0ADF18 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_001E4090;
extern char D_00276C10[];
extern Slot D_00276CB8;
extern Entry *D_001ABBDC;
extern int D_001AABD4;
extern float D_001ABBD8;

extern void func_09ABA0(short x, short y, short w, short h, unsigned int c);
extern void func_097360(unsigned int c);
extern void func_09CD48(int id, int f);
extern void func_09D198(int a, unsigned int b, float c);
extern void func_09CDF8(int a, R *r, float c);
extern int func_096D10(R *r);
extern int func_096D40(R *r);
extern void func_098E80(short a, short b, int c);
extern int func_10F330(int a);
extern void func_0997E8(short a, short b, int c, float d, float e);
extern void func_098248(short a, short b, int c, float d, float e);
extern void func_099138(float d, float e, short a, short b, int c);
extern int func_024FC8(int a, int b);
extern int *func_0005D8(int a);
extern int func_0A9458(void *p);
extern void func_0A94B0(void *p);
extern void func_097370(int a);
extern void func_099BB8(void *p);
extern void func_099BF0(void *p);
extern float func_000530(Box *b);
extern void func_096F20(Box *b, int x, int y);
extern int func_096FE8(Box *b, float f);
extern void func_09AC30(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_09DAF0(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0AC308(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0ADF18(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_09ABA0(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_001E4090;
    z = 0.0f;
    func_097360(0xFFFFFFFF);
    func_09CD48(0x51B, 0);
    func_09D198(0x29, 0xFFFFFFFF, z);
    func_09CD48(0x51B, 1);
    func_09CDF8(0x150, &r, z);
    func_098E80(func_096D10(&r), r.u6, func_10F330(0x2C4));
    func_09CDF8(0x152, &r, z);
    func_098248(r.x, r.u6, func_10F330(0x2C5), 0.75f, 0.75f);
    func_09CDF8(0x14F, &r, 0.0f);
    func_099138(0.75f, 0.75f, func_096D10(&r), r.u6, func_10F330(0x318));
    func_09CDF8(0x149, &r, 0.0f);
    func_0997E8(r.u4, r.u6, func_10F330(0x1CA), 0.75f, 0.75f);
    if (func_024FC8(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0005D8(m->cnt);
            func_09CDF8(0x147, &r, 0.0f);
            func_098E80(func_096D10(&r), func_096D40(&r), func_10F330(*p));
        }
    }
    e = (Entry *)func_0A9458(D_00276C10);
    if (e) {
        if (e->label) {
            D_00276CB8.v = func_10F330(e->label->name);
            if (D_001ABBDC != e) {
                func_099BB8(&D_00276CB8);
                D_001ABBDC = e;
            }
            func_099BF0(&D_00276CB8);
        }
        if (e->box) {
            box = *e->box;
            D_001AABD4 = (int)((func_000530(&box) + 0.001f) * 100.0f);
        }
    }
    func_097370(0);
    func_0A94B0(D_00276C10);
    func_097370(1);
    func_09CDF8(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_09ABA0(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_096F20(&box, 2, 2);
    box.w = func_096FE8(&box, (float)D_001AABD4 / 100.0f);
    func_09AC30(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_09CDF8(0x146, &r, 0.0f);
    sprintf(buf, func_10F330(0x2B3), D_001AABD4);
    func_097360(0xFF000000);
    func_098248(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_097360(0xFFFFFFFF);
    func_098248(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_09DAF0(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0AC308(D_001ABBD8, -0.09f);
}
