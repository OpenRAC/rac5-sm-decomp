/* LEVEL_10:0x0D5B18 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_003361B8;
extern char D_003361D8[];
extern Label D_00336280;
extern char D_0021D5D0[];
extern int D_0020DA7C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AFBC0(int a, unsigned int b, float c);
extern void func_0AF820(int id, void *out, float initial);
extern char *func_130310(int id);
extern void func_0AA9D8(short a, short b, char *c);
extern void func_0ABFB8(short a, short b, char *c);
extern void func_0AB8A8(short a, short b, char *c);
extern int func_0A9798(int *value);
extern void func_131FD8(int a, void *l, unsigned int c);
extern Entry *func_023FD8(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0A9E58(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0BB750(void *p);
extern void func_0AC5E0(void *p);
extern void func_0AC618(void *p);
extern void func_0BB7A8(void *value);

void func_0D5B18(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0AFBC0(0x2F, 0xFFFFFFFF, 0.0f);
    func_0AF820(0x1D2, &r, 0.0f);
    func_0AA9D8(r.x, r.h, func_130310(0x223));
    func_0AF820(0x1C5, &r, 0.0f);
    func_0ABFB8(r.w, r.h, func_130310(0x3F1));
    func_0AF820(0x1D0, &r, 0.0f);
    func_0AB8A8(func_0A9798((int *)&r), r.h, func_130310(0x3E8));
    func_0AF820(0x1CB, &r, 0.0f);
    func_131FD8(0, &r, 0xFFFFFFFF);
    if (D_003361B8.shown != 0) {
        func_0AF820(0x1CB, &r, 0.0f);
        func_131FD8(1, &r, 0xFFFFFFFF);
    }
    switch (D_003361B8.kind) {
    case 1:
        sprintf(buf, func_130310(0x3EC), D_003361B8.f10);
        break;
    case 4:
        sprintf(buf, func_130310(0x3ED), func_130310(func_023FD8(D_003361B8.f14, -1)->name));
        break;
    case 2:
        func_0A9E58(buf, 0x3EE, func_130310(func_0001A8(D_003361B8.f14)), func_130310(func_000200(D_003361B8.f14)), 0);
        break;
    }
    p = buf;
    func_0AF820(0x1CF, &r, 0.0f);
    func_0AA9D8(r.x, r.h, p);
    obj = func_0BB750(D_003361D8);
    if (obj != 0) {
        D_00336280.text = (int)func_130310(D_003361B8.f4 + *(int *)(obj + 0xD0));
        if (D_0020DA7C != obj) {
            func_0AC5E0(&D_00336280);
            D_0020DA7C = obj;
        }
        func_0AC618(&D_00336280);
    }
    sprintf(p, D_0021D5D0, func_130310(0x3EF), D_003361B8.f8);
    func_0AF820(0x1CE, &r, 0.0f);
    func_0AA9D8(r.x, r.h, p);
    func_0AF820(0x1CA, &r, 0.0f);
    func_0AA9D8(r.x, r.h, func_130310(D_003361B8.f0));
    func_0BB7A8(D_003361D8);
}
