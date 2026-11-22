/* LEVEL_05:0x1B6618 -- audio-meter state handler: starts when the owner's cue fires, decays its timer while idle, and while running plays the four level voices. */
typedef struct {
    int w0;
    float f4;
    float f8;
    float fC;
    float f10;
    float timer;
} Owner;

typedef struct {
    char pad_00[0x45];
    unsigned char b45;
    char pad_46[0x54 - 0x46];
    Owner *owner;
} Obj;

extern char D_00220E40[];
static __inline__ char *Cues(void)
{
    return D_00220E40;
}

extern int func_082088(int a, char *tbl);
extern void func_049AB8(void);
extern void func_0036E8(float x, float y, int a, int b);
extern void func_003718(float x, float y, int a, int b);
extern void func_003888(float x, float y, int a, int b);
extern void func_003748(float x, float y, int a, int b);
extern void func_003BA0(int v);

void func_1B6618(Obj *o)
{
    Owner *ow;
    float t;

    ow = o->owner;
    if (o->b45 == 0 && func_082088(ow->w0, Cues() + 0x30) != 0) {
        o->b45 = 1;
        ow->timer = 0.016666668f;
    }
    if (o->b45 == 1) {
        if (((int (*)(void))func_049AB8)() == 0 && func_082088(ow->w0, Cues() + 0x30) == 0) {
            t = ow->timer;
            ow->timer = t - 0.03333333507180214f;
            if (t - 0.03333333507180214f < 0.0f)
                o->b45 = 0;
        } else {
            ow->timer = 0.016666668f;
        }
        if (o->b45 == 1) {
            if (0.0f < ow->f4)
                func_0036E8(ow->f4, 1.0f, 100, 2);
            if (-10.0f < ow->f8)
                func_003718(ow->f8, 1.0f, 100, 2);
            if (-10.0f < ow->fC)
                func_003888(ow->fC, 1.0f, 100, 2);
            func_003748(ow->f10, 0.05235988274216652f, 100, 0);
            func_003BA0(0);
        }
    }
}
