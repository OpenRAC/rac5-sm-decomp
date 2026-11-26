/* LEVEL_19:0x1810A8 -- placement copy of LEVEL_16_184410.c: builds a spatial grid and per-group buffers for a level scene object and initializes its lighting colors. */
typedef struct Global184410 {
    unsigned char pad00[0x18];
    unsigned int w18;
    unsigned char pad1C[4];
    unsigned int w20;
    unsigned char pad24[4];
    unsigned char b28;
} Global184410;

typedef struct ColorSrc {
    unsigned int w00;
    unsigned int w04;
    unsigned int w08;
    unsigned int w0C;
} ColorSrc;

typedef struct Rec34 {
    int x00;
    void *p04;
    unsigned char pad08[0x2C];
} Rec34;

typedef struct Item80 {
    unsigned char pad00[0x44];
    unsigned char b44;
    unsigned char pad45[0x3B];
} Item80;

typedef struct ItemBC {
    unsigned char pad00[0xB0];
    void *pB0;
    int xB4;
    int wB8;
} ItemBC;

typedef struct Node8 {
    int w00;
    int w04;
} Node8;

typedef struct Cfg184410 {
    float f00;
    unsigned char b04;
} Cfg184410;

typedef struct Spec184410 {
    int x00;
    Rec34 *p04;
    int x08;
    Item80 *p0C;
    unsigned char pad10[0x20];
    int w30;
    unsigned char pad34[8];
    unsigned char b3C;
} Spec184410;

typedef struct Grid184410 {
    unsigned short *p00;
    unsigned char *p04;
    int w08;
    int w0C;
} Grid184410;

typedef struct Obj184410 {
    Cfg184410 *p00;
    Spec184410 *p04;
    ItemBC *p08;
    Node8 *p0C;
    Grid184410 grid10;
    unsigned char pad20[0x28];
    unsigned int w48;
    unsigned int w4C;
    unsigned int w50;
} Obj184410;

typedef struct ColorSrcPtr {
    ColorSrc *p;
} ColorSrcPtr;

extern Global184410 D_002E5E30;
extern char D_001D94B0[];
extern ColorSrcPtr D_001B5A20;

extern void func_180F10(void);
extern void func_180A80(Grid184410 *grid, Item80 *items, int count, float scale);
extern void *func_0F0A00(int size, int flags, char *file, int line);
extern void func_02F5C0(ItemBC *dst, void *src, unsigned int mask);

void func_1810A8(Obj184410 *o, Cfg184410 *cfg, Spec184410 *spec)
{
    int count30;
    Item80 *items;
    int n;
    Rec34 *recs;
    ItemBC *arr;
    int total;
    int i;
    int j;
    char *buf;
    Node8 *nodes;
    Node8 *np;
    Node8 *nend;

    if (D_002E5E30.b28 == 0) {
        func_180F10();
    }

    items = spec->p0C;
    count30 = spec->w30;
    func_180A80(&o->grid10, items, count30, cfg->f00);

    n = spec->b3C;
    recs = spec->p04;
    arr = (ItemBC *)func_0F0A00(n * sizeof(ItemBC), 0, D_001D94B0, 0x2F8);

    total = 0;
    for (i = 0; i != n; i++) {
        ItemBC *dst = &arr[i];
        unsigned short *cell;
        unsigned short *cend;
        int maxCount;

        func_02F5C0(dst, recs[i].p04, 0xFFFF);

        cell = o->grid10.p00;
        cend = cell + o->grid10.w08 * o->grid10.w0C;
        maxCount = 0;
        if (cell != cend) {
            unsigned char *base = o->grid10.p04;
            do {
                unsigned char *p = base + cell[0];
                unsigned char *pe = base + cell[1];
                int cnt = 0;
                while (p != pe) {
                    if (((Item80 *)((char *)items + (*p << 7)))->b44 == i) {
                        cnt++;
                    }
                    p++;
                }
                if (cnt >= maxCount) {
                    maxCount = cnt;
                }
                cell++;
                maxCount <<= 1;
            } while (cell != cend);
        }
        dst->wB8 = maxCount;
        total += maxCount;
    }

    buf = (char *)func_0F0A00(total * 16, 0, D_001D94B0, 0x31C);
    for (j = 0; j != n; j++) {
        arr[j].pB0 = buf;
        buf += arr[j].wB8 * 16;
    }

    nodes = (Node8 *)func_0F0A00(count30 * 8, 0, D_001D94B0, 0x326);
    np = nodes;
    nend = nodes + count30;
    while (np != nend) {
        np->w04 = 0;
        np++;
    }

    o->p04 = spec;
    o->p08 = arr;
    o->p0C = nodes;
    o->p00 = cfg;

    if (cfg->b04 != 0) {
        o->w48 = (D_001B5A20.p->w00 & 0x00FEFEFEU) >> 1;
        o->w4C = D_002E5E30.w18;
        o->w50 = D_002E5E30.w20;
    } else {
        o->w48 = D_001B5A20.p->w00;
        o->w4C = D_001B5A20.p->w04;
        o->w50 = D_001B5A20.p->w0C;
    }
}
