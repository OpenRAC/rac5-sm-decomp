/* LEVEL_02:0x0D13C0 -- placement copy of LEVEL_01_0CAA30.c: draws the current list screen: highlight frames, one row per entry with its icon, and the selected entry's description line. */
typedef struct Rect {
    int x, y, w, h;
} Rect;

typedef struct Sub {
    char pad00[0x38];
    int v38;
} Sub;

typedef struct Obj {
    char pad00[0x10];
    Sub *subs[11];
    int cur;
    int v40;
} Obj;

typedef struct Info {
    char pad00[0x10];
    int id;
    int pad14;
    int draw;
} Info;

typedef struct Data {
    int count;
    int pad04;
    int stride;
    int pad0C;
    int *items;
    int pad14;
    int base1;
    int pad1C;
    int base2;
    int icons;
} Data;

typedef struct Slot {
    unsigned int state;
    char pad04[0x10];
    int sel;
    char pad18[0x24];
    unsigned char flag;
    char pad3D[7];
    int alpha;
    char pad48[0x10];
    int mode;
    char pad5C[0xC];
    Data *data;
} Slot;

extern int D_00216224;
extern Slot D_002164D8[];
extern int D_00216358[];
extern int D_00216368[];
extern int D_00216378[];
extern int D_00216388[];
extern int D_0024C748;
extern char D_0024C650[];
extern char D_00228E10[];

extern void func_0AF790(int a, int b);
extern float func_0C1DD8(void);
extern void func_0B5D10(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int field, float f3);
extern Obj *func_024F88(int h, int g);
extern Info *func_024FD0(int h, int g);
extern int func_024E60(int h, int g);
extern int func_024EC0(int h, int g);
extern int func_025088(int h, int g);
extern float func_025280(int h, int g);
extern int func_0B5018(int id, Rect *r, float f);
extern int sprintf(char *, const char *, ...);
extern int func_0AEF90(Rect *r);
extern int func_0AEFF0(Rect *r);
extern int func_0AF0A8(Rect *r);
extern void func_0B10A0(short x, short y, char *s);
extern void func_0B1358(short x, short y, char *s, float sx, float sy);
extern int func_1FFF10(float f);
extern void func_0B3E60(int h, Rect *r, unsigned int color);
extern void func_0B2DC0(short x, short y, short w, short h, unsigned int color);
static __inline__ Slot *Cur(void)
{
    return &D_002164D8[D_00216224];
}

static __inline__ void Fx(int id, int a, float sx, float sy)
{
    func_0B5D10(id, a, 0, 0, sx, sy, 0.0f, 0xFFFFFFFF, 0.0f);
}

extern void func_0BE468(int base, unsigned int c0, unsigned int c1, float f0, float f1, float f2);
extern void func_0AF5B0(unsigned int color);
extern void func_0AF5C0(int mode);
extern void func_0248A0(char *table, char *out, int id, int size);
extern unsigned int func_0B0188(char *s);
extern char *func_138860(int id);

void func_0D13C0(void)
{
    Rect r;
    char small[0x20];
    char big[0x100];
    Slot *s;
    int idx;
    float scale;
    float k;
    int mul;
    int textId;
    int obj;
    unsigned char i;
    Obj *o;
    Info *p;
    char *tbl;

    func_0AF790(D_00216224, 0);
    idx = D_00216224;
    s = &D_002164D8[idx];
    if (s->data == 0)
        return;
    scale = func_0C1DD8();
    textId = 0;
    obj = 0;
    mul = (s->mode != 0) ? 2 : 1;
    switch (s->state) {
    case 2:
    case 3:
    case 5:
    case 8:
        break;
    default:
        return;
    }
    Fx(0x49A, 0, 1.0f, 1.0f);
    if (s->sel != -1) {
        Fx(s->data->base1 + s->sel * mul, 2, scale, scale);
        Fx(s->data->base2 + s->sel * mul, 2, scale, scale);
        if (s->mode != 3 && Cur()->data->items[s->sel] != 0) {
            o = func_024F88(s->data->items[s->sel], D_0024C748);
            if (o != 0) {
                func_0B5018(0x4D, &r, 0.0f);
                sprintf(small, D_00228E10, o->v40);
                func_0B10A0(func_0AEF90(&r), r.h, small);
                func_0B5018(0x4E, &r, 0.0f);
                sprintf(small, D_00228E10, o->subs[o->cur]->v38);
                func_0B10A0(func_0AEF90(&r), r.h, small);
            }
        }
    }
    for (i = 0; i < s->data->count; ) {
        {
            if (i != s->sel) {
                Fx(s->data->base1 + i * mul, 0, 1.0f, 1.0f);
                Fx(s->data->base2 + i * mul, 0, 1.0f, 1.0f);
            }
            func_0B5018(i * s->data->stride + 0x51, &r, 0.0f);
            k = 1.0f;
            if (i == s->sel) {
                int d, dy;

                d = func_1FFF10((float)func_0AEFF0(&r) * scale - (float)func_0AEFF0(&r));
                r.x -= d;
                r.w += d;
                dy = func_1FFF10((float)func_0AF0A8(&r) * scale - (float)func_0AF0A8(&r));
                r.y -= dy;
                r.h += dy;
                k = scale;
            }
            tbl = D_0024C650;
            func_024F88(s->data->items[i], *(int *)(tbl + 0xF8));
            p = func_024FD0(s->data->items[i], -1);
            if (s->mode == 0) {
                if (s->data->items[i] != 0) {
                    func_0B3E60(p->draw, &r, 0xFFFFFFFF);
                    if (i == s->sel) {
                        textId = p->id;
                        obj = s->data->items[i];
                    }
                } else {
                    func_0B2DC0(r.x, r.y, r.w, r.h, 0x80404040);
                }
                if (Cur()->data->items[i] != 0 && func_024E60(s->data->items[i], -1) != 0) {
                    if (func_025088(s->data->items[i], -1) != 0)
                        func_0BE468(s->data->icons + i * 3, 0xFF09A5D0, 0xFF1C35FF, func_025280(s->data->items[i], -1), k,
                                    k);
                    else
                        func_0BE468(s->data->icons + i * 3, 0xFF60FFFF, 0xFF60FFFF, 1.0f, k, k);
                    Fx(i + 0x31B, 0, k, k);
                }
            } else if (s->mode == 1) {
                if (i == s->sel)
                    textId = D_00216368[i];
                func_0B3E60(D_00216358[i], &r, 0xFFFFFFFF);
            } else if (s->mode == 2) {
                if (i == s->sel)
                    textId = D_00216388[i];
                func_0B3E60(D_00216378[i], &r, 0xFFFFFFFF);
            }
            i++;
        }
    }
    if (textId != 0 && s->flag == 0) {
        unsigned int len;
        int w;

        func_0AF5B0((s->alpha << 24) | 0xFFFFFF);
        func_0B5018(0x4F, &r, 0.0f);
        if (func_024E60(obj, -1) != 0) {
            if (func_024EC0(obj, -1) != 0) {
                func_0AF5B0(0xFFFFFF89);
                func_0AF5C0(0);
            }
            func_0248A0(D_0024C650, big, obj, 0x100);
            len = func_0B0188(big);
            w = func_0AEFF0(&r);
            if (len >= (unsigned int)(w - 2))
                func_0B1358(func_0AEF90(&r), r.h, big, 0.8f, 0.8f);
            else
                func_0B10A0(func_0AEF90(&r), r.h, big);
            if (func_024EC0(obj, -1) != 0) {
                func_0AF5B0(0xFFFFFFFF);
                func_0AF5C0(1);
            }
        } else {
            func_0B10A0(func_0AEF90(&r), r.h, func_138860(textId));
        }
    }
}
