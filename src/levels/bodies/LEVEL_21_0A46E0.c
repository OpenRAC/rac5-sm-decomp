/* LEVEL_21:0x0A46E0 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00240B00[];
extern char D_00240C00[];
extern Label D_00240BA8;
extern int D_00155020;
extern void func_08F370(int a, unsigned int b, float f);
extern void func_08EFD0(int id, Rc *out, float f);
extern int func_088F48(Rc *r);
extern void func_08B058(short a, short b, int c);
extern int func_0F1378(int a);
extern void func_08B9C0(short a, short b, int c, float f, float g);
extern void func_08A420(short a, short b, int c, float f, float g);
extern void func_089578(int a);
extern void func_09AAA8(void *a);
extern int func_09AA50(void *a);
extern int func_0213F8(int a, int b);
extern Rec *func_000680(int a);
extern char *func_0F1280(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_08BD90(Label *l);
extern void func_08BDC8(Label *l);

void func_0A46E0(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_08F370(0x34, 0xFFFFFFFF, 0.0f);
    func_08EFD0(0x1FC, &r, 0.0f);
    func_08B058(func_088F48(&r), r.c, func_0F1378(0x2C7));
    func_08EFD0(0x1FD, &r, 0.0f);
    func_08B9C0(r.b, r.c, func_0F1378(0x1CA), 0.9f, 0.9f);
    func_08EFD0(0x1F8, &r, 0.0f);
    func_08A420(r.a, r.c, func_0F1378(0x2CA), 0.9f, 0.9f);
    func_089578(0);
    func_09AAA8(D_00240B00);
    func_089578(1);
    s = func_09AA50(D_00240B00);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_000680(func_0213F8(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00240C00, func_0F1280(sp->id), func_0F1378(q->first));
            D_00240BA8.text = D_00240C00;
        } else {
            D_00240BA8.text = func_0F1280(sp->id);
        }
    } else {
        D_00240BA8.text = func_0F1280(sp->id);
    }
    if (D_00155020 != s) {
        func_08BD90(&D_00240BA8);
        D_00155020 = s;
    }
    func_08BDC8(&D_00240BA8);
}
