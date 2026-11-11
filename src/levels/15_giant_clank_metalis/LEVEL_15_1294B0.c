/* LEVEL_15:0x1294B0 -- computes projected weights and per-channel start/delta values for a color fade. */
typedef union Col {
    unsigned int w;
    struct {
        unsigned short lo;
        unsigned short hi;
    } h;
} Col;

typedef struct Obj {
    char pad_00[0x14];
    float f_14;
    char pad_18[0x10];
    float f_28;
    float f_2C;
    Col end;
    Col beg;
    char pad_38[0xC];
    float f_44;
    float f_48;
    float f_4C;
    float f_50;
    float f_54;
    float f_58;
    float f_5C;
    float f_60;
    float f_64;
} Obj;

extern void func_128A48(float *v, float a, float b);

void func_1294B0(Obj *o)
{
    float v[2];
    float inv;
    unsigned int t;

    inv = 1.0f / o->f_14;
    func_128A48(v, o->f_28 * inv, o->f_2C * inv);
    o->f_48 = v[0] * 255.0f;
    o->f_4C = v[1] * 255.0f;
    o->f_44 = -(o->f_48 + o->f_4C);
    t = o->beg.w;
    o->f_50 = (float)(t & 0xFF);
    t = o->end.w;
    o->f_54 = (float)(t & 0xFF) - o->f_50;
    t = o->beg.w;
    o->f_58 = (float)((t >> 8) & 0xFF);
    t = o->end.w;
    o->f_5C = (float)((t >> 8) & 0xFF) - o->f_58;
    t = o->beg.h.hi;
    o->f_60 = (float)(t & 0xFF);
    t = o->end.h.hi;
    o->f_64 = (float)(t & 0xFF) - o->f_60;
}
