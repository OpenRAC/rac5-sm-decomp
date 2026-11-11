/* LEVEL_06:0x0BE998 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_00316040[];
extern char D_00316140[];
extern Label D_003160E8;
extern int D_001EF2A0;
extern void func_0A9278(int a, unsigned int b, float f);
extern void func_0A8ED8(int id, Rc *out, float f);
extern int func_0A2E50(Rc *r);
extern void func_0A4F60(short a, short b, int c);
extern int func_128B80(int a);
extern void func_0A58C8(short a, short b, int c, float f, float g);
extern void func_0A4328(short a, short b, int c, float f, float g);
extern void func_0A3480(int a);
extern void func_0B4D60(void *a);
extern int func_0B4D08(void *a);
extern int func_0258B8(int a, int b);
extern Rec *func_0008D0(int a);
extern char *func_128A88(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A5C98(Label *l);
extern void func_0A5CD0(Label *l);

void func_0BE998(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_0A9278(0x34, 0xFFFFFFFF, 0.0f);
    func_0A8ED8(0x1FC, &r, 0.0f);
    func_0A4F60(func_0A2E50(&r), r.c, func_128B80(0x2C7));
    func_0A8ED8(0x1FD, &r, 0.0f);
    func_0A58C8(r.b, r.c, func_128B80(0x1CA), 0.9f, 0.9f);
    func_0A8ED8(0x1F8, &r, 0.0f);
    func_0A4328(r.a, r.c, func_128B80(0x2CA), 0.9f, 0.9f);
    func_0A3480(0);
    func_0B4D60(D_00316040);
    func_0A3480(1);
    s = func_0B4D08(D_00316040);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0008D0(func_0258B8(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_00316140, func_128A88(sp->id), func_128B80(q->first));
            D_003160E8.text = D_00316140;
        } else {
            D_003160E8.text = func_128A88(sp->id);
        }
    } else {
        D_003160E8.text = func_128A88(sp->id);
    }
    if (D_001EF2A0 != s) {
        func_0A5C98(&D_003160E8);
        D_001EF2A0 = s;
    }
    func_0A5CD0(&D_003160E8);
}
