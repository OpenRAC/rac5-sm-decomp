/* LEVEL_02:0x179F68 -- placement copy of LEVEL_01_165558.c: per-frame step of an effect object: counts the record's delay down, spawns the pending marker when flagged, ages the object, and while alive follows its linked target (copying its pose when the target allows it), eases the record's value towards its limit and notifies the follow-ups. */
typedef struct Obj Obj;

typedef struct Link {
    char pad_00[0x40];
    struct Cfg *cfg_40;
    char pad_44[0x20];
    unsigned int flags_64;
} Link;

typedef struct Cfg {
    char pad_00[0x10];
    struct Sub *sub_10;
} Cfg;

typedef struct Sub {
    char pad_00[0x3C];
    unsigned int w_3C;
} Sub;

typedef struct {
    char pad_00[4];
    float f_04;
    float f_08;
    float f_0C;
    int w_10;
    Link *link_14;
    float pose_18[12];
    float pose_48[1];
} Rec;

typedef struct {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Marker;

struct Obj {
    char pad_00[0x58];
    Rec *rec;
    char pad_5C[8];
    int flags_64;
    char pad_68[8];
    float f_70;
};

extern unsigned int func_024B98(unsigned int index);
extern void func_0872A0(Obj *o, Marker *m, int e, int f, int g, int h, int i, int j, float a, float b, float c, float d);
extern void func_082F58(Obj *o, int state);
extern void func_12E8A8(Obj *o, float *pose, Link *b);
extern void func_129ED0(float *dst, Link *src);
extern void func_17A0D8(Obj *o);
extern void func_17A2C0(Obj *o);

void func_179F68(Obj *o)
{
    Rec *rec;
    Marker *m;
    Link *link;
    int ok;
    float t;
    float lim;
    float u;

    rec = o->rec;
    if (rec->w_10 != 0) {
        rec->w_10 = rec->w_10 - 1;
        return;
    }
    if (o->flags_64 & 0x20) {
        o->flags_64 &= ~0x20;
        m = (Marker *)func_024B98(7);
        if (m != 0) {
            func_0872A0(o, m, 0, 0, 0, 0, 0, 1, m->f_14, m->f_18, m->f_1C, m->f_20);
        }
    }
    o->f_70 = o->f_70 - 1.0f;
    if (o->f_70 < 0.0f) {
        func_082F58(o, 1);
        return;
    }
    link = rec->link_14;
    ok = 0;
    if (link != 0) {
        if ((link->flags_64 & 0xF) != 1) {
            func_082F58(o, 1);
            return;
        }
        if (link->cfg_40->sub_10->w_3C & 8) {
            func_12E8A8(o, rec->pose_48, link);
            func_129ED0(rec->pose_18, rec->link_14);
            ok = 1;
        }
    }
    t = rec->f_04;
    lim = rec->f_0C;
    if (t < lim) {
        u = t + rec->f_08;
        rec->f_04 = u;
        if (lim < u) {
            rec->f_04 = lim;
        }
        ok = 1;
    }
    if (ok) {
        func_17A0D8(o);
    }
    func_17A2C0(o);
}
