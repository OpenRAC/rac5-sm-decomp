/* LEVEL_03:0x0D44C0 -- placement copy of LEVEL_01_0D46D8.c: draws the text lines of a selection panel: fixed captions at four screen rectangles, the current entry's label (chosen by its kind) and an item description that follows the highlighted object. */
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

extern Panel D_00347C38;
extern char D_00347C58[];
extern Label D_00347D00;
extern char D_0022D550[];
extern int D_0021D0FC;

extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0AE828(int a, unsigned int b, float c);
extern void func_0AE488(int id, void *out, float initial);
extern char *func_130878(int id);
extern void func_0A9640(short a, short b, char *c);
extern void func_0AAC20(short a, short b, char *c);
extern void func_0AA510(short a, short b, char *c);
extern int func_0A8400(int *value);
extern void func_132520(int a, void *l, unsigned int c);
extern Entry *func_024540(int h, int k);
extern int func_0001A8(int value);
extern int func_000200(int value);
extern int func_0A8AC0(char *dst, int id, char *s1, char *s2, char *s3);
extern int func_0BA1F0(void *p);
extern void func_0AB248(void *p);
extern void func_0AB280(void *p);
extern void func_0BA248(void *value);

void func_0D44C0(void)
{
    Rect r;
    char buf[256];
    char *p;
    int obj;

    func_0AE828(0x2F, 0xFFFFFFFF, 0.0f);
    func_0AE488(0x1D2, &r, 0.0f);
    func_0A9640(r.x, r.h, func_130878(0x223));
    func_0AE488(0x1C5, &r, 0.0f);
    func_0AAC20(r.w, r.h, func_130878(0x3F1));
    func_0AE488(0x1D0, &r, 0.0f);
    func_0AA510(func_0A8400((int *)&r), r.h, func_130878(0x3E8));
    func_0AE488(0x1CB, &r, 0.0f);
    func_132520(0, &r, 0xFFFFFFFF);
    if (D_00347C38.shown != 0) {
        func_0AE488(0x1CB, &r, 0.0f);
        func_132520(1, &r, 0xFFFFFFFF);
    }
    switch (D_00347C38.kind) {
    case 1:
        sprintf(buf, func_130878(0x3EC), D_00347C38.f10);
        break;
    case 4:
        sprintf(buf, func_130878(0x3ED), func_130878(func_024540(D_00347C38.f14, -1)->name));
        break;
    case 2:
        func_0A8AC0(buf, 0x3EE, func_130878(func_0001A8(D_00347C38.f14)), func_130878(func_000200(D_00347C38.f14)), 0);
        break;
    }
    p = buf;
    func_0AE488(0x1CF, &r, 0.0f);
    func_0A9640(r.x, r.h, p);
    obj = func_0BA1F0(D_00347C58);
    if (obj != 0) {
        D_00347D00.text = (int)func_130878(D_00347C38.f4 + *(int *)(obj + 0xD0));
        if (D_0021D0FC != obj) {
            func_0AB248(&D_00347D00);
            D_0021D0FC = obj;
        }
        func_0AB280(&D_00347D00);
    }
    sprintf(p, D_0022D550, func_130878(0x3EF), D_00347C38.f8);
    func_0AE488(0x1CE, &r, 0.0f);
    func_0A9640(r.x, r.h, p);
    func_0AE488(0x1CA, &r, 0.0f);
    func_0A9640(r.x, r.h, func_130878(D_00347C38.f0));
    func_0BA248(D_00347C58);
}
