/* LEVEL_24:0x0BD960 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_002F5180[];
extern char D_002F5280[];
extern Label D_002F5228;
extern int D_001D1020;
extern void func_0A8320(int a, unsigned int b, float f);
extern void func_0A7F80(int id, Rc *out, float f);
extern int func_0A1EF8(Rc *r);
extern void func_0A4008(short a, short b, int c);
extern int func_127FB0(int a);
extern void func_0A4970(short a, short b, int c, float f, float g);
extern void func_0A33D0(short a, short b, int c, float f, float g);
extern void func_0A2528(int a);
extern void func_0B3CF0(void *a);
extern int func_0B3C98(void *a);
extern int func_024D38(int a, int b);
extern Rec *func_0006D8(int a);
extern char *func_127EB8(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A4D40(Label *l);
extern void func_0A4D78(Label *l);

void func_0BD960(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0A8320(0x34, 0xFFFFFFFF, 0.0f);
    func_0A7F80(0x1FC, &r, 0.0f);
    func_0A4008(func_0A1EF8(&r), r.c, func_127FB0(0x2C7));
    func_0A7F80(0x1FD, &r, 0.0f);
    func_0A4970(r.b, r.c, func_127FB0(0x1CA), 0.9f, 0.9f);
    func_0A7F80(0x1F8, &r, 0.0f);
    func_0A33D0(r.a, r.c, func_127FB0(0x2CA), 0.9f, 0.9f);
    func_0A2528(0);
    func_0B3CF0(D_002F5180);
    func_0A2528(1);
    s = func_0B3C98(D_002F5180);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0006D8(func_024D38(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_002F5280, func_127EB8(sp->id), func_127FB0(q->first));
            D_002F5228.text = D_002F5280;
        } else {
            D_002F5228.text = func_127EB8(sp->id);
        }
    } else {
        D_002F5228.text = func_127EB8(sp->id);
    }
    if (D_001D1020 != s) {
        func_0A4D40(&D_002F5228);
        D_001D1020 = s;
    }
    func_0A4D78(&D_002F5228);
}
