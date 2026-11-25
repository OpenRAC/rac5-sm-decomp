/* LEVEL_17:0x15B9D0 -- placement copy of LEVEL_18_168040.c: placement copy of LEVEL_17_15B9D0.c: per-state update of an attached object: looks for a target while idle, follows it while active (refreshing the pooled bounding box and unregistering the previous entry), counts down in the timed state and finishes in the last state. */
typedef struct Obj Obj;

typedef struct {
    char pad0[4];
    char *ents;
    char pad8[0x3F - 8];
    unsigned char b3F;
} Model;

typedef struct {
    char pad0[0xC];
    int w0C;
    int w10;
    int w14;
} Ent;

typedef struct {
    char pad0[0xC0];
    char sub[0x2C];
    int w2C;
} Tgt;

typedef struct {
    char pad0[0xF4];
    int wF4;
} Cand;

typedef struct {
    unsigned short h0;
    char pad2;
    unsigned char b3;
    Obj *target;
} Slot;

typedef struct {
    Tgt *w0;
    char pad4[4];
    float f8;
    char padC[0x30 - 0xC];
    unsigned short h30;
    char pad32;
    unsigned char b33;
    Obj *w34;
    char pad38[0x48 - 0x38];
    unsigned char b48;
} Rec;

typedef struct {
    char pad[0x68];
} Pool;

struct Obj {
    char pad0[0x40];
    Model *model;
    unsigned char b44;
    unsigned char b45;
    char pad46[0x58 - 0x46];
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
    char pad68[8];
    float f70;
};

extern Pool D_001CF6F8[];

extern Cand *func_112478(unsigned int i);
extern int func_15D1C0(Obj *a, Cand *b);
extern void func_037618(Cand *o);
extern char *func_10E8A8(int id);
extern void func_0A3800(void *a, void *b, void *c, void *d, void *e);
extern unsigned int func_079F40(int mode);
extern void func_15C488(Obj *o, Cand *t);
extern void func_15C9E8(Obj *o);
extern unsigned int func_079E00(void);
extern void func_079DA0(unsigned int value);
extern int func_15D160(Obj *e);
extern void func_15C368(Obj *o);
extern void func_15BDE0(Obj *o, char *sub, float dt);
extern int func_074FD0(float *lo, float *hi, Obj *t);
extern void func_086E80(Pool *pool, unsigned int index);
extern void func_086898(Pool *pool, Slot *slot, float *lo, float *hi, unsigned int flags);
extern void func_15CC50(Obj *o);

void func_15B9D0(Obj *o, float dt)
{
    Rec *rec;
    Cand *c;
    Tgt *t;
    char *p;
    int oa;
    int oa2;
    Pool *old;
    float dx;
    float dz;
    Slot *s;
    Model *model;
    Ent *ent;
    unsigned int i;
    unsigned int f;
    unsigned int alt;
    unsigned int base;
    unsigned int fl;
    int big;
    float lo[4];
    float hi[4];

    rec = o->rec;
    if (o->b45 == 0) {
        if (0.5f <= rec->f8) {
            for (i = 0; i < 2; i++) {
                c = func_112478(i);
                if (c != 0 && func_15D1C0(o, c) != 0) {
                    func_037618(c);
                    func_0A3800((void *)(c->wF4 - 1), 0, func_10E8A8(0x252), 0, 0);
                    if ((func_079F40(2) & 0x1000) != 0) {
                        func_15C488(o, c);
                        break;
                    }
                }
            }
        }
        func_15C9E8(o);
    } else if (o->b45 == 1) {
        t = rec->w0;
        p = (char *)t + 0xC0;
        func_037618((Cand *)t);
        if (func_079E00() != 0x200) {
            func_079DA0(0x10);
        }
        if (func_15D160(o) != 0) {
            goto done;
        }
        func_15C368(o);
        if (0.5f <= rec->f8 && *(int *)(p + 0x2C) == 0x10) {
            func_15BDE0(o, p, dt);
        }
        func_15C9E8(o);
        s = (Slot *)&rec->h30;
        base = o->flags & 0x1420;
        alt = base | 1;
        f = base | 0x81;
        model = o->model;
        ent = (Ent *)(model->ents + o->b44 * 0x34);
        if (ent->w0C == 0) {
            f = alt;
        }
        if (ent->w10 != 0) {
            f |= 0x100;
        }
        if (ent->w14 != 0) {
            f |= 0x200;
        }
        if (model->b3F == 1) {
            f |= 0x800;
        }
        if (((unsigned int)o->flags >> 3) & 1) {
            f |= 0x400;
        }
        fl = f | 0x1010;
        if (func_074FD0(lo, hi, s->target) != 0) {
            dx = hi[0] - lo[0];
            dz = hi[2] - lo[2];
            if (dx > 8.0f || dz > 8.0f) {
                big = 1;
            } else {
                big = 0;
            }
            oa = s->b3 * 0x68;
            oa += (int)D_001CF6F8;
            old = (Pool *)oa;
            if (s->h0 != 0xFFFF) {
                func_086E80(old, s->h0);
                s->h0 = 0xFFFF;
            }
            s->b3 = big;
            func_086898(&D_001CF6F8[big], s, lo, hi, fl);
            goto done;
        }
        oa2 = s->b3 * 0x68;
        oa2 += (int)D_001CF6F8;
        if (rec->h30 != 0xFFFF) {
            func_086E80((Pool *)oa2, rec->h30);
            rec->h30 = 0xFFFF;
        }
    } else if (o->b45 == 2) {
        if (60.0f < o->f70) {
            o->b45 = 3;
        }
    } else if (o->b45 == 3) {
        func_15CC50(o);
    }
done:
    rec->b48 = o->b45;
}
