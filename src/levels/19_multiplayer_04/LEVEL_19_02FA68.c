/* LEVEL_19:0x02FA68 -- placement copy of LEVEL_08_038E20.c: calls a helper with a shifted flag, then copies three table floats and one source float into a record. */

struct Dst038E20 {
    char pad00[4];
    float f04;
    float f08;
    float f0C;
    float f10;
};

struct Src038E20 {
    unsigned char b00;
    char pad01[0xF];
    float f10;
};

extern float D_001CDF18[3];
extern void func_02F5C0(struct Dst038E20 *d, int x, int m);

void func_02FA68(struct Dst038E20 *d, int x, struct Src038E20 *s)
{
    float *p;

    func_02F5C0(d, x, 1 << s->b00);
    d->f04 = D_001CDF18[0];
    p = &d->f04;
    p[1] = D_001CDF18[1];
    p[2] = D_001CDF18[2];
    d->f10 = s->f10;
}
