/* LEVEL_08:0x1CA8D0 -- copies the sixteen floats of the nested record at 0x58 (offset 0x34) into the destination matrix, middle row first. */
typedef struct {
    float f[16];
} Vec;

void func_1CA8D0(int a0, Vec *a1)
{
    Vec *d = (Vec *)(*(int *)(a0 + 0x58) + 0x34);

    a1->f[8] = d->f[8];
    a1->f[9] = d->f[9];
    a1->f[10] = d->f[10];
    a1->f[11] = d->f[11];
    a1->f[0] = d->f[0];
    a1->f[1] = d->f[1];
    a1->f[2] = d->f[2];
    a1->f[3] = d->f[3];
    a1->f[4] = d->f[4];
    a1->f[5] = d->f[5];
    a1->f[6] = d->f[6];
    a1->f[7] = d->f[7];
    a1->f[12] = d->f[12];
    a1->f[13] = d->f[13];
    a1->f[14] = d->f[14];
    a1->f[15] = d->f[15];
}
