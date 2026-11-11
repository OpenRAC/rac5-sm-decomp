/* LEVEL_19:0x0AD7F0 -- placement copy of LEVEL_01_0BEA88.c: draws a menu screen: labels, the selected entry's name and a value bar with a percentage readout. */
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

extern Menu D_001E4210;
extern char D_00276D90[];
extern Slot D_00276E38;
extern Entry *D_001ACD5C;
extern int D_001ABD54;
extern float D_001ACD58;

extern void func_09A430(short x, short y, short w, short h, unsigned int c);
extern void func_096BF0(unsigned int c);
extern void func_09C5D8(int id, int f);
extern void func_09CA28(int a, unsigned int b, float c);
extern void func_09C688(int a, R *r, float c);
extern int func_0965A0(R *r);
extern int func_0965D0(R *r);
extern void func_098710(short a, short b, int c);
extern int func_10F9D0(int a);
extern void func_099078(short a, short b, int c, float d, float e);
extern void func_097AD8(short a, short b, int c, float d, float e);
extern void func_0989C8(float d, float e, short a, short b, int c);
extern int func_024B70(int a, int b);
extern int *func_0005D8(int a);
extern int func_0A8D30(void *p);
extern void func_0A8D88(void *p);
extern void func_096C00(int a);
extern void func_099448(void *p);
extern void func_099480(void *p);
extern float func_000530(Box *b);
extern void func_0967B0(Box *b, int x, int y);
extern int func_096878(Box *b, float f);
extern void func_09A4C0(short a, short b, short c, short d, unsigned int c0, unsigned int c1, unsigned int c2,
                        unsigned int c3, float f0, float f1, float f2);
extern void func_09D380(int a, int b, int c, int d, unsigned int e, float f0, float f1, float f2, float f3);
extern void func_0ABBE0(float a, float b);
extern int sprintf(char *buf, int fmt, ...);

void func_0AD7F0(void)
{
    R r;
    Box box;
    char buf[128];
    Entry *e;
    int *p;
    Menu *m;
    float z;

    func_09A430(0, 0, 0x1E0, 0x110, 0xFF100000);
    m = &D_001E4210;
    z = 0.0f;
    func_096BF0(0xFFFFFFFF);
    func_09C5D8(0x51B, 0);
    func_09CA28(0x29, 0xFFFFFFFF, z);
    func_09C5D8(0x51B, 1);
    func_09C688(0x150, &r, z);
    func_098710(func_0965A0(&r), r.u6, func_10F9D0(0x2C4));
    func_09C688(0x152, &r, z);
    func_097AD8(r.x, r.u6, func_10F9D0(0x2C5), 0.75f, 0.75f);
    func_09C688(0x14F, &r, 0.0f);
    func_0989C8(0.75f, 0.75f, func_0965A0(&r), r.u6, func_10F9D0(0x318));
    func_09C688(0x149, &r, 0.0f);
    func_099078(r.u4, r.u6, func_10F9D0(0x1CA), 0.75f, 0.75f);
    if (func_024B70(0x82, (unsigned char)(m->cnt - 1))) {
        if (m->cnt != 0) {
            p = func_0005D8(m->cnt);
            func_09C688(0x147, &r, 0.0f);
            func_098710(func_0965A0(&r), func_0965D0(&r), func_10F9D0(*p));
        }
    }
    e = (Entry *)func_0A8D30(D_00276D90);
    if (e) {
        if (e->label) {
            D_00276E38.v = func_10F9D0(e->label->name);
            if (D_001ACD5C != e) {
                func_099448(&D_00276E38);
                D_001ACD5C = e;
            }
            func_099480(&D_00276E38);
        }
        if (e->box) {
            box = *e->box;
            D_001ABD54 = (int)((func_000530(&box) + 0.001f) * 100.0f);
        }
    }
    func_096C00(0);
    func_0A8D88(D_00276D90);
    func_096C00(1);
    func_09C688(0x145, &r, 0.0f);
    *(R *)&box = r;
    func_09A430(r.x, r.u2, r.u4, r.u6, 0xFF000000);
    func_0967B0(&box, 2, 2);
    box.w = func_096878(&box, (float)D_001ABD54 / 100.0f);
    func_09A4C0(r.x, r.u2, box.w, r.u6, 0xFF09A5D0, 0xFF1C35FF, 0xFF09A5D0, 0xFF1C35FF, 1.0f, 1.0f, 0.0f);
    func_09C688(0x146, &r, 0.0f);
    sprintf(buf, func_10F9D0(0x2B3), D_001ABD54);
    func_096BF0(0xFF000000);
    func_097AD8(r.x + 1, r.u6 - 2, (int)buf, 0.75f, 0.75f);
    func_096BF0(0xFFFFFFFF);
    func_097AD8(r.x, r.u6 - 3, (int)buf, 0.75f, 0.75f);
    func_09D380(0x522, 0, 0, 0, 0xFFFFFFFF, 1.0f, 1.0f, 0.0f, 0.0f);
    func_0ABBE0(D_001ACD58, -0.09f);
}
