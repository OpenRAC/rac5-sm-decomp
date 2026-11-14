/* LEVEL_03:0x1D4EA8 -- resolves a position for the object: when the linked record has no override it forwards everything to the lookup helper, otherwise it reads the object's position and writes it to both outputs and returns 1. */
typedef struct Rec { char pad00[0x44]; int w44; char pad48[0xA]; unsigned char b52; } Rec;
typedef struct Obj { char pad00[0x54]; Rec *f54; } Obj;
extern int func_031228(float *a, float *b, Obj *o, Rec *r, int w);
extern void func_0822C8(float *v, int arg);
int func_1D4EA8(float *out1, float *out2, Obj *o)
{
    Rec *r = o->f54;
    float v[3];
    float x, y, z;
    int res;
    if (r->b52 == 0) {
        res = func_031228(out1, out2, o, r, r->w44);
    } else {
        func_0822C8(v, (int)o);
        x = v[0]; y = v[1]; z = v[2];
        out1[0] = x;
        out1[1] = y;
        out1[2] = z;
        out2[0] = x;
        out2[1] = y;
        out2[2] = z;
        res = 1;
    }
    return res;
}
