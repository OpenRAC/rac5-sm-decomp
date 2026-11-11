/* LEVEL_18:0x0B2528 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00277580[];
extern char D_00277680[];
extern Label D_00277628;
extern int D_001AF898;
extern void func_09C1A8(int a, unsigned int b, float f);
extern void func_09BE08(int id, Rc *out, float f);
extern int func_095D20(Rc *r);
extern void func_097E90(short a, short b, int c);
extern int func_10DFE0(int a);
extern void func_0987F8(short a, short b, int c, float f, float g);
extern void func_097258(short a, short b, int c, float f, float g);
extern void func_096380(int a);
extern void func_0A8488(void *a);
extern int func_0A8430(void *a);
extern int func_024458(int a, int b);
extern Rec *func_0005D8(int a);
extern char *func_10DEE8(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_098BC8(Label *l);
extern void func_098C00(Label *l);

void func_0B2528(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_09C1A8(0x34, 0xFFFFFFFF, 0.0f);
    func_09BE08(0x1FC, &r, 0.0f);
    func_097E90(func_095D20(&r), r.c, func_10DFE0(0x2C7));
    func_09BE08(0x1FD, &r, 0.0f);
    func_0987F8(r.b, r.c, func_10DFE0(0x1CA), 0.9f, 0.9f);
    func_09BE08(0x1F8, &r, 0.0f);
    func_097258(r.a, r.c, func_10DFE0(0x2CA), 0.9f, 0.9f);
    func_096380(0);
    func_0A8488(D_00277580);
    func_096380(1);
    s = func_0A8430(D_00277580);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0005D8(func_024458(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00277680, func_10DEE8(sp->id), func_10DFE0(q->first));
            D_00277628.text = D_00277680;
        } else {
            D_00277628.text = func_10DEE8(sp->id);
        }
    } else {
        D_00277628.text = func_10DEE8(sp->id);
    }
    if (D_001AF898 != s) {
        func_098BC8(&D_00277628);
        D_001AF898 = s;
    }
    func_098C00(&D_00277628);
}
