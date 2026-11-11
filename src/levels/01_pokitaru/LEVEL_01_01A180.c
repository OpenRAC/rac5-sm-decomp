/* LEVEL_01:0x01A180 -- copies the caller's sixteen-float record into the
   level's stored record, in the retail's order (the first four stores are
   the fields 8..11, then 0..7, then 12..15). */
typedef struct {
    float f[16];
} Rec;

extern Rec D_22FB70;

void func_01A180(Rec *a0)
{
    D_22FB70.f[8] = a0->f[8];
    D_22FB70.f[9] = a0->f[9];
    D_22FB70.f[10] = a0->f[10];
    D_22FB70.f[11] = a0->f[11];
    D_22FB70.f[0] = a0->f[0];
    D_22FB70.f[1] = a0->f[1];
    D_22FB70.f[2] = a0->f[2];
    D_22FB70.f[3] = a0->f[3];
    D_22FB70.f[4] = a0->f[4];
    D_22FB70.f[5] = a0->f[5];
    D_22FB70.f[6] = a0->f[6];
    D_22FB70.f[7] = a0->f[7];
    D_22FB70.f[12] = a0->f[12];
    D_22FB70.f[13] = a0->f[13];
    D_22FB70.f[14] = a0->f[14];
    D_22FB70.f[15] = a0->f[15];
}
