/* LEVEL_02.REL:0x187040 -- packs the two endpoints and the half-way factor
   into the eight-slot record the trace routine expects. */
typedef struct {
    float x;
    float y;
    float z;
} Vec;

void func_0F33A8(int a0, float *b, int a2);

void func_187040(int a0, Vec *a1, Vec *a2)
{
    float b[8];

    b[0] = a1->x;
    b[1] = a1->y;
    b[2] = a1->z;
    b[3] = a2->x;
    b[4] = a2->y;
    b[5] = a2->z;
    b[6] = 0.5f;
    b[7] = 0.0f;
    func_0F33A8(a0, b, 0);
}
