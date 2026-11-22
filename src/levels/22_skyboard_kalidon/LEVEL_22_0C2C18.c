/* LEVEL_22:0x0C2C18 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_00282978;
extern char D_00282998[];
extern Label D_00282A40;
extern char D_00171AD0[];
extern int D_00163DFC;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_09D0B8(int a, unsigned int b, float c);
extern void func_09CD18(int id, void *out, float initial);
extern char *func_109980(int id);
extern void func_097ED0(short a, short b, char *c);
extern void func_0994B0(short a, short b, char *c);
extern void func_098DA0(short a, short b, char *c);
extern int func_096C90(int *value);
extern void func_10B628(int a, void *l, unsigned int c);
extern Entry *func_01F4A8(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_097350(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0A88B0(void *p);
extern void func_099AD8(void *p);
extern void func_099B10(void *p);
extern void func_0A8908(void *value);

void func_0C2C18(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_09D0B8(0x2F, 0xFFFFFFFF, 0.0f);
    func_09CD18(0x1D2, &r, 0.0f);
    func_097ED0(r.x, r.h, func_109980(0x223));
    func_09CD18(0x1C5, &r, 0.0f);
    func_0994B0(r.w, r.h, func_109980(0x3F1));
    func_09CD18(0x1D0, &r, 0.0f);
    func_098DA0(func_096C90((int *)&r), r.h, func_109980(0x3E8));
    func_09CD18(0x1CB, &r, 0.0f);
    func_10B628(0, &r, 0xFFFFFFFF);
    if (D_00282978.shown != 0) {
        func_09CD18(0x1CB, &r, 0.0f);
        func_10B628(1, &r, 0xFFFFFFFF);
    }
    switch (D_00282978.kind) {
    case 1:
        sprintf(buf, func_109980(0x3EC), D_00282978.f10);
        break;
    case 4:
        sprintf(buf, func_109980(0x3ED), func_109980(func_01F4A8(D_00282978.f14, -1)->name));
        break;
    case 2:
        func_097350(buf, 0x3EE, func_109980(func_0001A8(D_00282978.f14)), func_109980(func_000200(D_00282978.f14)), 0);
        break;
    }
    p = buf;
    func_09CD18(0x1CF, &r, 0.0f);
    func_097ED0(r.x, r.h, p);
    obj = func_0A88B0(D_00282998);
    if (obj != 0) {
        D_00282A40.text = (int)func_109980(D_00282978.f4 + *(int *)(obj + 0xD0));
        if (D_00163DFC != obj) {
            func_099AD8(&D_00282A40);
            D_00163DFC = obj;
        }
        func_099B10(&D_00282A40);
    }
    sprintf(p, D_00171AD0, func_109980(0x3EF), D_00282978.f8);
    func_09CD18(0x1CE, &r, 0.0f);
    func_097ED0(r.x, r.h, p);
    func_09CD18(0x1CA, &r, 0.0f);
    func_097ED0(r.x, r.h, func_109980(D_00282978.f0));
    func_0A8908(D_00282998);
}
