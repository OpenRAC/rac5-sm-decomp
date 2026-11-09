/* LEVEL_08:0x0CEFC0 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00378540[];
extern char D_00378640[];
extern Label D_003785E8;
extern int D_00249260;
extern void func_0B93E0(int a, unsigned int b, float f);
extern void func_0B9040(int id, Rc *out, float f);
extern int func_0B2F78(Rc *r);
extern void func_0B50C8(short a, short b, int c);
extern int func_1439E8(int a);
extern void func_0B5A30(short a, short b, int c, float f, float g);
extern void func_0B4490(short a, short b, int c, float f, float g);
extern void func_0B35E8(int a);
extern void func_0C5350(void *a);
extern int func_0C52F8(void *a);
extern int func_027A30(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_1438F0(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B5E00(Label *l);
extern void func_0B5E38(Label *l);

void func_0CEFC0(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0B93E0(0x34, 0xFFFFFFFF, 0.0f);
    func_0B9040(0x1FC, &r, 0.0f);
    func_0B50C8(func_0B2F78(&r), r.c, func_1439E8(0x2C7));
    func_0B9040(0x1FD, &r, 0.0f);
    func_0B5A30(r.b, r.c, func_1439E8(0x1CA), 0.9f, 0.9f);
    func_0B9040(0x1F8, &r, 0.0f);
    func_0B4490(r.a, r.c, func_1439E8(0x2CA), 0.9f, 0.9f);
    func_0B35E8(0);
    func_0C5350(D_00378540);
    func_0B35E8(1);
    s = func_0C52F8(D_00378540);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_027A30(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00378640, func_1438F0(sp->id), func_1439E8(q->first));
            D_003785E8.text = D_00378640;
        } else {
            D_003785E8.text = func_1438F0(sp->id);
        }
    } else {
        D_003785E8.text = func_1438F0(sp->id);
    }
    if (D_00249260 != s) {
        func_0B5E00(&D_003785E8);
        D_00249260 = s;
    }
    func_0B5E38(&D_003785E8);
}
