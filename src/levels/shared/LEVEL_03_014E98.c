/* LEVEL_03:0x014E98 -- computes the axis-aligned bounds of the record's points: starts from +-2000 and folds every point into a running minimum and maximum (written as half the sum plus or minus the absolute difference), then stores the two corners. */
extern float fabsf(float);

typedef struct {
    float x;
    float y;
    float z;
    float w;
} Vec4;

typedef struct {
    char pad00[4];
    Vec4 *pts;
    char pad08[0x14 - 8];
    unsigned short count;
} Rec;

void func_014E98(float *min_out, float *max_out, Rec *r)
{
    float lx = 2000.0f;
    float ly = 2000.0f;
    float lz = 2000.0f;
    float hx = -2000.0f;
    float hy = -2000.0f;
    float hz = -2000.0f;
    Vec4 *p;
    Vec4 *end;
    float d0, d1, d2, d3, d4, d5;

    p = r->pts;
    end = p + r->count;
    while (p != end) {
        d3 = p->x - lx;
        d4 = p->y - ly;
        d5 = p->z - lz;
        d0 = p->x - hx;
        d1 = p->y - hy;
        d2 = p->z - hz;
        lx = (lx + p->x - fabsf(d3)) * 0.5f;
        ly = (ly + p->y - fabsf(d4)) * 0.5f;
        lz = (lz + p->z - fabsf(d5)) * 0.5f;
        hx = (hx + p->x + fabsf(d0)) * 0.5f;
        hy = (hy + p->y + fabsf(d1)) * 0.5f;
        hz = (hz + p->z + fabsf(d2)) * 0.5f;
        p++;
    }
    min_out[0] = lx;
    min_out[1] = ly;
    min_out[2] = lz;
    max_out[0] = hx;
    max_out[1] = hy;
    max_out[2] = hz;
}
