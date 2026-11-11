/* LEVEL_01:0x04A4F8 -- decrements field_00 when it is positive, and says
   whether it did. */
typedef struct {
    float f_00;
} Rec;

int func_04A4F8(Rec *a0)
{
    if (a0->f_00 > 0.0f) {
        a0->f_00 = a0->f_00 - 1.0f;
        return 1;
    }

    return 0;
}
