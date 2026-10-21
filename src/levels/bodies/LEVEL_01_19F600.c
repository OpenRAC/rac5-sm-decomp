/* LEVEL_01:0x19F600 -- copies the fields of the record pointed to by a1
   into the record pointed to by a0, field by field. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    int i_0C;
    float f_10;
    float f_14;
    int i_18;
    int i_1C;
} Rec;

void func_19F600(Rec *a0, Rec *a1)
{
    a0->f_00 = a1->f_00;
    a0->f_04 = a1->f_04;
    a0->f_08 = a1->f_08;
    a0->i_18 = a1->i_18;
    a0->i_1C = a1->i_1C;
    a0->f_10 = a1->f_10;
    a0->f_14 = a1->f_14;
    a0->i_0C = a1->i_0C;
}
