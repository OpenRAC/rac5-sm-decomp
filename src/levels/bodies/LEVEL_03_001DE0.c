typedef struct {
    float f00;
    float f04;
    float f08;
} V;

void func_001D98(float *buf);

void func_001DE0(V *dst, void *b, V *src)
{
    float buf[4];

    func_001D98(buf);
    dst->f00 = src->f00 + buf[0];
    dst->f04 = src->f04 + buf[1];
    dst->f08 = src->f08 + buf[2];
}
