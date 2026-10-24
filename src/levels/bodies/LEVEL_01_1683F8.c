typedef struct {
    float f00;
    float f04;
    float f08;
    float f0C;
} V;

typedef struct {
    char pad[0x54];
    V *p54;
} S;

void func_1683F8(S *s, V *src)
{
    V *d = s->p54;

    d->f00 = src->f00;
    d->f04 = src->f04;
    d->f08 = src->f08;
    d->f0C = src->f0C;
}
