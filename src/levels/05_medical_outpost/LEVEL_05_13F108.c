/* LEVEL_05:13F108 -- copies the sixteen floats of the vector into the object
   at 0x58 of a0, plus 0x30. The retail order is 8..11, 0..7, 12..15. */
typedef struct {
    float f[16];
} Vec;

void func_13F108(int a0, Vec *a1)
{
    Vec *d = (Vec *)(*(int *)(a0 + 0x58) + 0x30);

    d->f[8] = a1->f[8];
    d->f[9] = a1->f[9];
    d->f[10] = a1->f[10];
    d->f[11] = a1->f[11];
    d->f[0] = a1->f[0];
    d->f[1] = a1->f[1];
    d->f[2] = a1->f[2];
    d->f[3] = a1->f[3];
    d->f[4] = a1->f[4];
    d->f[5] = a1->f[5];
    d->f[6] = a1->f[6];
    d->f[7] = a1->f[7];
    d->f[12] = a1->f[12];
    d->f[13] = a1->f[13];
    d->f[14] = a1->f[14];
    d->f[15] = a1->f[15];
}
