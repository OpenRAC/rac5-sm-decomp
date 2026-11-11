typedef struct {
    char pad[0x260];
    int a260;
    int a264;
    float f268;
    float f26C[8];
} Rec;

extern int rand(void);

void func_1A43C0(Rec *r)
{
    int i = 0;
    int n = 4;
    float *p = r->f26C;

    r->a264 = 0;
    r->f268 = 0.5f;
    r->a260 = 0;
    do {
        i++;
        p[0] = (float)rand() * 4.6566124e-10f;
        p[1] = (float)rand() * 4.6566124e-10f;
        p += 2;
    } while (i != n);
}
