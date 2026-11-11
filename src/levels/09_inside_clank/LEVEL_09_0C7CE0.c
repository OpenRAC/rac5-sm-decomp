/* LEVEL_09:0x0C7CE0 -- placement copy of LEVEL_01_0CAA30.c: draws the current list screen: highlight frames, one row per entry with its icon, and the selected entry's description line. */
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

extern int D_001EB064;
extern Slot D_001EB318[];
extern int D_001EB198[];
extern int D_001EB1A8[];
extern int D_001EB1B8[];
extern int D_001EB1C8[];
extern int D_0021C9B8;
extern char D_0021C8C0[];
extern char D_001FDA90[];

extern void func_0A6130(int a, int b);
extern float func_0B8778(void);
extern void func_0AC6B0(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int field, float f3);
extern Obj *func_023920(int h, int g);
extern Info *func_023968(int h, int g);
extern int func_0237F8(int h, int g);
extern int func_023858(int h, int g);
extern int func_023A20(int h, int g);
extern float func_023C18(int h, int g);
extern int func_0AB9B8(int id, Rect *r, float f);
extern int sprintf(char *, const char *, ...);
extern int func_0A5930(Rect *r);
extern int func_0A5990(Rect *r);
extern int func_0A5A48(Rect *r);
extern void func_0A7A40(short x, short y, char *s);
extern void func_0A7CF8(short x, short y, char *s, float sx, float sy);
extern int func_1D50E0(float f);
extern void func_0AA800(int h, Rect *r, unsigned int color);
extern void func_0A9760(short x, short y, short w, short h, unsigned int color);
static __inline__ Slot *Cur(void)
{
    return &D_001EB318[D_001EB064];
}

static __inline__ void Fx(int id, int a, float sx, float sy)
{
    func_0AC6B0(id, a, 0, 0, sx, sy, 0.0f, 0xFFFFFFFF, 0.0f);
}

extern void func_0B4E08(int base, unsigned int c0, unsigned int c1, float f0, float f1, float f2);
extern void func_0A5F50(unsigned int color);
extern void func_0A5F60(int mode);
extern void func_0230D0(char *table, char *out, int id, int size);
extern unsigned int func_0A6B28(char *s);
extern char *func_12B448(int id);

void func_0C7CE0(void)
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

    func_0A6130(D_001EB064, 0);
    idx = D_001EB064;
    s = &D_001EB318[idx];
    if (s->data == 0)
        return;
    scale = func_0B8778();
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
            o = func_023920(s->data->items[s->sel], D_0021C9B8);
            if (o != 0) {
                func_0AB9B8(0x4D, &r, 0.0f);
                sprintf(small, D_001FDA90, o->v40);
                func_0A7A40(func_0A5930(&r), r.h, small);
                func_0AB9B8(0x4E, &r, 0.0f);
                sprintf(small, D_001FDA90, o->subs[o->cur]->v38);
                func_0A7A40(func_0A5930(&r), r.h, small);
            }
        }
    }
    for (i = 0; i < s->data->count; ) {
        {
            if (i != s->sel) {
                Fx(s->data->base1 + i * mul, 0, 1.0f, 1.0f);
                Fx(s->data->base2 + i * mul, 0, 1.0f, 1.0f);
            }
            func_0AB9B8(i * s->data->stride + 0x51, &r, 0.0f);
            k = 1.0f;
            if (i == s->sel) {
                int d, dy;

                d = func_1D50E0((float)func_0A5990(&r) * scale - (float)func_0A5990(&r));
                r.x -= d;
                r.w += d;
                dy = func_1D50E0((float)func_0A5A48(&r) * scale - (float)func_0A5A48(&r));
                r.y -= dy;
                r.h += dy;
                k = scale;
            }
            tbl = D_0021C8C0;
            func_023920(s->data->items[i], *(int *)(tbl + 0xF8));
            p = func_023968(s->data->items[i], -1);
            if (s->mode == 0) {
                if (s->data->items[i] != 0) {
                    func_0AA800(p->draw, &r, 0xFFFFFFFF);
                    if (i == s->sel) {
                        textId = p->id;
                        obj = s->data->items[i];
                    }
                } else {
                    func_0A9760(r.x, r.y, r.w, r.h, 0x80404040);
                }
                if (Cur()->data->items[i] != 0 && func_0237F8(s->data->items[i], -1) != 0) {
                    if (func_023A20(s->data->items[i], -1) != 0)
                        func_0B4E08(s->data->icons + i * 3, 0xFF09A5D0, 0xFF1C35FF, func_023C18(s->data->items[i], -1), k,
                                    k);
                    else
                        func_0B4E08(s->data->icons + i * 3, 0xFF60FFFF, 0xFF60FFFF, 1.0f, k, k);
                    Fx(i + 0x31B, 0, k, k);
                }
            } else if (s->mode == 1) {
                if (i == s->sel)
                    textId = D_001EB1A8[i];
                func_0AA800(D_001EB198[i], &r, 0xFFFFFFFF);
            } else if (s->mode == 2) {
                if (i == s->sel)
                    textId = D_001EB1C8[i];
                func_0AA800(D_001EB1B8[i], &r, 0xFFFFFFFF);
            }
            i++;
        }
    }
    if (textId != 0 && s->flag == 0) {
        unsigned int len;
        int w;

        func_0A5F50((s->alpha << 24) | 0xFFFFFF);
        func_0AB9B8(0x4F, &r, 0.0f);
        if (func_0237F8(obj, -1) != 0) {
            if (func_023858(obj, -1) != 0) {
                func_0A5F50(0xFFFFFF89);
                func_0A5F60(0);
            }
            func_0230D0(D_0021C8C0, big, obj, 0x100);
            len = func_0A6B28(big);
            w = func_0A5990(&r);
            if (len >= (unsigned int)(w - 2))
                func_0A7CF8(func_0A5930(&r), r.h, big, 0.8f, 0.8f);
            else
                func_0A7A40(func_0A5930(&r), r.h, big);
            if (func_023858(obj, -1) != 0) {
                func_0A5F50(0xFFFFFFFF);
                func_0A5F60(1);
            }
        } else {
            func_0A7A40(func_0A5930(&r), r.h, func_12B448(textId));
        }
    }
}
