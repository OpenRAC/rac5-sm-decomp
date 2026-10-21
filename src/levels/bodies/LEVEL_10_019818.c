/* LEVEL_10:0x019818 -- copies the sixteen floats of the caller's record
   into the level's stored record, four at a time. */
typedef struct {
    float f[16];
} Rec;

extern Rec D_00238F70;

void func_019818(Rec *a0)
{
    D_00238F70.f[8] = a0->f[8];
    D_00238F70.f[9] = a0->f[9];
    D_00238F70.f[10] = a0->f[10];
    D_00238F70.f[11] = a0->f[11];
    D_00238F70.f[0] = a0->f[0];
    D_00238F70.f[1] = a0->f[1];
    D_00238F70.f[2] = a0->f[2];
    D_00238F70.f[3] = a0->f[3];
    D_00238F70.f[4] = a0->f[4];
    D_00238F70.f[5] = a0->f[5];
    D_00238F70.f[6] = a0->f[6];
    D_00238F70.f[7] = a0->f[7];
    D_00238F70.f[12] = a0->f[12];
    D_00238F70.f[13] = a0->f[13];
    D_00238F70.f[14] = a0->f[14];
    D_00238F70.f[15] = a0->f[15];
}
