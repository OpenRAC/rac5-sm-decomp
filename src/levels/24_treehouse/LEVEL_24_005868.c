/* LEVEL_24:0x005868 -- transforms a 3-vector with a 2x3 matrix row.
   The six products are computed first, then the three sums. */
typedef struct {
    float a;
    float b;
    float c;
    float x;
    float y;
    float z;
} Row;

typedef struct {
    char pad[0x54];
    Row row;
    char pad2[0x298 - 0x6C];
    float f298;
    float f29C;
} Mat;

extern Mat *D_001BFED4;

void func_005868(float *a0, float *a1, float f12)
{
    Mat *m = D_001BFED4;
    Row *r = &m->row;
    float q = m->f29C * f12;
    float p = m->f298 * f12;
    float t0 = p * a1[0];
    float t1 = q * r->x;
    float t2 = p * a1[1];
    float t3 = q * r->y;
    float t4 = p * a1[2];
    float t5 = q * r->z;

    a0[0] = t0 + t1;
    a0[1] = t2 + t3;
    a0[2] = t4 + t5;
}
