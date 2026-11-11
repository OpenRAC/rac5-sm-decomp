typedef struct {
    float v[19];
} Lim;

extern Lim *D_001B5D38;

int func_0F1EE0(float *a0)
{
    Lim *lim = D_001B5D38;
    int flags = 0;
    if (a0[0] < lim->v[13]) flags = 1;
    if (a0[1] < lim->v[14]) flags |= 2;
    if (a0[2] < lim->v[15]) flags |= 4;
    if (lim->v[16] < a0[0]) flags |= 8;
    if (lim->v[17] < a0[1]) flags |= 0x10;
    if (lim->v[18] < a0[2]) flags |= 0x20;
    return flags;
}
