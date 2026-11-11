/* LEVEL_01:0x0F01C0 -- divides one by the float at 0x00 of the argument
   object and writes the result into the float at 0x40. */
void func_0F01C0(void *a0)
{
    float f0 = 1.0f / *(float *)((char *)a0 + 0x00);
    *(float *)((char *)a0 + 0x40) = f0;
}
