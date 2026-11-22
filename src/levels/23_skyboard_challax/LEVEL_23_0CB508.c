/* LEVEL_23:0x0CB508 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_002FE1F8;
extern char D_002FE218[];
extern Label D_002FE2C0;
extern char D_001E77D0[];
extern int D_001D7E7C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A5818(int a, unsigned int b, float c);
extern void func_0A5478(int id, void *out, float initial);
extern char *func_123C28(int id);
extern void func_0A0630(short a, short b, char *c);
extern void func_0A1C10(short a, short b, char *c);
extern void func_0A1500(short a, short b, char *c);
extern int func_09F3F0(int *value);
extern void func_1258D0(int a, void *l, unsigned int c);
extern Entry *func_022710(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_09FAB0(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0B11A0(void *p);
extern void func_0A2238(void *p);
extern void func_0A2270(void *p);
extern void func_0B11F8(void *value);

void func_0CB508(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0A5818(0x2F, 0xFFFFFFFF, 0.0f);
    func_0A5478(0x1D2, &r, 0.0f);
    func_0A0630(r.x, r.h, func_123C28(0x223));
    func_0A5478(0x1C5, &r, 0.0f);
    func_0A1C10(r.w, r.h, func_123C28(0x3F1));
    func_0A5478(0x1D0, &r, 0.0f);
    func_0A1500(func_09F3F0((int *)&r), r.h, func_123C28(0x3E8));
    func_0A5478(0x1CB, &r, 0.0f);
    func_1258D0(0, &r, 0xFFFFFFFF);
    if (D_002FE1F8.shown != 0) {
        func_0A5478(0x1CB, &r, 0.0f);
        func_1258D0(1, &r, 0xFFFFFFFF);
    }
    switch (D_002FE1F8.kind) {
    case 1:
        sprintf(buf, func_123C28(0x3EC), D_002FE1F8.f10);
        break;
    case 4:
        sprintf(buf, func_123C28(0x3ED), func_123C28(func_022710(D_002FE1F8.f14, -1)->name));
        break;
    case 2:
        func_09FAB0(buf, 0x3EE, func_123C28(func_0001A8(D_002FE1F8.f14)), func_123C28(func_000200(D_002FE1F8.f14)), 0);
        break;
    }
    p = buf;
    func_0A5478(0x1CF, &r, 0.0f);
    func_0A0630(r.x, r.h, p);
    obj = func_0B11A0(D_002FE218);
    if (obj != 0) {
        D_002FE2C0.text = (int)func_123C28(D_002FE1F8.f4 + *(int *)(obj + 0xD0));
        if (D_001D7E7C != obj) {
            func_0A2238(&D_002FE2C0);
            D_001D7E7C = obj;
        }
        func_0A2270(&D_002FE2C0);
    }
    sprintf(p, D_001E77D0, func_123C28(0x3EF), D_002FE1F8.f8);
    func_0A5478(0x1CE, &r, 0.0f);
    func_0A0630(r.x, r.h, p);
    func_0A5478(0x1CA, &r, 0.0f);
    func_0A0630(r.x, r.h, func_123C28(D_002FE1F8.f0));
    func_0B11F8(D_002FE218);
}
