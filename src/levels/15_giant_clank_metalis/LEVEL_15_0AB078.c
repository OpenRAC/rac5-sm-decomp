/* LEVEL_15:0x0AB078 -- placement copy of LEVEL_01_0CAA30.c: draws the current list screen: highlight frames, one row per entry with its icon, and the selected entry's description line. */
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

extern int D_00155EE4;
extern Slot D_00156198[];
extern int D_00156018[];
extern int D_00156028[];
extern int D_00156038[];
extern int D_00156048[];
extern int D_0017D3B8;
extern char D_0017D2C0[];
extern char D_00168610[];

extern void func_089748(int a, int b);
extern float func_09BB10(void);
extern void func_08FCC8(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int field, float f3);
extern Obj *func_01E990(int h, int g);
extern Info *func_01E9D8(int h, int g);
extern int func_01E868(int h, int g);
extern int func_01E8C8(int h, int g);
extern int func_01EA90(int h, int g);
extern float func_01EC88(int h, int g);
extern int func_08EFD0(int id, Rect *r, float f);
extern int sprintf(char *, const char *, ...);
extern int func_088F48(Rect *r);
extern int func_088FA8(Rect *r);
extern int func_089060(Rect *r);
extern void func_08B058(short x, short y, char *s);
extern void func_08B310(short x, short y, char *s, float sx, float sy);
extern int func_13FF70(float f);
extern void func_08DE18(int h, Rect *r, unsigned int color);
extern void func_08CD78(short x, short y, short w, short h, unsigned int color);
static __inline__ Slot *Cur(void)
{
    return &D_00156198[D_00155EE4];
}

static __inline__ void Fx(int id, int a, float sx, float sy)
{
    func_08FCC8(id, a, 0, 0, sx, sy, 0.0f, 0xFFFFFFFF, 0.0f);
}

extern void func_0981F8(int base, unsigned int c0, unsigned int c1, float f0, float f1, float f2);
extern void func_089568(unsigned int color);
extern void func_089578(int mode);
extern void func_01E3C8(char *table, char *out, int id, int size);
extern unsigned int func_08A140(char *s);
extern char *func_0F1378(int id);

void func_0AB078(void)
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

    func_089748(D_00155EE4, 0);
    idx = D_00155EE4;
    s = &D_00156198[idx];
    if (s->data == 0)
        return;
    scale = func_09BB10();
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
            o = func_01E990(s->data->items[s->sel], D_0017D3B8);
            if (o != 0) {
                func_08EFD0(0x4D, &r, 0.0f);
                sprintf(small, D_00168610, o->v40);
                func_08B058(func_088F48(&r), r.h, small);
                func_08EFD0(0x4E, &r, 0.0f);
                sprintf(small, D_00168610, o->subs[o->cur]->v38);
                func_08B058(func_088F48(&r), r.h, small);
            }
        }
    }
    for (i = 0; i < s->data->count; ) {
        {
            if (i != s->sel) {
                Fx(s->data->base1 + i * mul, 0, 1.0f, 1.0f);
                Fx(s->data->base2 + i * mul, 0, 1.0f, 1.0f);
            }
            func_08EFD0(i * s->data->stride + 0x51, &r, 0.0f);
            k = 1.0f;
            if (i == s->sel) {
                int d, dy;

                d = func_13FF70((float)func_088FA8(&r) * scale - (float)func_088FA8(&r));
                r.x -= d;
                r.w += d;
                dy = func_13FF70((float)func_089060(&r) * scale - (float)func_089060(&r));
                r.y -= dy;
                r.h += dy;
                k = scale;
            }
            tbl = D_0017D2C0;
            func_01E990(s->data->items[i], *(int *)(tbl + 0xF8));
            p = func_01E9D8(s->data->items[i], -1);
            if (s->mode == 0) {
                if (s->data->items[i] != 0) {
                    func_08DE18(p->draw, &r, 0xFFFFFFFF);
                    if (i == s->sel) {
                        textId = p->id;
                        obj = s->data->items[i];
                    }
                } else {
                    func_08CD78(r.x, r.y, r.w, r.h, 0x80404040);
                }
                if (Cur()->data->items[i] != 0 && func_01E868(s->data->items[i], -1) != 0) {
                    if (func_01EA90(s->data->items[i], -1) != 0)
                        func_0981F8(s->data->icons + i * 3, 0xFF09A5D0, 0xFF1C35FF, func_01EC88(s->data->items[i], -1), k,
                                    k);
                    else
                        func_0981F8(s->data->icons + i * 3, 0xFF60FFFF, 0xFF60FFFF, 1.0f, k, k);
                    Fx(i + 0x31B, 0, k, k);
                }
            } else if (s->mode == 1) {
                if (i == s->sel)
                    textId = D_00156028[i];
                func_08DE18(D_00156018[i], &r, 0xFFFFFFFF);
            } else if (s->mode == 2) {
                if (i == s->sel)
                    textId = D_00156048[i];
                func_08DE18(D_00156038[i], &r, 0xFFFFFFFF);
            }
            i++;
        }
    }
    if (textId != 0 && s->flag == 0) {
        unsigned int len;
        int w;

        func_089568((s->alpha << 24) | 0xFFFFFF);
        func_08EFD0(0x4F, &r, 0.0f);
        if (func_01E868(obj, -1) != 0) {
            if (func_01E8C8(obj, -1) != 0) {
                func_089568(0xFFFFFF89);
                func_089578(0);
            }
            func_01E3C8(D_0017D2C0, big, obj, 0x100);
            len = func_08A140(big);
            w = func_088FA8(&r);
            if (len >= (unsigned int)(w - 2))
                func_08B310(func_088F48(&r), r.h, big, 0.8f, 0.8f);
            else
                func_08B058(func_088F48(&r), r.h, big);
            if (func_01E8C8(obj, -1) != 0) {
                func_089568(0xFFFFFFFF);
                func_089578(1);
            }
        } else {
            func_08B058(func_088F48(&r), r.h, func_0F1378(textId));
        }
    }
}
