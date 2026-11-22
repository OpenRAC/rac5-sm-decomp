/* LEVEL_19:0x0C36A8 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_0027AFB8;
extern char D_0027AFD8[];
extern Label D_0027B080;
extern char D_001CA710[];
extern int D_001B3AAC;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_09CA28(int a, unsigned int b, float c);
extern void func_09C688(int id, void *out, float initial);
extern char *func_10F9D0(int id);
extern void func_097840(short a, short b, char *c);
extern void func_098E20(short a, short b, char *c);
extern void func_098710(short a, short b, char *c);
extern int func_0965A0(int *value);
extern void func_111568(int a, void *l, unsigned int c);
extern Entry *func_021D50(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_096C90(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0A8D30(void *p);
extern void func_099448(void *p);
extern void func_099480(void *p);
extern void func_0A8D88(void *value);

void func_0C36A8(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_09CA28(0x2F, 0xFFFFFFFF, 0.0f);
    func_09C688(0x1D2, &r, 0.0f);
    func_097840(r.x, r.h, func_10F9D0(0x223));
    func_09C688(0x1C5, &r, 0.0f);
    func_098E20(r.w, r.h, func_10F9D0(0x3F1));
    func_09C688(0x1D0, &r, 0.0f);
    func_098710(func_0965A0((int *)&r), r.h, func_10F9D0(0x3E8));
    func_09C688(0x1CB, &r, 0.0f);
    func_111568(0, &r, 0xFFFFFFFF);
    if (D_0027AFB8.shown != 0) {
        func_09C688(0x1CB, &r, 0.0f);
        func_111568(1, &r, 0xFFFFFFFF);
    }
    switch (D_0027AFB8.kind) {
    case 1:
        sprintf(buf, func_10F9D0(0x3EC), D_0027AFB8.f10);
        break;
    case 4:
        sprintf(buf, func_10F9D0(0x3ED), func_10F9D0(func_021D50(D_0027AFB8.f14, -1)->name));
        break;
    case 2:
        func_096C90(buf, 0x3EE, func_10F9D0(func_0001A8(D_0027AFB8.f14)), func_10F9D0(func_000200(D_0027AFB8.f14)), 0);
        break;
    }
    p = buf;
    func_09C688(0x1CF, &r, 0.0f);
    func_097840(r.x, r.h, p);
    obj = func_0A8D30(D_0027AFD8);
    if (obj != 0) {
        D_0027B080.text = (int)func_10F9D0(D_0027AFB8.f4 + *(int *)(obj + 0xD0));
        if (D_001B3AAC != obj) {
            func_099448(&D_0027B080);
            D_001B3AAC = obj;
        }
        func_099480(&D_0027B080);
    }
    sprintf(p, D_001CA710, func_10F9D0(0x3EF), D_0027AFB8.f8);
    func_09C688(0x1CE, &r, 0.0f);
    func_097840(r.x, r.h, p);
    func_09C688(0x1CA, &r, 0.0f);
    func_097840(r.x, r.h, func_10F9D0(D_0027AFB8.f0));
    func_0A8D88(D_0027AFD8);
}
