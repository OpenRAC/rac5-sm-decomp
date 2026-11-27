/* LEVEL_17:0x113998 -- placement copy of LEVEL_16_114208.c: copies the active 16-float record into a destination. */
typedef struct { float f[18]; } Rec;
extern int D_002D0C60;
extern Rec D_002D0988[];
extern Rec D_001C0100;
extern int func_114510(void *record);

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

void func_113998(void *record, Rec *dst)
{
    if (D_002D0C60)
        copy_rec(dst, &D_002D0988[func_114510(record)]);
    else
        copy_rec(dst, &D_001C0100);
}
