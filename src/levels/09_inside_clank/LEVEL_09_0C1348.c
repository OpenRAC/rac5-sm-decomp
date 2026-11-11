/* LEVEL_09:0x0C1348 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00310A40[];
extern char D_00310B40[];
extern Label D_00310AE8;
extern int D_001EA1A0;
extern void func_0ABD58(int a, unsigned int b, float f);
extern void func_0AB9B8(int id, Rc *out, float f);
extern int func_0A5930(Rc *r);
extern void func_0A7A40(short a, short b, int c);
extern int func_12B448(int a);
extern void func_0A83A8(short a, short b, int c, float f, float g);
extern void func_0A6E08(short a, short b, int c, float f, float g);
extern void func_0A5F60(int a);
extern void func_0B7710(void *a);
extern int func_0B76B8(void *a);
extern int func_026410(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_12B350(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A8778(Label *l);
extern void func_0A87B0(Label *l);

void func_0C1348(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0ABD58(0x34, 0xFFFFFFFF, 0.0f);
    func_0AB9B8(0x1FC, &r, 0.0f);
    func_0A7A40(func_0A5930(&r), r.c, func_12B448(0x2C7));
    func_0AB9B8(0x1FD, &r, 0.0f);
    func_0A83A8(r.b, r.c, func_12B448(0x1CA), 0.9f, 0.9f);
    func_0AB9B8(0x1F8, &r, 0.0f);
    func_0A6E08(r.a, r.c, func_12B448(0x2CA), 0.9f, 0.9f);
    func_0A5F60(0);
    func_0B7710(D_00310A40);
    func_0A5F60(1);
    s = func_0B76B8(D_00310A40);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_026410(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00310B40, func_12B350(sp->id), func_12B448(q->first));
            D_00310AE8.text = D_00310B40;
        } else {
            D_00310AE8.text = func_12B350(sp->id);
        }
    } else {
        D_00310AE8.text = func_12B350(sp->id);
    }
    if (D_001EA1A0 != s) {
        func_0A8778(&D_00310AE8);
        D_001EA1A0 = s;
    }
    func_0A87B0(&D_00310AE8);
}
