/* LEVEL_16:0x16CEE0 -- draws four overlapping text labels at a point just above an object. */

typedef struct Obj {
    char pad_00[0x30];
    float x;
    float y;
    float z;
} Obj;

extern char D_001CCD38[];

extern void func_0CA868(int mode, float *pos, char *text, unsigned int c1, unsigned int c2, float a, float b, float c, float d, float e, int z, int k1, int k2);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

void func_16CEE0(Obj *o)
{
    float pos[3];

    Copy3(pos, &o->x);
    pos[1] = pos[1] + 0.5f;
    func_0CA868(3, pos, D_001CCD38, 0xFF4080FF, 0x004080FF, 0.0f, 0.4f, 0.2f, -0.75f, 0.1f, 0, 3, 10);
    func_0CA868(2, pos, D_001CCD38, 0xFF4080FF, 0x004080FF, 0.0f, 0.4f, 0.2f, -0.75f, 0.1f, 0, 1, 10);
    func_0CA868(2, pos, D_001CCD38, 0xFF4080FF, 0x004080FF, 0.0f, 0.4f, 0.2f, -0.75f, 0.1f, 0, 1, 10);
    func_0CA868(1, pos, D_001CCD38, 0xFF4080FF, 0x004080FF, 0.0f, 0.2f, 0.2f, -0.15f, 0.1f, 0, 1, 0x30);
}
