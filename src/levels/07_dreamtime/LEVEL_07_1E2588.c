typedef struct {
    float v;
    unsigned char flag;
} S;

extern S D_003AE5E0;

void func_1E2588(float arg, int unused)
{
    S *p = &D_003AE5E0;
    if (p->flag == 0) {
        float g = p->v + arg;
        p->v = g;
        if (g > 15.0f) {
            p->flag = 1;
        }
    }
}
