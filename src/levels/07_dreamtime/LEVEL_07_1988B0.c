/* LEVEL_07:0x1988B0 -- on first run copies a global position into the linked body and marks the object started, then asks a helper about the first link and passes positions to a handler (the global one when the helper answers, the body's own when its flag bit is set). */
typedef struct { float x; float y; float z; } Vec3;
typedef struct { char pad00[0x30]; Vec3 pos; char pad3C[0x28]; unsigned int flags; } Body;
typedef struct { void *res; Body *body; } Rec;
typedef struct { char pad00[0x46]; unsigned char started; char pad47[0xD]; Rec *rec; } Obj;
typedef struct { char pad00[0x30]; Vec3 pos; } Marker;

extern Vec3 D_00238DF0;
extern Marker D_0024AA40;
extern int func_01AA20(void);
extern int func_086800(void *res, int arg);
extern void func_198960(Obj *o, Vec3 *pos);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Mark(Obj *o, Marker *m)
{
    func_198960(o, &m->pos);
}

void func_1988B0(Obj *o)
{
    Rec *rec = o->rec;

    if (o->started == 0) {
        Copy3(&rec->body->pos.x, &D_00238DF0.x);
        o->started = 1;
    }
    if (func_086800(rec->res, func_01AA20())) {
        Mark(o, &D_0024AA40);
    }
    if (rec->body->flags & 1) {
        func_198960(o, &rec->body->pos);
    }
}
