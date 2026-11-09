/* LEVEL_03:0x1A1D18 -- tests whether an object reached its target and advances its state. */
typedef struct {
    char pad0[0x30];
    float pos[3];
    char pad1[0x45 - 0x3C];
    unsigned char state;
    unsigned char kind;
    char pad2[0x54 - 0x47];
    struct Sub *sub;
} Obj;

struct Sub {
    char pad0[0x4C];
    float f4C;
    char pad1[0x9D - 0x50];
    unsigned char idx;
    char pad2;
    unsigned char flag;
    unsigned char cnt;
    char pad3[0xB1 - 0xA1];
    unsigned char b1;
};

extern float D_003B1FD0;

extern void func_01A0B0(float *out);
extern void func_1A5B08(char *item);
extern void func_19FDD0(Obj *o, int s);
extern void func_1A24F0(Obj *o);

static inline void VecSub(float *r, float *a, float *b)
{
    r[0] = a[0] - b[0];
    r[1] = a[1] - b[1];
    r[2] = a[2] - b[2];
}

int func_1A1D18(Obj *o)
{
    struct Sub *s;
    float v[3];
    float d[3];
    float dist;

    s = o->sub;
    func_01A0B0(v);
    VecSub(d, v, o->pos);
    dist = d[0] * d[0];
    dist += d[1] * d[1];
    dist += d[2] * d[2];
    if (o->kind != 1 && o->kind != 3) {
        return 0;
    }
    if (dist <= 56.25f && o->state != 0x1A) {
        if (s->idx != 0xFF) {
            char **arr = (char **)((char *)s + (s->flag == 0 ? 0xE0 : 0xF8));
            func_1A5B08(arr[s->idx]);
            s->idx = 0xFF;
            s->b1 = 0;
        }
        func_19FDD0(o, 0x1A);
        return 1;
    }
    if (s->f4C * D_003B1FD0 <= 1.0f - (float)o->kind * 0.25f - (float)(s->cnt + 1) * 0.15f) {
        func_1A24F0(o);
        func_19FDD0(o, 0x1B);
        s->cnt++;
        return 1;
    }
    return 0;
}
