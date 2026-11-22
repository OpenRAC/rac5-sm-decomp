/* LEVEL_24:0x0CE028 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_002F8C78;
extern char D_002F8C98[];
extern Label D_002F8D40;
extern char D_001E53D0[];
extern int D_001D56FC;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A8320(int a, unsigned int b, float c);
extern void func_0A7F80(int id, void *out, float initial);
extern char *func_127FB0(int id);
extern void func_0A3138(short a, short b, char *c);
extern void func_0A4718(short a, short b, char *c);
extern void func_0A4008(short a, short b, char *c);
extern int func_0A1EF8(int *value);
extern void func_129C58(int a, void *l, unsigned int c);
extern Entry *func_022448(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0A25B8(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0B3C98(void *p);
extern void func_0A4D40(void *p);
extern void func_0A4D78(void *p);
extern void func_0B3CF0(void *value);

void func_0CE028(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0A8320(0x2F, 0xFFFFFFFF, 0.0f);
    func_0A7F80(0x1D2, &r, 0.0f);
    func_0A3138(r.x, r.h, func_127FB0(0x223));
    func_0A7F80(0x1C5, &r, 0.0f);
    func_0A4718(r.w, r.h, func_127FB0(0x3F1));
    func_0A7F80(0x1D0, &r, 0.0f);
    func_0A4008(func_0A1EF8((int *)&r), r.h, func_127FB0(0x3E8));
    func_0A7F80(0x1CB, &r, 0.0f);
    func_129C58(0, &r, 0xFFFFFFFF);
    if (D_002F8C78.shown != 0) {
        func_0A7F80(0x1CB, &r, 0.0f);
        func_129C58(1, &r, 0xFFFFFFFF);
    }
    switch (D_002F8C78.kind) {
    case 1:
        sprintf(buf, func_127FB0(0x3EC), D_002F8C78.f10);
        break;
    case 4:
        sprintf(buf, func_127FB0(0x3ED), func_127FB0(func_022448(D_002F8C78.f14, -1)->name));
        break;
    case 2:
        func_0A25B8(buf, 0x3EE, func_127FB0(func_0001A8(D_002F8C78.f14)), func_127FB0(func_000200(D_002F8C78.f14)), 0);
        break;
    }
    p = buf;
    func_0A7F80(0x1CF, &r, 0.0f);
    func_0A3138(r.x, r.h, p);
    obj = func_0B3C98(D_002F8C98);
    if (obj != 0) {
        D_002F8D40.text = (int)func_127FB0(D_002F8C78.f4 + *(int *)(obj + 0xD0));
        if (D_001D56FC != obj) {
            func_0A4D40(&D_002F8D40);
            D_001D56FC = obj;
        }
        func_0A4D78(&D_002F8D40);
    }
    sprintf(p, D_001E53D0, func_127FB0(0x3EF), D_002F8C78.f8);
    func_0A7F80(0x1CE, &r, 0.0f);
    func_0A3138(r.x, r.h, p);
    func_0A7F80(0x1CA, &r, 0.0f);
    func_0A3138(r.x, r.h, func_127FB0(D_002F8C78.f0));
    func_0B3CF0(D_002F8C98);
}
