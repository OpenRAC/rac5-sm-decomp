/* LEVEL_16:0x114208 -- copies the active 16-float record into a destination. */
typedef struct { float f[18]; } Rec;
extern int D_002DF960;
extern Rec D_002DF688[];
extern Rec D_001CCC80;
extern int func_114D80(void *record);

static inline void copy_rec(Rec *dst, Rec *src)
{
    dst->f[8] = src->f[8];
    dst->f[9] = src->f[9];
    dst->f[10] = src->f[10];
    dst->f[11] = src->f[11];
    dst->f[0] = src->f[0];
    dst->f[1] = src->f[1];
    dst->f[2] = src->f[2];
    dst->f[3] = src->f[3];
    dst->f[4] = src->f[4];
    dst->f[5] = src->f[5];
    dst->f[6] = src->f[6];
    dst->f[7] = src->f[7];
    dst->f[12] = src->f[12];
    dst->f[13] = src->f[13];
    dst->f[14] = src->f[14];
    dst->f[15] = src->f[15];
}

void func_114208(void *record, Rec *dst)
{
    if (D_002DF960)
        copy_rec(dst, &D_002DF688[func_114D80(record)]);
    else
        copy_rec(dst, &D_001CCC80);
}
