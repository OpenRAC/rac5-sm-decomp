/* LEVEL_09:0x0AE890 -- copies the three components into the shared record. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
} Vec;

extern Vec D_1E5F70;

void func_0AE890(Vec *src)
{
    D_1E5F70.f_00 = src->f_00;
    D_1E5F70.f_04 = src->f_04;
    D_1E5F70.f_08 = src->f_08;
}
