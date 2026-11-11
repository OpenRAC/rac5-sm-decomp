/* LEVEL_17:0x14E7A8 -- probes movement for an object and applies the resulting position. */
typedef struct Hit { char pad[0xC]; unsigned short flags; char pad2[0x12]; } Hit;
typedef struct Sub { char pad[0x48]; char b48; } Sub;
typedef struct Obj {
    char pad0[0x30];
    float x, y, z;
    char pad1[0x58 - 0x3C];
    Sub *p58;
    char pad2[0x70 - 0x5C];
    int w70;
} Obj;
extern int func_01D618(float f, float *a, float *b, float *c, float *d, float *e, Hit *h, float *p, int k, int m, int n);
extern int func_14E2D0(Obj *o, float *v, float *p, Hit *h);
int func_14E7A8(Obj *self)
{
    Hit hit;
    float out[4];
    float v40[4];
    float v50[4];
    float v60[4];
    float *pos = &self->x;
    int ret = 0;
    Sub *o = self->p58;
    o->b48 = 0;
    if (func_01D618(0.25f, pos, out, v40, v50, v60, &hit, pos, 0x38, 0, 0)) {
        if (hit.flags & 8) {
            o->b48 = 1;
            ret = 1;
            self->w70 = 0;
        } else if (func_14E2D0(self, out, pos, &hit)) {
            ret = 1;
            self->x = out[0];
            pos[1] = out[1];
            pos[2] = out[2];
        }
    }
    return ret;
}
