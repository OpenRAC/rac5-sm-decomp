/* LEVEL_01:0x129048 -- scales the three rows of the 3x3 matrix (row
   stride 0x10) by the three float arguments, in place. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
    float f_24;
    float f_28;
} Mat;

void func_129048(int a0, Mat *a1, float v0, float v1, float v2)
{
    a1->f_00 = v0 * a1->f_00;
    a1->f_04 = v0 * a1->f_04;
    a1->f_08 = v0 * a1->f_08;
    a1->f_10 = v1 * a1->f_10;
    a1->f_14 = v1 * a1->f_14;
    a1->f_18 = v1 * a1->f_18;
    a1->f_20 = v2 * a1->f_20;
    a1->f_24 = v2 * a1->f_24;
    a1->f_28 = v2 * a1->f_28;
}
