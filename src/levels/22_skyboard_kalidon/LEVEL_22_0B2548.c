/* LEVEL_22:0x0B2548 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
typedef struct {
    short a;
    char pad2[6];
    unsigned short b;
    char padA[2];
    unsigned short c;
    char padE[2];
} Rc;
typedef struct {
    char pad0[0xD0];
    int id;
} Sel;
typedef struct {
    int first;
} Rec;
typedef struct {
    char pad0[0x14];
    char *text;
} Label;
extern char D_0027EE80[];
extern char D_0027EF80[];
extern Label D_0027EF28;
extern int D_0015F720;
extern void func_09D0B8(int a, unsigned int b, float f);
extern void func_09CD18(int id, Rc *out, float f);
extern int func_096C90(Rc *r);
extern void func_098DA0(short a, short b, int c);
extern int func_109980(int a);
extern void func_099708(short a, short b, int c, float f, float g);
extern void func_098168(short a, short b, int c, float f, float g);
extern void func_0972C0(int a);
extern void func_0A8908(void *a);
extern int func_0A88B0(void *a);
extern int func_021D98(int a, int b);
extern Rec *func_0006D8(int a);
extern char *func_109888(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_099AD8(Label *l);
extern void func_099B10(Label *l);

void func_0B2548(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_09D0B8(0x34, 0xFFFFFFFF, 0.0f);
    func_09CD18(0x1FC, &r, 0.0f);
    func_098DA0(func_096C90(&r), r.c, func_109980(0x2C7));
    func_09CD18(0x1FD, &r, 0.0f);
    func_099708(r.b, r.c, func_109980(0x1CA), 0.9f, 0.9f);
    func_09CD18(0x1F8, &r, 0.0f);
    func_098168(r.a, r.c, func_109980(0x2CA), 0.9f, 0.9f);
    func_0972C0(0);
    func_0A8908(D_0027EE80);
    func_0972C0(1);
    s = func_0A88B0(D_0027EE80);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0006D8(func_021D98(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_0027EF80, func_109888(sp->id), func_109980(q->first));
            D_0027EF28.text = D_0027EF80;
        } else {
            D_0027EF28.text = func_109888(sp->id);
        }
    } else {
        D_0027EF28.text = func_109888(sp->id);
    }
    if (D_0015F720 != s) {
        func_099AD8(&D_0027EF28);
        D_0015F720 = s;
    }
    func_099B10(&D_0027EF28);
}
