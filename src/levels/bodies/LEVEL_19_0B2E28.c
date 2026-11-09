/* LEVEL_19:0x0B2E28 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00277380[];
extern char D_00277480[];
extern Label D_00277428;
extern int D_001AF598;
extern void func_09CA28(int a, unsigned int b, float f);
extern void func_09C688(int id, Rc *out, float f);
extern int func_0965A0(Rc *r);
extern void func_098710(short a, short b, int c);
extern int func_10F9D0(int a);
extern void func_099078(short a, short b, int c, float f, float g);
extern void func_097AD8(short a, short b, int c, float f, float g);
extern void func_096C00(int a);
extern void func_0A8D88(void *a);
extern int func_0A8D30(void *a);
extern int func_024A50(int a, int b);
extern Rec *func_0005D8(int a);
extern char *func_10F8D8(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_099448(Label *l);
extern void func_099480(Label *l);

void func_0B2E28(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_09CA28(0x34, 0xFFFFFFFF, 0.0f);
    func_09C688(0x1FC, &r, 0.0f);
    func_098710(func_0965A0(&r), r.c, func_10F9D0(0x2C7));
    func_09C688(0x1FD, &r, 0.0f);
    func_099078(r.b, r.c, func_10F9D0(0x1CA), 0.9f, 0.9f);
    func_09C688(0x1F8, &r, 0.0f);
    func_097AD8(r.a, r.c, func_10F9D0(0x2CA), 0.9f, 0.9f);
    func_096C00(0);
    func_0A8D88(D_00277380);
    func_096C00(1);
    s = func_0A8D30(D_00277380);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0005D8(func_024A50(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00277480, func_10F8D8(sp->id), func_10F9D0(q->first));
            D_00277428.text = D_00277480;
        } else {
            D_00277428.text = func_10F8D8(sp->id);
        }
    } else {
        D_00277428.text = func_10F8D8(sp->id);
    }
    if (D_001AF598 != s) {
        func_099448(&D_00277428);
        D_001AF598 = s;
    }
    func_099480(&D_00277428);
}
