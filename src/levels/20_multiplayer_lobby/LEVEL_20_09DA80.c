/* LEVEL_20:0x09DA80 -- placement copy of LEVEL_01_0C4098.c: lays out a few menu widgets and refreshes the selected entry's title text. */
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
extern char D_0019AA40[];
extern char D_0019AB40[];
extern Label D_0019AAE8;
extern int D_00110AF8;
extern void func_087890(int a, unsigned int b, float f);
extern void func_0874F0(int id, Rc *out, float f);
extern int func_081408(Rc *r);
extern void func_083578(short a, short b, int c);
extern int func_0E2118(int a);
extern void func_083EE0(short a, short b, int c, float f, float g);
extern void func_082940(short a, short b, int c, float f, float g);
extern void func_081A68(int a);
extern void func_0939E0(void *a);
extern int func_093988(void *a);
extern int func_021A20(int a, int b);
extern Rec *func_0005D8(int a);
extern char *func_0E2020(int a);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0842B0(Label *l);
extern void func_0842E8(Label *l);

void func_09DA80(void)
{
    Rc r;
    int s;
    Sel *sp;
    Rec *q;

    func_087890(0x34, 0xFFFFFFFF, 0.0f);
    func_0874F0(0x1FC, &r, 0.0f);
    func_083578(func_081408(&r), r.c, func_0E2118(0x2C7));
    func_0874F0(0x1FD, &r, 0.0f);
    func_083EE0(r.b, r.c, func_0E2118(0x1CA), 0.9f, 0.9f);
    func_0874F0(0x1F8, &r, 0.0f);
    func_082940(r.a, r.c, func_0E2118(0x2CA), 0.9f, 0.9f);
    func_081A68(0);
    func_0939E0(D_0019AA40);
    func_081A68(1);
    s = func_093988(D_0019AA40);
    sp = (Sel *)s;
    if (s == 0)
        return;
    if (sp->id == -0x87) {
        q = func_0005D8(func_021A20(0xB6, 0xFF));
        if (q != 0) {
            sprintf(D_0019AB40, func_0E2020(sp->id), func_0E2118(q->first));
            D_0019AAE8.text = D_0019AB40;
        } else {
            D_0019AAE8.text = func_0E2020(sp->id);
        }
    } else {
        D_0019AAE8.text = func_0E2020(sp->id);
    }
    if (D_00110AF8 != s) {
        func_0842B0(&D_0019AAE8);
        D_00110AF8 = s;
    }
    func_0842E8(&D_0019AAE8);
}
