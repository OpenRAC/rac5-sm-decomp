/* LEVEL_20:0x0AE300 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_0019E678;
extern char D_0019E698[];
extern Label D_0019E740;
extern char D_0012A590[];
extern int D_0011500C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_087890(int a, unsigned int b, float c);
extern void func_0874F0(int id, void *out, float initial);
extern char *func_0E2118(int id);
extern void func_0826A8(short a, short b, char *c);
extern void func_083C88(short a, short b, char *c);
extern void func_083578(short a, short b, char *c);
extern int func_081408(int *value);
extern void func_0E3CB0(int a, void *l, unsigned int c);
extern Entry *func_01EE10(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_081AF8(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_093988(void *p);
extern void func_0842B0(void *p);
extern void func_0842E8(void *p);
extern void func_0939E0(void *value);

void func_0AE300(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_087890(0x2F, 0xFFFFFFFF, 0.0f);
    func_0874F0(0x1D2, &r, 0.0f);
    func_0826A8(r.x, r.h, func_0E2118(0x223));
    func_0874F0(0x1C5, &r, 0.0f);
    func_083C88(r.w, r.h, func_0E2118(0x3F1));
    func_0874F0(0x1D0, &r, 0.0f);
    func_083578(func_081408((int *)&r), r.h, func_0E2118(0x3E8));
    func_0874F0(0x1CB, &r, 0.0f);
    func_0E3CB0(0, &r, 0xFFFFFFFF);
    if (D_0019E678.shown != 0) {
        func_0874F0(0x1CB, &r, 0.0f);
        func_0E3CB0(1, &r, 0xFFFFFFFF);
    }
    switch (D_0019E678.kind) {
    case 1:
        sprintf(buf, func_0E2118(0x3EC), D_0019E678.f10);
        break;
    case 4:
        sprintf(buf, func_0E2118(0x3ED), func_0E2118(func_01EE10(D_0019E678.f14, -1)->name));
        break;
    case 2:
        func_081AF8(buf, 0x3EE, func_0E2118(func_0001A8(D_0019E678.f14)), func_0E2118(func_000200(D_0019E678.f14)), 0);
        break;
    }
    p = buf;
    func_0874F0(0x1CF, &r, 0.0f);
    func_0826A8(r.x, r.h, p);
    obj = func_093988(D_0019E698);
    if (obj != 0) {
        D_0019E740.text = (int)func_0E2118(D_0019E678.f4 + *(int *)(obj + 0xD0));
        if (D_0011500C != obj) {
            func_0842B0(&D_0019E740);
            D_0011500C = obj;
        }
        func_0842E8(&D_0019E740);
    }
    sprintf(p, D_0012A590, func_0E2118(0x3EF), D_0019E678.f8);
    func_0874F0(0x1CE, &r, 0.0f);
    func_0826A8(r.x, r.h, p);
    func_0874F0(0x1CA, &r, 0.0f);
    func_0826A8(r.x, r.h, func_0E2118(D_0019E678.f0));
    func_0939E0(D_0019E698);
}
