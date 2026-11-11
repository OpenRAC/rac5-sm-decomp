/* 112A90 -- read the fields directly. */
typedef struct {
    char pad[0x34];
    float f_34; float f_38; float f_3C; float f_40; float f_44; float f_48;
} Bounds;
typedef struct { float f_00; float f_04; float f_08; } Vec;
typedef struct { Bounds *p; } Holder;
extern Holder D_001A7EB8;
int func_0F2CB8(Vec *a0)
{
    Bounds *t = D_001A7EB8.p;
    int r = 0;

    if (a0->f_00 < t->f_34) r = 1;
    if (a0->f_04 < t->f_38) r |= 2;
    if (a0->f_08 < t->f_3C) r |= 4;
    if (t->f_40 < a0->f_00) r |= 8;
    if (t->f_44 < a0->f_04) r |= 0x10;
    if (t->f_48 < a0->f_08) r |= 0x20;
    return r;
}
