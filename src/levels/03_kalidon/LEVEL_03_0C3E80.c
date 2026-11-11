/* LEVEL_03:0x0C3E80 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00344140[];
extern char D_00344240[];
extern Label D_003441E8;
extern int D_00218A20;
extern void func_0AE828(int a, unsigned int b, float f);
extern void func_0AE488(int id, Rc *out, float f);
extern int func_0A8400(Rc *r);
extern void func_0AA510(short a, short b, int c);
extern int func_130878(int a);
extern void func_0AAE78(short a, short b, int c, float f, float g);
extern void func_0A98D8(short a, short b, int c, float f, float g);
extern void func_0A8A30(int a);
extern void func_0BA248(void *a);
extern int func_0BA1F0(void *a);
extern int func_0272E8(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_130780(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AB248(Label *l);
extern void func_0AB280(Label *l);

void func_0C3E80(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0AE828(0x34, 0xFFFFFFFF, 0.0f);
    func_0AE488(0x1FC, &r, 0.0f);
    func_0AA510(func_0A8400(&r), r.c, func_130878(0x2C7));
    func_0AE488(0x1FD, &r, 0.0f);
    func_0AAE78(r.b, r.c, func_130878(0x1CA), 0.9f, 0.9f);
    func_0AE488(0x1F8, &r, 0.0f);
    func_0A98D8(r.a, r.c, func_130878(0x2CA), 0.9f, 0.9f);
    func_0A8A30(0);
    func_0BA248(D_00344140);
    func_0A8A30(1);
    s = func_0BA1F0(D_00344140);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_0272E8(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00344240, func_130780(sp->id), func_130878(q->first));
            D_003441E8.text = D_00344240;
        } else {
            D_003441E8.text = func_130780(sp->id);
        }
    } else {
        D_003441E8.text = func_130780(sp->id);
    }
    if (D_00218A20 != s) {
        func_0AB248(&D_003441E8);
        D_00218A20 = s;
    }
    func_0AB280(&D_003441E8);
}
