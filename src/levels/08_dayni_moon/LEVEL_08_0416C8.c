/* LEVEL_08:0x0416C8 -- placement copy of LEVEL_01_03C5C0.c: when the object is at rest (zero speed, no pending action, flag set, all three drift components negligible) snapshots its 16-float transform block into the saved slot and publishes its mode word. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    Vec4 a;
    Vec4 b;
    Vec4 c;
    Vec4 d;
} Xform;

typedef struct {
    Xform xf;
    char pad40[0xC0];
    short s100;
    char pad102[0x66];
    int w168;
    char pad16C[0xB4];
    float f220;
    char pad224[0x18];
    float f23C;
    char pad240[0x30];
    float f270;
    char pad274[0xC0];
    int w334;
    char pad338[0x628];
    unsigned long long flags960;
    char pad968[0x13C];
    float drift[3];
    char padAB0[0x2C];
    Xform saved;
} Obj;

extern int D_0023D5E8;

void func_0416C8(Obj *o)
{
    Xform *d;

    if (o->s100 == 0x29) {
        return;
    }
    if (o->f270 < 0.009999999776482582f) {
        if (o->w168 == 0) {
            if (o->f23C < 0.0010000000474974513f) {
                if (__builtin_fabsf(o->f220) < 0.0010000000474974513f) {
                    if ((o->flags960 & 0x100000000ull) != 0) {
                        if (__builtin_fabsf(o->drift[0]) < 0.0010000000474974513f) {
                            if (__builtin_fabsf(o->drift[1]) < 0.0010000000474974513f) {
                                if (__builtin_fabsf(o->drift[2]) < 0.0010000000474974513f) {
                                    d = &o->saved;
                                    d->c.x = o->xf.c.x;
                                    d->c.y = o->xf.c.y;
                                    d->c.z = o->xf.c.z;
                                    d->c.w = o->xf.c.w;
                                    d->a.x = o->xf.a.x;
                                    d->a.y = o->xf.a.y;
                                    d->a.z = o->xf.a.z;
                                    d->a.w = o->xf.a.w;
                                    d->b.x = o->xf.b.x;
                                    d->b.y = o->xf.b.y;
                                    d->b.z = o->xf.b.z;
                                    d->b.w = o->xf.b.w;
                                    d->d.x = o->xf.d.x;
                                    d->d.y = o->xf.d.y;
                                    d->d.z = o->xf.d.z;
                                    d->d.w = o->xf.d.w;
                                    D_0023D5E8 = o->w334;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
