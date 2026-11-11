/* LEVEL_17:0x154908 -- placement copy of LEVEL_16_15B388.c: when the owner matches, calls the context hook with the configured values, counts the event, spawns a marker and resets the slot. */

typedef struct Ctx Ctx;
typedef struct Obj Obj;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Marker;

typedef struct {
    char pad_00[0x3C];
    int w_3C;
} Item;

typedef struct {
    char pad_00[0x20];
    int (*fn_20)(Ctx *c, int a, int b, int p, int q, Obj *o, float f);
} Hook;

struct Ctx {
    char pad_00[0x40];
    Hook *hook_40;
};

typedef struct {
    char pad_00[0x24];
    unsigned int magic_24;
} Owner;

typedef struct {
    char pad_00[0xF8];
    int w_F8;
} Res;

typedef struct {
    Res *res_00;
    char pad_04[4];
    int w_08;
    int w_0C;
    char pad_10[0x1C];
    float f_2C;
} Slot;

struct Obj {
    char pad_00[0x40];
    Owner *owner_40;
    char pad_44[0x14];
    Slot *slot_58;
};

typedef struct {
    int mode_00;
    float f_04;
    int a_08;
    int b_0C;
} Cfg;

typedef struct {
    char pad_00[0x530];
    Cfg cfg;
} Big;

typedef struct {
    char pad_00[8];
    unsigned char b_08;
} Cnt;

extern Big D_001C10A8;
extern float D_001D1930;
extern unsigned char D_001B13A4;
extern unsigned char D_001B13A5;
extern Cnt D_001D0F30;

extern Item *func_021A48(int id, int v);
extern unsigned int func_021510(unsigned int index);
extern void func_073C48(Obj *o, Marker *m, int a, int b, int c, int d, int e, int f, float f0, float f1, float f2, float f3);
extern void func_180390(Obj *o, Ctx *c, int w, int x);
extern void func_014F80(Res *r, int id, Ctx *c, int res);

void func_154908(Obj *o, Ctx *c)
{
    Slot *q;
    Item *it;
    Marker *m;
    Hook *h;
    Cfg *cfg;
    Big *b;
    float f;
    int res;

    if (o->owner_40->magic_24 != 0xECFD0651) {
        return;
    }
    q = o->slot_58;
    it = func_021A48(0xD, q->res_00->w_F8);
    h = c->hook_40;
    if (h->fn_20 == 0) {
        res = -1;
    } else {
        b = &D_001C10A8;
        cfg = &b->cfg;
        if (cfg->mode_00 != 0) {
            if (cfg->mode_00 >= 0) {
                if (cfg->mode_00 < 3) {
                    f = D_001D1930 * cfg->f_04;
                } else {
                    f = cfg->f_04;
                }
            } else {
                f = cfg->f_04;
            }
        } else {
            f = cfg->f_04;
        }
        res = h->fn_20(c, cfg->a_08, cfg->b_0C, 0, 0, o, f);
    }
    if (D_001B13A4 != 0 && D_001B13A5 != 0) {
        D_001D0F30.b_08++;
    }
    if (res != 0) {
        m = (Marker *)func_021510(0);
        if (m != 0) {
            func_073C48(o, m, 0, 0, 0, 0, 0, 1, m->f_14, m->f_18, m->f_1C, m->f_20);
        }
        func_180390(o, c, it->w_3C, 0);
        func_014F80(q->res_00, 0xD, c, res);
    }
    q->w_0C = 0;
    q->w_08 = 0;
    q->f_2C = -1.0f;
}
