/* LEVEL_23:0x0BAE38 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_002FA700[];
extern char D_002FA800[];
extern Label D_002FA7A8;
extern int D_001D37A0;
extern void func_0A5818(int a, unsigned int b, float f);
extern void func_0A5478(int id, Rc *out, float f);
extern int func_09F3F0(Rc *r);
extern void func_0A1500(short a, short b, int c);
extern int func_123C28(int a);
extern void func_0A1E68(short a, short b, int c, float f, float g);
extern void func_0A08C8(short a, short b, int c, float f, float g);
extern void func_09FA20(int a);
extern void func_0B11F8(void *a);
extern int func_0B11A0(void *a);
extern int func_025160(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_123B30(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A2238(Label *l);
extern void func_0A2270(Label *l);

void func_0BAE38(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0A5818(0x34, 0xFFFFFFFF, 0.0f);
    func_0A5478(0x1FC, &r, 0.0f);
    func_0A1500(func_09F3F0(&r), r.c, func_123C28(0x2C7));
    func_0A5478(0x1FD, &r, 0.0f);
    func_0A1E68(r.b, r.c, func_123C28(0x1CA), 0.9f, 0.9f);
    func_0A5478(0x1F8, &r, 0.0f);
    func_0A08C8(r.a, r.c, func_123C28(0x2CA), 0.9f, 0.9f);
    func_09FA20(0);
    func_0B11F8(D_002FA700);
    func_09FA20(1);
    s = func_0B11A0(D_002FA700);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_025160(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_002FA800, func_123B30(sp->id), func_123C28(q->first));
            D_002FA7A8.text = D_002FA800;
        } else {
            D_002FA7A8.text = func_123B30(sp->id);
        }
    } else {
        D_002FA7A8.text = func_123B30(sp->id);
    }
    if (D_001D37A0 != s) {
        func_0A2238(&D_002FA7A8);
        D_001D37A0 = s;
    }
    func_0A2270(&D_002FA7A8);
}
