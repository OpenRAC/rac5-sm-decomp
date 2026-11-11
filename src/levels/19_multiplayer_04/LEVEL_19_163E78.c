typedef struct {
    float a;
    float b;
    float c;
    float d;
} V;

extern char D_1D6E18;
extern void func_104E88(void *x, void *y, void *z);

void func_163E78(V *src, void *mid, V *dst)
{
    func_104E88(mid, src, &D_1D6E18);
    dst->a = src->a;
    dst->b = src->b;
    dst->c = src->c;
    dst->d = src->d;
}
