/* LEVEL_01:0x0D46D8 -- draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_0032CDB8;
extern char D_0032CDD8[];
extern Label D_0032CE80;
extern char D_00214650[];
extern int D_00204A7C;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AEAA8(int a, unsigned int b, float c);
extern void func_0AE708(int id, void *out, float initial);
extern char *func_1324B0(int id);
extern void func_0A98C0(short a, short b, char *c);
extern void func_0AAEA0(short a, short b, char *c);
extern void func_0AA790(short a, short b, char *c);
extern int func_0A8680(int *value);
extern void func_134158(int a, void *l, unsigned int c);
extern Entry *func_024670(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0A8D40(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0BA408(void *p);
extern void func_0AB4C8(void *p);
extern void func_0AB500(void *p);
extern void func_0BA460(void *value);

void func_0D46D8(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0AEAA8(0x2F, 0xFFFFFFFF, 0.0f);
    func_0AE708(0x1D2, &r, 0.0f);
    func_0A98C0(r.x, r.h, func_1324B0(0x223));
    func_0AE708(0x1C5, &r, 0.0f);
    func_0AAEA0(r.w, r.h, func_1324B0(0x3F1));
    func_0AE708(0x1D0, &r, 0.0f);
    func_0AA790(func_0A8680((int *)&r), r.h, func_1324B0(0x3E8));
    func_0AE708(0x1CB, &r, 0.0f);
    func_134158(0, &r, 0xFFFFFFFF);
    if (D_0032CDB8.shown != 0) {
        func_0AE708(0x1CB, &r, 0.0f);
        func_134158(1, &r, 0xFFFFFFFF);
    }
    switch (D_0032CDB8.kind) {
    case 1:
        sprintf(buf, func_1324B0(0x3EC), D_0032CDB8.f10);
        break;
    case 4:
        sprintf(buf, func_1324B0(0x3ED), func_1324B0(func_024670(D_0032CDB8.f14, -1)->name));
        break;
    case 2:
        func_0A8D40(buf, 0x3EE, func_1324B0(func_0001A8(D_0032CDB8.f14)), func_1324B0(func_000200(D_0032CDB8.f14)), 0);
        break;
    }
    p = buf;
    func_0AE708(0x1CF, &r, 0.0f);
    func_0A98C0(r.x, r.h, p);
    obj = func_0BA408(D_0032CDD8);
    if (obj != 0) {
        D_0032CE80.text = (int)func_1324B0(D_0032CDB8.f4 + *(int *)(obj + 0xD0));
        if (D_00204A7C != obj) {
            func_0AB4C8(&D_0032CE80);
            D_00204A7C = obj;
        }
        func_0AB500(&D_0032CE80);
    }
    sprintf(p, D_00214650, func_1324B0(0x3EF), D_0032CDB8.f8);
    func_0AE708(0x1CE, &r, 0.0f);
    func_0A98C0(r.x, r.h, p);
    func_0AE708(0x1CA, &r, 0.0f);
    func_0A98C0(r.x, r.h, func_1324B0(D_0032CDB8.f0));
    func_0BA460(D_0032CDD8);
}
