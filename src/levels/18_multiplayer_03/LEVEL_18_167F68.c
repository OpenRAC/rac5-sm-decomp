typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} V;

extern int D_001D72D8;

void func_103040(void *a, void *b, void *c);

void func_167F68(V *src, void *a1, V *dst)
{
    func_103040(a1, src, &D_001D72D8);
    dst->f00 = src->f00;
    dst->f04 = src->f04;
    dst->f08 = src->f08;
    dst->f0C = src->f0C;
}
