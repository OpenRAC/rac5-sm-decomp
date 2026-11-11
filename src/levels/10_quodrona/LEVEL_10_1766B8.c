/* LEVEL_10:0x1766B8 -- scales the dot product of the object's direction with its owner's axis by 6, keeps only the positive part and hands it to the follow-up helper. */
extern float fabsf(float x);

typedef struct {
    char pad[0xE4];
    int idx;
} Self;

extern void func_173128(Self *s, float k);

static __inline__ float Dot3(float *a, float *b)
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

static __inline__ float Max(float a, float b)
{
    return (a + b + fabsf(b - a)) * 0.5f;
}

void func_1766B8(int unused, char *obj)
{
    float d;

    d = Dot3((float *)(obj + 0xCC), (float *)(*(char **)obj + 0x20)) * 6.0f;
    func_173128((Self *)obj, Max(d, 0.0f));
}
