/* LEVEL_10:0x069E18 -- placement copy of LEVEL_01_06AFE8.c: applies a pending attachment request to the object: picks the target entry (or releases the old one), re-registers the attachment and starts or stops the matching effect. */
typedef struct {
    char pad_00[8];
    float f_08;
    char pad_0C[0x20];
    float t_B4;
    char pad_B8[0x10];
} Anim;

typedef struct {
    char pad_00[0x28];
    float limit_28;
} Limit;

typedef struct {
    char pad_00[8];
    float f_08;
    char pad_0C[0xA4];
    Limit *lim_B0;
    float t_B4;
} Sub;

typedef struct {
    char pad_00[8];
    char **tab_08;
    char pad_0C[0x28];
} Rec;

typedef struct {
    char pad_00[4];
    Rec *recs_04;
} Cfg;

typedef struct {
    char pad_00[0x40];
    Cfg *cfg_40;
    unsigned char idx_44;
    char pad_45[3];
    Sub *sub_48;
} Owner;

typedef struct {
    char pad_000[0x370];
    int w_370;
    int w_374;
    char *w_378;
    int id_37C;
    int cur_380;
    int next_384;
    int cnt_388;
    int want_38C;
    unsigned char on_390;
    unsigned char req_391;
    char pad_392[0x20A];
    Owner *owner_59C;
} Obj;

extern void func_088D60(char *p, int a, float f);
extern int func_08C178(int s, void *a);
extern void func_08C1E8(void *a, int n);
extern int func_08C138(int s, void *a);
extern int func_089F80(char *p, void *q);
extern void func_08C288(void *a, void *b, float x, float y);

void func_069E18(Obj *o, int force)
{
    int req;
    int id;
    int changed;
    int id2;
    void *fx;
    Sub *sub;
    int hard;

    req = o->req_391;
    o->req_391 = 0;
    if (req == 0 || o->cur_380 == 0xFFFF) {
        if (o->on_390 != 0 && o->w_378 != 0) {
            o->on_390 = 0;
            o->cur_380 = 0xFFFF;
            o->next_384 = 0xFFFF;
            func_088D60(o->w_378 + 0x14, 1, 0.10000000149011612f);
        }
        return;
    }
    id = o->cur_380;
    hard = force;
    changed = 0;
    if (hard == 0) {
        if (o->on_390 == 0) {
            o->id_37C = id;
            changed = 1;
        } else if (o->id_37C != id) {
            o->id_37C = id;
            changed = 1;
        } else if (o->cnt_388 != o->want_38C) {
            o->id_37C = id;
            changed = 1;
        }
    } else {
        o->id_37C = id;
        changed = 1;
    }
    o->on_390 = 1;
    if (changed == 0) {
        id2 = o->next_384;
        if (id2 != 0xFFFF) {
            sub = o->owner_59C->sub_48;
            if (sub->lim_B0->limit_28 <= sub->t_B4 + sub->f_08 * 0.03333333507180214f) {
                o->cur_380 = id2;
                hard = 1;
                o->id_37C = id2;
                changed = 1;
                o->next_384 = 0xFFFF;
            }
        }
        if (changed == 0) {
            return;
        }
    }
    fx = &o->w_370;
    if (o->want_38C != o->cnt_388) {
        o->cnt_388 = o->want_38C;
        func_08C178((int)o->owner_59C->sub_48, fx);
        func_08C1E8(fx, (unsigned char)o->cnt_388);
        func_08C138((int)o->owner_59C->sub_48, fx);
    }
    func_089F80(o->owner_59C->cfg_40->recs_04[o->owner_59C->idx_44].tab_08[0] + (o->id_37C << 6), (char *)o->owner_59C->sub_48 + 0xAC);
    if (hard != 0) {
        func_08C288(fx, (char *)o->owner_59C->sub_48 + 0xAC, 0.0f, -1.0f);
        return;
    }
    func_08C288(fx, (char *)o->owner_59C->sub_48 + 0xAC, 0.0f, 0.0f);
    func_088D60(o->w_378 + 0x14, 0, 0.10000000149011612f);
}
