/* LEVEL_09:0x0D1988 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_00314538;
extern char D_00314558[];
extern Label D_00314600;
extern char D_001FE250[];
extern int D_001EE87C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0ABD58(int a, unsigned int b, float c);
extern void func_0AB9B8(int id, void *out, float initial);
extern char *func_12B448(int id);
extern void func_0A6B70(short a, short b, char *c);
extern void func_0A8150(short a, short b, char *c);
extern void func_0A7A40(short a, short b, char *c);
extern int func_0A5930(int *value);
extern void func_12D0F0(int a, void *l, unsigned int c);
extern Entry *func_023968(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0A5FF0(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0B76B8(void *p);
extern void func_0A8778(void *p);
extern void func_0A87B0(void *p);
extern void func_0B7710(void *value);

void func_0D1988(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0ABD58(0x2F, 0xFFFFFFFF, 0.0f);
    func_0AB9B8(0x1D2, &r, 0.0f);
    func_0A6B70(r.x, r.h, func_12B448(0x223));
    func_0AB9B8(0x1C5, &r, 0.0f);
    func_0A8150(r.w, r.h, func_12B448(0x3F1));
    func_0AB9B8(0x1D0, &r, 0.0f);
    func_0A7A40(func_0A5930((int *)&r), r.h, func_12B448(0x3E8));
    func_0AB9B8(0x1CB, &r, 0.0f);
    func_12D0F0(0, &r, 0xFFFFFFFF);
    if (D_00314538.shown != 0) {
        func_0AB9B8(0x1CB, &r, 0.0f);
        func_12D0F0(1, &r, 0xFFFFFFFF);
    }
    switch (D_00314538.kind) {
    case 1:
        sprintf(buf, func_12B448(0x3EC), D_00314538.f10);
        break;
    case 4:
        sprintf(buf, func_12B448(0x3ED), func_12B448(func_023968(D_00314538.f14, -1)->name));
        break;
    case 2:
        func_0A5FF0(buf, 0x3EE, func_12B448(func_0001A8(D_00314538.f14)), func_12B448(func_000200(D_00314538.f14)), 0);
        break;
    }
    p = buf;
    func_0AB9B8(0x1CF, &r, 0.0f);
    func_0A6B70(r.x, r.h, p);
    obj = func_0B76B8(D_00314558);
    if (obj != 0) {
        D_00314600.text = (int)func_12B448(D_00314538.f4 + *(int *)(obj + 0xD0));
        if (D_001EE87C != obj) {
            func_0A8778(&D_00314600);
            D_001EE87C = obj;
        }
        func_0A87B0(&D_00314600);
    }
    sprintf(p, D_001FE250, func_12B448(0x3EF), D_00314538.f8);
    func_0AB9B8(0x1CE, &r, 0.0f);
    func_0A6B70(r.x, r.h, p);
    func_0AB9B8(0x1CA, &r, 0.0f);
    func_0A6B70(r.x, r.h, func_12B448(D_00314538.f0));
    func_0B7710(D_00314558);
}
