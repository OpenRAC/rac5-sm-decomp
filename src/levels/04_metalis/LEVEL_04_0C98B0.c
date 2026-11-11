/* LEVEL_04:0x0C98B0 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00343AC0[];
extern char D_00343BC0[];
extern Label D_00343B68;
extern int D_00219860;
extern void func_0B3CF8(int a, unsigned int b, float f);
extern void func_0B3958(int id, Rc *out, float f);
extern int func_0AD890(Rc *r);
extern void func_0AF9E0(short a, short b, int c);
extern int func_13E930(int a);
extern void func_0B0348(short a, short b, int c, float f, float g);
extern void func_0AEDA8(short a, short b, int c, float f, float g);
extern void func_0ADF00(int a);
extern void func_0BFC40(void *a);
extern int func_0BFBE8(void *a);
extern int func_027098(int a, int b);
extern Rec *func_0006D8(int a);
extern char *func_13E838(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B0718(Label *l);
extern void func_0B0750(Label *l);

void func_0C98B0(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0B3CF8(0x34, 0xFFFFFFFF, 0.0f);
    func_0B3958(0x1FC, &r, 0.0f);
    func_0AF9E0(func_0AD890(&r), r.c, func_13E930(0x2C7));
    func_0B3958(0x1FD, &r, 0.0f);
    func_0B0348(r.b, r.c, func_13E930(0x1CA), 0.9f, 0.9f);
    func_0B3958(0x1F8, &r, 0.0f);
    func_0AEDA8(r.a, r.c, func_13E930(0x2CA), 0.9f, 0.9f);
    func_0ADF00(0);
    func_0BFC40(D_00343AC0);
    func_0ADF00(1);
    s = func_0BFBE8(D_00343AC0);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0006D8(func_027098(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00343BC0, func_13E838(sp->id), func_13E930(q->first));
            D_00343B68.text = D_00343BC0;
        } else {
            D_00343B68.text = func_13E838(sp->id);
        }
    } else {
        D_00343B68.text = func_13E838(sp->id);
    }
    if (D_00219860 != s) {
        func_0B0718(&D_00343B68);
        D_00219860 = s;
    }
    func_0B0750(&D_00343B68);
}
