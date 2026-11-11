/* LEVEL_17:0x0B2A90 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00268500[];
extern char D_00268600[];
extern Label D_002685A8;
extern int D_001A1A18;
extern void func_09C690(int a, unsigned int b, float f);
extern void func_09C2F0(int id, Rc *out, float f);
extern int func_096208(Rc *r);
extern void func_098378(short a, short b, int c);
extern int func_10E8A8(int a);
extern void func_098CE0(short a, short b, int c, float f, float g);
extern void func_097740(short a, short b, int c, float f, float g);
extern void func_096868(int a);
extern void func_0A89F0(void *a);
extern int func_0A8998(void *a);
extern int func_024828(int a, int b);
extern Rec *func_0005D8(int a);
extern char *func_10E7B0(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0990B0(Label *l);
extern void func_0990E8(Label *l);

void func_0B2A90(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_09C690(0x34, 0xFFFFFFFF, 0.0f);
    func_09C2F0(0x1FC, &r, 0.0f);
    func_098378(func_096208(&r), r.c, func_10E8A8(0x2C7));
    func_09C2F0(0x1FD, &r, 0.0f);
    func_098CE0(r.b, r.c, func_10E8A8(0x1CA), 0.9f, 0.9f);
    func_09C2F0(0x1F8, &r, 0.0f);
    func_097740(r.a, r.c, func_10E8A8(0x2CA), 0.9f, 0.9f);
    func_096868(0);
    func_0A89F0(D_00268500);
    func_096868(1);
    s = func_0A8998(D_00268500);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0005D8(func_024828(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00268600, func_10E7B0(sp->id), func_10E8A8(q->first));
            D_002685A8.text = D_00268600;
        } else {
            D_002685A8.text = func_10E7B0(sp->id);
        }
    } else {
        D_002685A8.text = func_10E7B0(sp->id);
    }
    if (D_001A1A18 != s) {
        func_0990B0(&D_002685A8);
        D_001A1A18 = s;
    }
    func_0990E8(&D_002685A8);
}
