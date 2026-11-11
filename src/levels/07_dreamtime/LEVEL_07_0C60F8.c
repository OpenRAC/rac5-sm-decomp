/* LEVEL_07:0x0C60F8 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_0033EBC0[];
extern char D_0033ECC0[];
extern Label D_0033EC68;
extern int D_002146A0;
extern void func_0B0AA8(int a, unsigned int b, float f);
extern void func_0B0708(int id, Rc *out, float f);
extern int func_0AA680(Rc *r);
extern void func_0AC790(short a, short b, int c);
extern int func_1354B0(int a);
extern void func_0AD0F8(short a, short b, int c, float f, float g);
extern void func_0ABB58(short a, short b, int c, float f, float g);
extern void func_0AACB0(int a);
extern void func_0BC4C0(void *a);
extern int func_0BC468(void *a);
extern int func_027768(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_1353B8(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AD4C8(Label *l);
extern void func_0AD500(Label *l);

void func_0C60F8(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0B0AA8(0x34, 0xFFFFFFFF, 0.0f);
    func_0B0708(0x1FC, &r, 0.0f);
    func_0AC790(func_0AA680(&r), r.c, func_1354B0(0x2C7));
    func_0B0708(0x1FD, &r, 0.0f);
    func_0AD0F8(r.b, r.c, func_1354B0(0x1CA), 0.9f, 0.9f);
    func_0B0708(0x1F8, &r, 0.0f);
    func_0ABB58(r.a, r.c, func_1354B0(0x2CA), 0.9f, 0.9f);
    func_0AACB0(0);
    func_0BC4C0(D_0033EBC0);
    func_0AACB0(1);
    s = func_0BC468(D_0033EBC0);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_027768(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_0033ECC0, func_1353B8(sp->id), func_1354B0(q->first));
            D_0033EC68.text = D_0033ECC0;
        } else {
            D_0033EC68.text = func_1353B8(sp->id);
        }
    } else {
        D_0033EC68.text = func_1353B8(sp->id);
    }
    if (D_002146A0 != s) {
        func_0AD4C8(&D_0033EC68);
        D_002146A0 = s;
    }
    func_0AD500(&D_0033EC68);
}
