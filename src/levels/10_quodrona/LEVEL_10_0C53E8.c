/* LEVEL_10:0x0C53E8 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_003326C0[];
extern char D_003327C0[];
extern Label D_00332768;
extern int D_002093A0;
extern void func_0AFBC0(int a, unsigned int b, float f);
extern void func_0AF820(int id, Rc *out, float f);
extern int func_0A9798(Rc *r);
extern void func_0AB8A8(short a, short b, int c);
extern int func_130310(int a);
extern void func_0AC210(short a, short b, int c, float f, float g);
extern void func_0AAC70(short a, short b, int c, float f, float g);
extern void func_0A9DC8(int a);
extern void func_0BB7A8(void *a);
extern int func_0BB750(void *a);
extern int func_026CE8(int a, int b);
extern Rec *func_000660(int a);
extern char *func_130218(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AC5E0(Label *l);
extern void func_0AC618(Label *l);

void func_0C53E8(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0AFBC0(0x34, 0xFFFFFFFF, 0.0f);
    func_0AF820(0x1FC, &r, 0.0f);
    func_0AB8A8(func_0A9798(&r), r.c, func_130310(0x2C7));
    func_0AF820(0x1FD, &r, 0.0f);
    func_0AC210(r.b, r.c, func_130310(0x1CA), 0.9f, 0.9f);
    func_0AF820(0x1F8, &r, 0.0f);
    func_0AAC70(r.a, r.c, func_130310(0x2CA), 0.9f, 0.9f);
    func_0A9DC8(0);
    func_0BB7A8(D_003326C0);
    func_0A9DC8(1);
    s = func_0BB750(D_003326C0);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_000660(func_026CE8(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_003327C0, func_130218(sp->id), func_130310(q->first));
            D_00332768.text = D_003327C0;
        } else {
            D_00332768.text = func_130218(sp->id);
        }
    } else {
        D_00332768.text = func_130218(sp->id);
    }
    if (D_002093A0 != s) {
        func_0AC5E0(&D_00332768);
        D_002093A0 = s;
    }
    func_0AC618(&D_00332768);
}
