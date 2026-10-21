/* LEVEL_04:0x019E18 -- copies four floats of the caller's vector into the
   global record and writes a constant in one of its fields. */
typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

typedef struct {
    float v[4];
    float pad[24];
    float e;
} Rec;

extern Rec D_0024A360;

void func_019E18(V4 *src)
{
    D_0024A360.v[0] = src->x;
    D_0024A360.v[1] = src->y;
    D_0024A360.v[2] = src->z;
    D_0024A360.v[3] = src->w;
    D_0024A360.e = 0.6f;
}
