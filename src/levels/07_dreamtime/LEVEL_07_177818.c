/* LEVEL_07:0x177818 -- placement copy of LEVEL_05_1625A8.c: trigger-volume tick: while armed, waits for every member to be gone, then fires the group, counts the activations and sets the done flag when the configured count is reached. */
typedef struct Obj Obj;

typedef struct Member {
    Obj *obj;
    char pad_04[0x20];
    int w24;
    char pad_28[0];
} Member;

typedef struct Cfg {
    char pad_00[0xC];
    int wC;
    char pad_10[4];
    Obj *tgt;
    int w18;
    unsigned char b1C;
    unsigned char pad_1D;
    unsigned char b1E;
} Cfg;

typedef struct Rec {
    Member m[8];
    unsigned char count;
} Rec;

struct Obj {
    char pad_00[0x46];
    unsigned char b46;
    char pad_47[0xD];
    Cfg *cfg;
    Rec *rec;
    char pad_5C[8];
    unsigned int flags;
    char pad_68[8];
    float timer;
};

extern void func_07E7F0(Obj *o, int a);
extern float *func_01AA20(void);
extern int func_086800(int a, float *pos);
extern void func_177AE0(Obj *o, int i);
extern void func_177FE0(int a);
extern int func_177DC8(Obj *o, Cfg *c, Rec *r);
extern int func_177E78(Obj *o, Cfg *c, Rec *r);

void func_177818(Obj *o)
{
    Cfg *cfg;
    Rec *rec;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    int found;
    int v;
    float *pos;

    cfg = o->cfg;
    rec = o->rec;
    if (o->flags & 8) {
        for (i = 0; i < 8; i++) {
            if (rec->m[i].obj != 0 && (rec->m[i].obj->flags & 1) != 0)
                break;
        }
        if (i == 8)
            func_07E7F0(o, 1);
        return;
    }
    if (cfg->tgt != 0)
        pos = (float *)((char *)cfg->tgt + 0x30);
    else
        pos = func_01AA20();
    if (cfg->wC != 0) {
        v = func_086800(cfg->wC, pos);
        if (v != 0) {
            o->flags = o->flags | 8;
            for (j = 0; j < 8; j++) {
                if (rec->m[j].obj != 0 && rec->m[j].w24 == 0)
                    func_177AE0(o, j & 0xFF);
            }
        }
    }
    o->timer = o->timer - 0.033333335f;
    if (o->b46 != 0) {
        found = 0;
        for (k = 0; k < 8; k++) {
            if (rec->m[k].w24 == 1) {
                found = 1;
                break;
            }
        }
        if (found)
            return;
        if (cfg->w18 != 0)
            func_177FE0(cfg->w18);
        if (cfg->b1E != 0)
            o->flags = o->flags | 0x10;
        return;
    }
    if (func_177DC8(o, cfg, rec) != 0 && func_177E78(o, cfg, rec) != 0) {
        rec->count = rec->count + 1;
        if (cfg->b1C != 0 && cfg->b1C != 0xFF && cfg->b1C == rec->count)
            o->flags = o->flags | 8;
    }
}
