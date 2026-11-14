/* LEVEL_22:0x0571F8 -- stores a non-negative value and its mode flag. */
extern float D_00153C4C;
extern int D_00153C50;

void func_0571F8(float value)
{
    if (!(value < 0.0f)) {
        D_00153C4C = value;
        D_00153C50 = 2;
    }
}
