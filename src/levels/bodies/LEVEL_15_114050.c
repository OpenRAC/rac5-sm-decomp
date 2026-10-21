/* LEVEL_15:0x114050 -- stores 1.0 divided by the first float of the record
   into the float at +0x44. */
void func_114050(float *a0)
{
    a0[0x11] = 1.0f / a0[0];
}
