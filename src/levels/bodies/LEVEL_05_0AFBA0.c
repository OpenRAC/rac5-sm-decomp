/* LEVEL_05:0x0AFBA0 -- copies the three components into the shared record. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

extern Vec D_1EB4F0;

void func_0AFBA0(Vec *src)
{
    D_1EB4F0.f_00 = src->f_00;
    D_1EB4F0.f_04 = src->f_04;
    D_1EB4F0.f_08 = src->f_08;
}
