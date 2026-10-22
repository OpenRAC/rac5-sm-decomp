/* LEVEL_01:0x128DB8 -- scales the caller's nine-float matrix by three
   factors, one per row, and stores the result in the first matrix. */
typedef struct {
    float v[9];
} M3;

void func_128DB8(M3 *a0, void *a1, M3 *a2, float s, float t, float u)
{
    float x0 = a2->v[0];
    float x1 = a2->v[1];
    float x2 = a2->v[2];
    float x3 = a2->v[3];
    float x4 = a2->v[4];
    float x5 = a2->v[5];
    float x6 = a2->v[6];
    float x7 = a2->v[7];
    float x8 = a2->v[8];

    a0->v[0] = s * x0;
    a0->v[1] = s * x1;
    a0->v[2] = s * x2;
    a0->v[3] = t * x3;
    a0->v[4] = t * x4;
    a0->v[5] = t * x5;
    a0->v[6] = u * x6;
    a0->v[7] = u * x7;
    a0->v[8] = u * x8;
}
