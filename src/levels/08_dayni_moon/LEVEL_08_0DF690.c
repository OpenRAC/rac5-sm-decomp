/* LEVEL_08:0x0DF690 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_0037C038;
extern char D_0037C058[];
extern Label D_0037C100;
extern char D_0025E2D0[];
extern int D_0024D93C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B93E0(int a, unsigned int b, float c);
extern void func_0B9040(int id, void *out, float initial);
extern char *func_1439E8(int id);
extern void func_0B41F8(short a, short b, char *c);
extern void func_0B57D8(short a, short b, char *c);
extern void func_0B50C8(short a, short b, char *c);
extern int func_0B2F78(int *value);
extern void func_145690(int a, void *l, unsigned int c);
extern Entry *func_024EF0(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0B3678(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0C52F8(void *p);
extern void func_0B5E00(void *p);
extern void func_0B5E38(void *p);
extern void func_0C5350(void *value);

void func_0DF690(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0B93E0(0x2F, 0xFFFFFFFF, 0.0f);
    func_0B9040(0x1D2, &r, 0.0f);
    func_0B41F8(r.x, r.h, func_1439E8(0x223));
    func_0B9040(0x1C5, &r, 0.0f);
    func_0B57D8(r.w, r.h, func_1439E8(0x3F1));
    func_0B9040(0x1D0, &r, 0.0f);
    func_0B50C8(func_0B2F78((int *)&r), r.h, func_1439E8(0x3E8));
    func_0B9040(0x1CB, &r, 0.0f);
    func_145690(0, &r, 0xFFFFFFFF);
    if (D_0037C038.shown != 0) {
        func_0B9040(0x1CB, &r, 0.0f);
        func_145690(1, &r, 0xFFFFFFFF);
    }
    switch (D_0037C038.kind) {
    case 1:
        sprintf(buf, func_1439E8(0x3EC), D_0037C038.f10);
        break;
    case 4:
        sprintf(buf, func_1439E8(0x3ED), func_1439E8(func_024EF0(D_0037C038.f14, -1)->name));
        break;
    case 2:
        func_0B3678(buf, 0x3EE, func_1439E8(func_0001A8(D_0037C038.f14)), func_1439E8(func_000200(D_0037C038.f14)), 0);
        break;
    }
    p = buf;
    func_0B9040(0x1CF, &r, 0.0f);
    func_0B41F8(r.x, r.h, p);
    obj = func_0C52F8(D_0037C058);
    if (obj != 0) {
        D_0037C100.text = (int)func_1439E8(D_0037C038.f4 + *(int *)(obj + 0xD0));
        if (D_0024D93C != obj) {
            func_0B5E00(&D_0037C100);
            D_0024D93C = obj;
        }
        func_0B5E38(&D_0037C100);
    }
    sprintf(p, D_0025E2D0, func_1439E8(0x3EF), D_0037C038.f8);
    func_0B9040(0x1CE, &r, 0.0f);
    func_0B41F8(r.x, r.h, p);
    func_0B9040(0x1CA, &r, 0.0f);
    func_0B41F8(r.x, r.h, func_1439E8(D_0037C038.f0));
    func_0C5350(D_0037C058);
}
