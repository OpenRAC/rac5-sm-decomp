/* LEVEL_02:0x0DB068 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_003442B8;
extern char D_003442D8[];
extern Label D_00344380;
extern char D_002295D0[];
extern int D_00219A3C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0B53B8(int a, unsigned int b, float c);
extern void func_0B5018(int id, void *out, float initial);
extern char *func_138860(int id);
extern void func_0B01D0(short a, short b, char *c);
extern void func_0B17B0(short a, short b, char *c);
extern void func_0B10A0(short a, short b, char *c);
extern int func_0AEF90(int *value);
extern void func_13A508(int a, void *l, unsigned int c);
extern Entry *func_024FD0(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0AF650(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0C0D18(void *p);
extern void func_0B1DD8(void *p);
extern void func_0B1E10(void *p);
extern void func_0C0D70(void *value);

void func_0DB068(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0B53B8(0x2F, 0xFFFFFFFF, 0.0f);
    func_0B5018(0x1D2, &r, 0.0f);
    func_0B01D0(r.x, r.h, func_138860(0x223));
    func_0B5018(0x1C5, &r, 0.0f);
    func_0B17B0(r.w, r.h, func_138860(0x3F1));
    func_0B5018(0x1D0, &r, 0.0f);
    func_0B10A0(func_0AEF90((int *)&r), r.h, func_138860(0x3E8));
    func_0B5018(0x1CB, &r, 0.0f);
    func_13A508(0, &r, 0xFFFFFFFF);
    if (D_003442B8.shown != 0) {
        func_0B5018(0x1CB, &r, 0.0f);
        func_13A508(1, &r, 0xFFFFFFFF);
    }
    switch (D_003442B8.kind) {
    case 1:
        sprintf(buf, func_138860(0x3EC), D_003442B8.f10);
        break;
    case 4:
        sprintf(buf, func_138860(0x3ED), func_138860(func_024FD0(D_003442B8.f14, -1)->name));
        break;
    case 2:
        func_0AF650(buf, 0x3EE, func_138860(func_0001A8(D_003442B8.f14)), func_138860(func_000200(D_003442B8.f14)), 0);
        break;
    }
    p = buf;
    func_0B5018(0x1CF, &r, 0.0f);
    func_0B01D0(r.x, r.h, p);
    obj = func_0C0D18(D_003442D8);
    if (obj != 0) {
        D_00344380.text = (int)func_138860(D_003442B8.f4 + *(int *)(obj + 0xD0));
        if (D_00219A3C != obj) {
            func_0B1DD8(&D_00344380);
            D_00219A3C = obj;
        }
        func_0B1E10(&D_00344380);
    }
    sprintf(p, D_002295D0, func_138860(0x3EF), D_003442B8.f8);
    func_0B5018(0x1CE, &r, 0.0f);
    func_0B01D0(r.x, r.h, p);
    func_0B5018(0x1CA, &r, 0.0f);
    func_0B01D0(r.x, r.h, func_138860(D_003442B8.f0));
    func_0C0D70(D_003442D8);
}
