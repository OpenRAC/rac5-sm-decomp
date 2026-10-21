/* LEVEL_15:0x10BB08 -- stores 1.0 divided by the first float of the record
   into the float at +0x14. */
void func_10BB08(float *a0)
{
    a0[5] = 1.0f / a0[0];
}
