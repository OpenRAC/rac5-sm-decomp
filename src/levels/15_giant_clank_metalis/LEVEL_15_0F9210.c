/* LEVEL_15:0x0F9210 -- writes a vector as a shared base vector plus the record's direction scaled by its length. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

struct Rec {
    char pad0[0x24];
    float a[3];
    char pad30[0x10];
    float f40;
};

extern float D_002F3DEC[];

void func_0F9210(V3 *out, char *link)
{
    struct Rec *rec = *(struct Rec **)(link - 0x14);
    float *pa;
    float s;

    s = rec->f40;
    pa = rec->a;
    out->x = D_002F3DEC[0] + pa[0] * s;
    out->y = D_002F3DEC[1] + pa[1] * s;
    out->z = D_002F3DEC[2] + pa[2] * s;
}
