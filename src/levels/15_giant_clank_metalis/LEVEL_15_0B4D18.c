/* LEVEL_15:0x0B4D18 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_002445F8;
extern char D_00244618[];
extern Label D_002446C0;
extern char D_00168DD0[];
extern int D_001596FC;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_08F370(int a, unsigned int b, float c);
extern void func_08EFD0(int id, void *out, float initial);
extern char *func_0F1378(int id);
extern void func_08A188(short a, short b, char *c);
extern void func_08B768(short a, short b, char *c);
extern void func_08B058(short a, short b, char *c);
extern int func_088F48(int *value);
extern void func_0F3020(int a, void *l, unsigned int c);
extern Entry *func_01E9D8(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_089608(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_09AA50(void *p);
extern void func_08BD90(void *p);
extern void func_08BDC8(void *p);
extern void func_09AAA8(void *value);

void func_0B4D18(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_08F370(0x2F, 0xFFFFFFFF, 0.0f);
    func_08EFD0(0x1D2, &r, 0.0f);
    func_08A188(r.x, r.h, func_0F1378(0x223));
    func_08EFD0(0x1C5, &r, 0.0f);
    func_08B768(r.w, r.h, func_0F1378(0x3F1));
    func_08EFD0(0x1D0, &r, 0.0f);
    func_08B058(func_088F48((int *)&r), r.h, func_0F1378(0x3E8));
    func_08EFD0(0x1CB, &r, 0.0f);
    func_0F3020(0, &r, 0xFFFFFFFF);
    if (D_002445F8.shown != 0) {
        func_08EFD0(0x1CB, &r, 0.0f);
        func_0F3020(1, &r, 0xFFFFFFFF);
    }
    switch (D_002445F8.kind) {
    case 1:
        sprintf(buf, func_0F1378(0x3EC), D_002445F8.f10);
        break;
    case 4:
        sprintf(buf, func_0F1378(0x3ED), func_0F1378(func_01E9D8(D_002445F8.f14, -1)->name));
        break;
    case 2:
        func_089608(buf, 0x3EE, func_0F1378(func_0001A8(D_002445F8.f14)), func_0F1378(func_000200(D_002445F8.f14)), 0);
        break;
    }
    p = buf;
    func_08EFD0(0x1CF, &r, 0.0f);
    func_08A188(r.x, r.h, p);
    obj = func_09AA50(D_00244618);
    if (obj != 0) {
        D_002446C0.text = (int)func_0F1378(D_002445F8.f4 + *(int *)(obj + 0xD0));
        if (D_001596FC != obj) {
            func_08BD90(&D_002446C0);
            D_001596FC = obj;
        }
        func_08BDC8(&D_002446C0);
    }
    sprintf(p, D_00168DD0, func_0F1378(0x3EF), D_002445F8.f8);
    func_08EFD0(0x1CE, &r, 0.0f);
    func_08A188(r.x, r.h, p);
    func_08EFD0(0x1CA, &r, 0.0f);
    func_08A188(r.x, r.h, func_0F1378(D_002445F8.f0));
    func_09AAA8(D_00244618);
}
