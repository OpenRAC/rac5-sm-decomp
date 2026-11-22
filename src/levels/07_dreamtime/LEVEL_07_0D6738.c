/* LEVEL_07:0x0D6738 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
typedef struct {
    short x;
    char pad2[6];
    unsigned short w;
    char padA[2];
    unsigned short h;
    char padE[2];
} Rect;

typedef struct {
    int f0;
    int f4;
    int f8;
    int kind;
    int f10;
    int f14;
    char pad18[4];
    unsigned char shown;
} Panel;

typedef struct {
    char pad0[0x14];
    int text;
} Label;

typedef struct {
    char pad0[0x10];
    int name;
} Entry;

extern Panel D_003426B8;
extern char D_003426D8[];
extern Label D_00342780;
extern char D_00229350[];
extern int D_00218D7C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B0AA8(int a, unsigned int b, float c);
extern void func_0B0708(int id, void *out, float initial);
extern char *func_1354B0(int id);
extern void func_0AB8C0(short a, short b, char *c);
extern void func_0ACEA0(short a, short b, char *c);
extern void func_0AC790(short a, short b, char *c);
extern int func_0AA680(int *value);
extern void func_137158(int a, void *l, unsigned int c);
extern Entry *func_024C38(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0AAD40(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0BC468(void *p);
extern void func_0AD4C8(void *p);
extern void func_0AD500(void *p);
extern void func_0BC4C0(void *value);

void func_0D6738(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0B0AA8(0x2F, 0xFFFFFFFF, 0.0f);
    func_0B0708(0x1D2, &r, 0.0f);
    func_0AB8C0(r.x, r.h, func_1354B0(0x223));
    func_0B0708(0x1C5, &r, 0.0f);
    func_0ACEA0(r.w, r.h, func_1354B0(0x3F1));
    func_0B0708(0x1D0, &r, 0.0f);
    func_0AC790(func_0AA680((int *)&r), r.h, func_1354B0(0x3E8));
    func_0B0708(0x1CB, &r, 0.0f);
    func_137158(0, &r, 0xFFFFFFFF);
    if (D_003426B8.shown != 0) {
        func_0B0708(0x1CB, &r, 0.0f);
        func_137158(1, &r, 0xFFFFFFFF);
    }
    switch (D_003426B8.kind) {
    case 1:
        sprintf(buf, func_1354B0(0x3EC), D_003426B8.f10);
        break;
    case 4:
        sprintf(buf, func_1354B0(0x3ED), func_1354B0(func_024C38(D_003426B8.f14, -1)->name));
        break;
    case 2:
        func_0AAD40(buf, 0x3EE, func_1354B0(func_0001A8(D_003426B8.f14)), func_1354B0(func_000200(D_003426B8.f14)), 0);
        break;
    }
    p = buf;
    func_0B0708(0x1CF, &r, 0.0f);
    func_0AB8C0(r.x, r.h, p);
    obj = func_0BC468(D_003426D8);
    if (obj != 0) {
        D_00342780.text = (int)func_1354B0(D_003426B8.f4 + *(int *)(obj + 0xD0));
        if (D_00218D7C != obj) {
            func_0AD4C8(&D_00342780);
            D_00218D7C = obj;
        }
        func_0AD500(&D_00342780);
    }
    sprintf(p, D_00229350, func_1354B0(0x3EF), D_003426B8.f8);
    func_0B0708(0x1CE, &r, 0.0f);
    func_0AB8C0(r.x, r.h, p);
    func_0B0708(0x1CA, &r, 0.0f);
    func_0AB8C0(r.x, r.h, func_1354B0(D_003426B8.f0));
    func_0BC4C0(D_003426D8);
}
