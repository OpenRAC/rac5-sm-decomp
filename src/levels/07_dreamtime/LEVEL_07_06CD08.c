/* LEVEL_07:0x06CD08 -- placement copy of LEVEL_01_06BE88.c: bakes a path object's segments into freshly allocated buffers. */
typedef struct Seg {
    char pad_00[0x6C];
} Seg;

typedef struct Out {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    short f_10;
    char pad_12[2];
    int f_14;
    void *f_18;
    void *f_1C;
} Out;

typedef struct Cell {
    char pad_00[0x20];
    float x;
    float y;
    float z;
} Cell;

typedef struct Obj {
    char pad_000[0x1B0];
    float a[3];
    float b[3];
    char pad_1C8[0x34];
    float f_1FC;
    unsigned char f_200;
    char pad_201[3];
    unsigned char f_204;
    unsigned char f_205;
    unsigned char f_206;
} Obj;

extern int D_00208D5C;
extern char D_0022CAC0[];

extern Out *func_091D58(int n);
extern void *func_091D98(int n);
extern void func_06E608(Obj *o, Seg *s, int i);
extern void func_06E2A0(Seg *s, float *a, float *b, float f, float g, float h);
extern void *func_06E750(Obj *o, void *out, Seg *prev, Seg *cur);
extern int func_06EC68(int i, int d);
extern void func_091DE8(void *a, void *b, int n);
extern void func_091208(void *a, Out *o, int b, int c, int d);

void func_06CD08(Obj *o)
{
    Seg buf[2];
    int total;
    Out *r;
    void *pts;
    Cell *cells;
    void *w;
    int i;
    int cur;
    int prev;
    int s;

    if (o->f_206 == 0) {
        return;
    }
    total = 10;
    if (o->f_200 != 0) {
        total = o->f_206 * total;
    } else {
        total = (o->f_206 - 1) * total;
    }
    r = func_091D58(0x20);
    pts = func_091D58(total << 4);
    cells = func_091D98(total * 0x90);
    if (r == 0 || pts == 0 || cells == 0) {
        return;
    }
    s = o->f_204;
    w = cells;
    func_06E608(o, &buf[0], s);
    cur = 0;
    if (o->f_200 != 0) {
        func_06E2A0(&buf[1], o->a, o->b, o->f_1FC, 0.04f, 1.0f);
        w = func_06E750(o, cells, &buf[1], &buf[0]);
    }
    if (o->f_204 != o->f_205) {
        do {
            s = func_06EC68(s, 1);
            prev = cur;
            cur = cur ^ 1;
            func_06E608(o, &buf[cur], s);
            w = func_06E750(o, w, &buf[prev], &buf[cur]);
        } while (s != o->f_205);
    }
    func_091DE8(pts, cells, total);
    r->f_14 = D_00208D5C;
    r->f_00 = cells->x;
    r->f_04 = cells->y;
    r->f_08 = cells->z;
    r->f_10 = total;
    r->f_1C = cells;
    r->f_18 = pts;
    r->f_0C = 1.0f;
    func_091208(D_0022CAC0, r, 0, 0, 0xFF);
}
