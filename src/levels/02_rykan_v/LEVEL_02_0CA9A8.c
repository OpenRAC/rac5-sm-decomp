/* LEVEL_02:0x0CA9A8 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_003407C0[];
extern char D_003408C0[];
extern Label D_00340868;
extern int D_00215360;
extern void func_0B53B8(int a, unsigned int b, float f);
extern void func_0B5018(int id, Rc *out, float f);
extern int func_0AEF90(Rc *r);
extern void func_0B10A0(short a, short b, int c);
extern int func_138860(int a);
extern void func_0B1A08(short a, short b, int c, float f, float g);
extern void func_0B0468(short a, short b, int c, float f, float g);
extern void func_0AF5C0(int a);
extern void func_0C0D70(void *a);
extern int func_0C0D18(void *a);
extern int func_027BF0(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_138768(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B1DD8(Label *l);
extern void func_0B1E10(Label *l);

void func_0CA9A8(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0B53B8(0x34, 0xFFFFFFFF, 0.0f);
    func_0B5018(0x1FC, &r, 0.0f);
    func_0B10A0(func_0AEF90(&r), r.c, func_138860(0x2C7));
    func_0B5018(0x1FD, &r, 0.0f);
    func_0B1A08(r.b, r.c, func_138860(0x1CA), 0.9f, 0.9f);
    func_0B5018(0x1F8, &r, 0.0f);
    func_0B0468(r.a, r.c, func_138860(0x2CA), 0.9f, 0.9f);
    func_0AF5C0(0);
    func_0C0D70(D_003407C0);
    func_0AF5C0(1);
    s = func_0C0D18(D_003407C0);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_027BF0(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_003408C0, func_138768(sp->id), func_138860(q->first));
            D_00340868.text = D_003408C0;
        } else {
            D_00340868.text = func_138768(sp->id);
        }
    } else {
        D_00340868.text = func_138768(sp->id);
    }
    if (D_00215360 != s) {
        func_0B1DD8(&D_00340868);
        D_00215360 = s;
    }
    func_0B1E10(&D_00340868);
}
