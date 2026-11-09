/* LEVEL_17:0x1651C0 -- placement copy of LEVEL_16_16EA20.c: steps a bobbing height for an object and toggles a flag on a hit. */
struct Bob {
    char pad[0xC];
    float f0C;
    float f10;
    float f14;
    float y;
    char pad1C[4];
    unsigned char flag;
};
struct Obj {
    char pad[0x30];
    float pos[3];
    char pad3C[0x1C];
    struct Bob *bob;
};
extern char D_001C8FC8[];
extern char D_002D6AC8[];
extern int func_0140B0(float *v, float *a, float *b, float *c, float x, float y, char *d, int e);
extern void func_103708(struct Obj *a, struct Obj *b, char *c);

static inline void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_1651C0(struct Obj *obj)
{
    float v[4];
    struct Bob *b;
    b = obj->bob;
    Copy3(v, obj->pos);
    v[1] = b->y;
    v[3] = 1.0f;
    if (func_0140B0(v, &b->f10, &b->f0C, &b->f14, 0.033333335f, 0.2f, D_001C8FC8, b->flag != 0))
        b->flag = !b->flag;
    func_103708(obj, obj, D_002D6AC8);
    obj->pos[1] = v[1] + 0.2f + 0.4f;
    b->y = v[1];
}
