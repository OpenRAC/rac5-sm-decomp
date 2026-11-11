/* LEVEL_16:0x0306D8 -- placement copy of LEVEL_08_038E20.c: calls a helper with a shifted flag, then copies three table floats and one source float into a record. */

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

extern float D_001CCD18[3];
extern void func_030230(struct Dst038E20 *d, int x, int m);

void func_0306D8(struct Dst038E20 *d, int x, struct Src038E20 *s)
{
    float *p;

    func_030230(d, x, 1 << s->b00);
    d->f04 = D_001CCD18[0];
    p = &d->f04;
    p[1] = D_001CCD18[1];
    p[2] = D_001CCD18[2];
    d->f10 = s->f10;
}
