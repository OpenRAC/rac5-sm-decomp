/* LEVEL_23:0x05ADA8 -- placement copy of LEVEL_22_0571F8.c: stores a non-negative value and its mode flag. */
extern float D_001C7CCC;
extern int D_001C7CD0;

void func_05ADA8(float value)
{
    if (!(value < 0.0f)) {
        D_001C7CCC = value;
        D_001C7CD0 = 2;
    }
}
