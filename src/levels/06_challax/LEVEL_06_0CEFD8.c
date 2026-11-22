/* LEVEL_06:0x0CEFD8 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_00319B38;
extern char D_00319B58[];
extern Label D_00319C00;
extern char D_002034D0[];
extern int D_001F397C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0A9278(int a, unsigned int b, float c);
extern void func_0A8ED8(int id, void *out, float initial);
extern char *func_128B80(int id);
extern void func_0A4090(short a, short b, char *c);
extern void func_0A5670(short a, short b, char *c);
extern void func_0A4F60(short a, short b, char *c);
extern int func_0A2E50(int *value);
extern void func_12A828(int a, void *l, unsigned int c);
extern Entry *func_022D78(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0A3510(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0B4D08(void *p);
extern void func_0A5C98(void *p);
extern void func_0A5CD0(void *p);
extern void func_0B4D60(void *value);

void func_0CEFD8(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0A9278(0x2F, 0xFFFFFFFF, 0.0f);
    func_0A8ED8(0x1D2, &r, 0.0f);
    func_0A4090(r.x, r.h, func_128B80(0x223));
    func_0A8ED8(0x1C5, &r, 0.0f);
    func_0A5670(r.w, r.h, func_128B80(0x3F1));
    func_0A8ED8(0x1D0, &r, 0.0f);
    func_0A4F60(func_0A2E50((int *)&r), r.h, func_128B80(0x3E8));
    func_0A8ED8(0x1CB, &r, 0.0f);
    func_12A828(0, &r, 0xFFFFFFFF);
    if (D_00319B38.shown != 0) {
        func_0A8ED8(0x1CB, &r, 0.0f);
        func_12A828(1, &r, 0xFFFFFFFF);
    }
    switch (D_00319B38.kind) {
    case 1:
        sprintf(buf, func_128B80(0x3EC), D_00319B38.f10);
        break;
    case 4:
        sprintf(buf, func_128B80(0x3ED), func_128B80(func_022D78(D_00319B38.f14, -1)->name));
        break;
    case 2:
        func_0A3510(buf, 0x3EE, func_128B80(func_0001A8(D_00319B38.f14)), func_128B80(func_000200(D_00319B38.f14)), 0);
        break;
    }
    p = buf;
    func_0A8ED8(0x1CF, &r, 0.0f);
    func_0A4090(r.x, r.h, p);
    obj = func_0B4D08(D_00319B58);
    if (obj != 0) {
        D_00319C00.text = (int)func_128B80(D_00319B38.f4 + *(int *)(obj + 0xD0));
        if (D_001F397C != obj) {
            func_0A5C98(&D_00319C00);
            D_001F397C = obj;
        }
        func_0A5CD0(&D_00319C00);
    }
    sprintf(p, D_002034D0, func_128B80(0x3EF), D_00319B38.f8);
    func_0A8ED8(0x1CE, &r, 0.0f);
    func_0A4090(r.x, r.h, p);
    func_0A8ED8(0x1CA, &r, 0.0f);
    func_0A4090(r.x, r.h, func_128B80(D_00319B38.f0));
    func_0B4D60(D_00319B58);
}
