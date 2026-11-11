/* LEVEL_01:0x1240C0 -- fills the record with the sine and the cosine of
   the float argument. */
typedef struct {
    float f_00;
    int i_04;
    float f_08;
    int i_0C;
    float f_10;
    int i_14;
    float f_18;
    int i_1C;
    float f_20;
} Rec;

extern float sinf(float a0);
extern float cosf(float a0);

void func_1240C0(Rec *a0, float a1)
{
    float s = sinf(a1);
    float c = cosf(a1);

    a0->f_00 = c;
    a0->i_04 = 0;
    a0->f_08 = -s;
    a0->i_0C = 0;
    a0->f_10 = 1.0f;
    a0->i_14 = 0;
    a0->f_18 = s;
    a0->i_1C = 0;
    a0->f_20 = c;
}
