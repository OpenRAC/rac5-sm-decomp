/* LEVEL_23:0x17D890 -- placement copy of LEVEL_22_130BB0.c: resets a sub-object: four vectors from a float triple, then clears tables and flags. */

typedef struct Sub22_130BB0 {
    float vec_00[4][4];
    unsigned char pad_40[0x10];
    int f_50[4];
    int f_60[4];
    unsigned char pad_70[0x20];
    unsigned char f_90[4];
    int f_94;
    int f_98;
    int f_9C;
    unsigned char pad_A0[0xE];
    unsigned char f_AE;
    unsigned char f_AF;
    unsigned char f_B0;
    unsigned char pad_B1[5];
    unsigned char f_B6;
    unsigned char f_B7;
    unsigned char f_B8;
    unsigned char f_B9;
} Sub22_130BB0;

typedef struct Obj22_130BB0 {
    unsigned char pad_00[0x58];
    Sub22_130BB0 *p_58;
} Obj22_130BB0;

extern float D_001EAFD8[3];

void func_17D890(Obj22_130BB0 *o) {
    Sub22_130BB0 *s;
    int *p50;
    int *p60;
    unsigned char *p90;
    float *v;
    unsigned char i;

    s = o->p_58;
    s->f_AE = 0;
    p50 = s->f_50;
    p90 = s->f_90;
    p60 = s->f_60;
    i = 0;
    do {
        v = (float *)((i << 4) + (int)s);
        v[0] = D_001EAFD8[0];
        v[1] = D_001EAFD8[1];
        v[2] = D_001EAFD8[2];
        *(int *)((char *)p50 + (i << 2)) = 0;
        *(unsigned char *)((char *)p90 + i) = 0;
        *(int *)((char *)p60 + (i << 2)) = 0;
        i++;
    } while (i < 4);
    s->f_94 = 0;
    s->f_98 = 0;
    s->f_AF = 0;
    s->f_B0 = 0;
    s->f_B6 = 0;
    s->f_B7 = 0;
    s->f_B8 = 0;
    s->f_B9 = 0;
    s->f_9C = 0;
}
