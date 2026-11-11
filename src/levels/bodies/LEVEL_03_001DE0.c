typedef struct {
    float f00;
    float f04;
    float f08;
} V;

extern void func_001D98(float *out, char *sub, float p, float q, float r, float s);

void func_001DE0(V *dst, char *sub, V *src, float p, float q, float r, float s)
{
    float buf[4];

    func_001D98(buf, sub, p, q, r, s);
    dst->f00 = src->f00 + buf[0];
    dst->f04 = src->f04 + buf[1];
    dst->f08 = src->f08 + buf[2];
}
