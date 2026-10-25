typedef struct {
    float x, y, z;
} V;

typedef struct {
    char pad_00[0x30];
    V p;
    V n;
    V a;
    V b;
    float r[2];
} Obj;

extern void func_0D0380(void *a0, void *a1, int a2);
extern int func_000000(void);

void func_13EA10(Obj *a0, char *a1, int a2, V *a3)
{
    float *n;
    float *p;
    float *a;
    float *b;
    unsigned int i;

    func_0D0380(a0, a1 + 0x10, 2);
    n = &a0->n.x;
    p = &a0->p.x;
    a = &a0->a.x;
    b = &a0->b.x;
    n[0] = -a3->x;
    n[1] = -a3->y;
    n[2] = -a3->z;
    a[0] = p[0];
    a[1] = p[1];
    a[2] = p[2];
    b[0] = n[0];
    b[1] = n[1];
    b[2] = n[2];
    for (i = 0; i < 2; i++)
        a0->r[i] = (float)func_000000() * 4.6566123e-10f;
}
