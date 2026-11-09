/* LEVEL_01:0x0C4098 -- lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_003292C0[];
extern char D_003293C0[];
extern Label D_00329368;
extern int D_002003A0;
extern void func_0AEAA8(int a, unsigned int b, float f);
extern void func_0AE708(int id, Rc *out, float f);
extern int func_0A8680(Rc *r);
extern void func_0AA790(short a, short b, int c);
extern int func_1324B0(int a);
extern void func_0AB0F8(short a, short b, int c, float f, float g);
extern void func_0A9B58(short a, short b, int c, float f, float g);
extern void func_0A8CB0(int a);
extern void func_0BA460(void *a);
extern int func_0BA408(void *a);
extern int func_027408(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_1323B8(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AB4C8(Label *l);
extern void func_0AB500(Label *l);

void func_0C4098(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0AEAA8(0x34, 0xFFFFFFFF, 0.0f);
    func_0AE708(0x1FC, &r, 0.0f);
    func_0AA790(func_0A8680(&r), r.c, func_1324B0(0x2C7));
    func_0AE708(0x1FD, &r, 0.0f);
    func_0AB0F8(r.b, r.c, func_1324B0(0x1CA), 0.9f, 0.9f);
    func_0AE708(0x1F8, &r, 0.0f);
    func_0A9B58(r.a, r.c, func_1324B0(0x2CA), 0.9f, 0.9f);
    func_0A8CB0(0);
    func_0BA460(D_003292C0);
    func_0A8CB0(1);
    s = func_0BA408(D_003292C0);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_027408(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_003293C0, func_1323B8(sp->id), func_1324B0(q->first));
            D_00329368.text = D_003293C0;
        } else {
            D_00329368.text = func_1323B8(sp->id);
        }
    } else {
        D_00329368.text = func_1323B8(sp->id);
    }
    if (D_002003A0 != s) {
        func_0AB4C8(&D_00329368);
        D_002003A0 = s;
    }
    func_0AB500(&D_00329368);
}
