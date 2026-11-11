/* LEVEL_05:0x0C2640 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00315180[];
extern char D_00315280[];
extern Label D_00315228;
extern int D_001EF720;
extern void func_0AD068(int a, unsigned int b, float f);
extern void func_0ACCC8(int id, Rc *out, float f);
extern int func_0A6C40(Rc *r);
extern void func_0A8D50(short a, short b, int c);
extern int func_12DE28(int a);
extern void func_0A96B8(short a, short b, int c, float f, float g);
extern void func_0A8118(short a, short b, int c, float f, float g);
extern void func_0A7270(int a);
extern void func_0B8A08(void *a);
extern int func_0B89B0(void *a);
extern int func_026148(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_12DD30(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A9A88(Label *l);
extern void func_0A9AC0(Label *l);

void func_0C2640(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0AD068(0x34, 0xFFFFFFFF, 0.0f);
    func_0ACCC8(0x1FC, &r, 0.0f);
    func_0A8D50(func_0A6C40(&r), r.c, func_12DE28(0x2C7));
    func_0ACCC8(0x1FD, &r, 0.0f);
    func_0A96B8(r.b, r.c, func_12DE28(0x1CA), 0.9f, 0.9f);
    func_0ACCC8(0x1F8, &r, 0.0f);
    func_0A8118(r.a, r.c, func_12DE28(0x2CA), 0.9f, 0.9f);
    func_0A7270(0);
    func_0B8A08(D_00315180);
    func_0A7270(1);
    s = func_0B89B0(D_00315180);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_026148(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00315280, func_12DD30(sp->id), func_12DE28(q->first));
            D_00315228.text = D_00315280;
        } else {
            D_00315228.text = func_12DD30(sp->id);
        }
    } else {
        D_00315228.text = func_12DD30(sp->id);
    }
    if (D_001EF720 != s) {
        func_0A9A88(&D_00315228);
        D_001EF720 = s;
    }
    func_0A9AC0(&D_00315228);
}
