typedef struct {
    char pad0[0x34];
    float f34;
    char pad1[0x1B8 - 0x38];
    float f1B8;
} S;

extern int D_0018AD78;

int func_03F6D0(S *s, float *a, float *b, float *c, float f0, int n, float f1);
void func_05AAF8(S *s);

void func_059B58(S *s)
{
    float a = 0.0f;
    float b = 0.0f;
    float c;

    if (func_03F6D0(s, &a, &b, &c, 0.0f, 0, 0.7f) == 0) {
        s->f34 = a;
        D_0018AD78 = 5;
        s->f1B8 = 0.0f;
        func_05AAF8(s);
    }
}
