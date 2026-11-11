/* LEVEL_15:0x097930 -- stores the caller's first float argument into the
   indexed global float table D_00151480. */
extern float D_00151480[];

void func_097930(int a0, float f12)
{
    D_00151480[a0] = f12;
}
