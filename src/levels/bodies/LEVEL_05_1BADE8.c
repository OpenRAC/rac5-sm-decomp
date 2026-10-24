typedef struct {
    char pad[0x2C];
    float f2C;
} T;

void func_1248C8(float *buf, int a1, int a2, float f0, float f1, float f2);
void func_0322E0(void *a, float *b, float *c);

void *func_1BADE8(void *s, int b, int c, T *p, int e)
{
    float buf[11];

    func_1248C8(buf, 0, e, p->f2C, p->f2C, p->f2C);
    func_0322E0(s, buf, buf + 9);
    return (char *)s + 0x70;
}
