/* LEVEL_07:0x0CCA90 -- placement copy of LEVEL_01_0CAA30.c: draws the current list screen: highlight frames, one row per entry with its icon, and the selected entry's description line. */
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

extern int D_00215564;
extern Slot D_00215818[];
extern int D_00215698[];
extern int D_002156A8[];
extern int D_002156B8[];
extern int D_002156C8[];
extern int D_0024AB38;
extern char D_0024AA40[];
extern char D_00228B90[];

extern void func_0AAE80(int a, int b);
extern float func_0BD528(void);
extern void func_0B1400(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int field, float f3);
extern Obj *func_024BF0(int h, int g);
extern Info *func_024C38(int h, int g);
extern int func_024AC8(int h, int g);
extern int func_024B28(int h, int g);
extern int func_024CF0(int h, int g);
extern float func_024EE8(int h, int g);
extern int func_0B0708(int id, Rect *r, float f);
extern int sprintf(char *, const char *, ...);
extern int func_0AA680(Rect *r);
extern int func_0AA6E0(Rect *r);
extern int func_0AA798(Rect *r);
extern void func_0AC790(short x, short y, char *s);
extern void func_0ACA48(short x, short y, char *s, float sx, float sy);
extern int func_1FF5F0(float f);
extern void func_0AF550(int h, Rect *r, unsigned int color);
extern void func_0AE4B0(short x, short y, short w, short h, unsigned int color);
static __inline__ Slot *Cur(void)
{
    return &D_00215818[D_00215564];
}

static __inline__ void Fx(int id, int a, float sx, float sy)
{
    func_0B1400(id, a, 0, 0, sx, sy, 0.0f, 0xFFFFFFFF, 0.0f);
}

extern void func_0B9BB8(int base, unsigned int c0, unsigned int c1, float f0, float f1, float f2);
extern void func_0AACA0(unsigned int color);
extern void func_0AACB0(int mode);
extern void func_0243A0(char *table, char *out, int id, int size);
extern unsigned int func_0AB878(char *s);
extern char *func_1354B0(int id);

void func_0CCA90(void)
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

    func_0AAE80(D_00215564, 0);
    idx = D_00215564;
    s = &D_00215818[idx];
    if (s->data == 0)
        return;
    scale = func_0BD528();
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
            o = func_024BF0(s->data->items[s->sel], D_0024AB38);
            if (o != 0) {
                func_0B0708(0x4D, &r, 0.0f);
                sprintf(small, D_00228B90, o->v40);
                func_0AC790(func_0AA680(&r), r.h, small);
                func_0B0708(0x4E, &r, 0.0f);
                sprintf(small, D_00228B90, o->subs[o->cur]->v38);
                func_0AC790(func_0AA680(&r), r.h, small);
            }
        }
    }
    for (i = 0; i < s->data->count; ) {
        {
            if (i != s->sel) {
                Fx(s->data->base1 + i * mul, 0, 1.0f, 1.0f);
                Fx(s->data->base2 + i * mul, 0, 1.0f, 1.0f);
            }
            func_0B0708(i * s->data->stride + 0x51, &r, 0.0f);
            k = 1.0f;
            if (i == s->sel) {
                int d, dy;

                d = func_1FF5F0((float)func_0AA6E0(&r) * scale - (float)func_0AA6E0(&r));
                r.x -= d;
                r.w += d;
                dy = func_1FF5F0((float)func_0AA798(&r) * scale - (float)func_0AA798(&r));
                r.y -= dy;
                r.h += dy;
                k = scale;
            }
            tbl = D_0024AA40;
            func_024BF0(s->data->items[i], *(int *)(tbl + 0xF8));
            p = func_024C38(s->data->items[i], -1);
            if (s->mode == 0) {
                if (s->data->items[i] != 0) {
                    func_0AF550(p->draw, &r, 0xFFFFFFFF);
                    if (i == s->sel) {
                        textId = p->id;
                        obj = s->data->items[i];
                    }
                } else {
                    func_0AE4B0(r.x, r.y, r.w, r.h, 0x80404040);
                }
                if (Cur()->data->items[i] != 0 && func_024AC8(s->data->items[i], -1) != 0) {
                    if (func_024CF0(s->data->items[i], -1) != 0)
                        func_0B9BB8(s->data->icons + i * 3, 0xFF09A5D0, 0xFF1C35FF, func_024EE8(s->data->items[i], -1), k,
                                    k);
                    else
                        func_0B9BB8(s->data->icons + i * 3, 0xFF60FFFF, 0xFF60FFFF, 1.0f, k, k);
                    Fx(i + 0x31B, 0, k, k);
                }
            } else if (s->mode == 1) {
                if (i == s->sel)
                    textId = D_002156A8[i];
                func_0AF550(D_00215698[i], &r, 0xFFFFFFFF);
            } else if (s->mode == 2) {
                if (i == s->sel)
                    textId = D_002156C8[i];
                func_0AF550(D_002156B8[i], &r, 0xFFFFFFFF);
            }
            i++;
        }
    }
    if (textId != 0 && s->flag == 0) {
        unsigned int len;
        int w;

        func_0AACA0((s->alpha << 24) | 0xFFFFFF);
        func_0B0708(0x4F, &r, 0.0f);
        if (func_024AC8(obj, -1) != 0) {
            if (func_024B28(obj, -1) != 0) {
                func_0AACA0(0xFFFFFF89);
                func_0AACB0(0);
            }
            func_0243A0(D_0024AA40, big, obj, 0x100);
            len = func_0AB878(big);
            w = func_0AA6E0(&r);
            if (len >= (unsigned int)(w - 2))
                func_0ACA48(func_0AA680(&r), r.h, big, 0.8f, 0.8f);
            else
                func_0AC790(func_0AA680(&r), r.h, big);
            if (func_024B28(obj, -1) != 0) {
                func_0AACA0(0xFFFFFFFF);
                func_0AACB0(1);
            }
        } else {
            func_0AC790(func_0AA680(&r), r.h, func_1354B0(textId));
        }
    }
}
