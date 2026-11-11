/* LEVEL_20:0x001970 -- adds a freshly sampled offset to the record and
   stores the sum in the first argument. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

extern void func_001928(float *out, char *sub, float p, float q, float r, float s);

void func_001970(V3 *a0, char *sub, V3 *a2, float p, float q, float r, float s)
{
    float t[4];

    func_001928(t, sub, p, q, r, s);
    a0->x = a2->x + t[0];
    a0->y = a2->y + t[1];
    a0->z = a2->z + t[2];
}
