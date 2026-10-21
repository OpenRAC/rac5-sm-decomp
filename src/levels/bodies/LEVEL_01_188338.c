/* LEVEL_01:0x188338 -- scales the two differences of the argument object's
   floats by 2^-31 and writes them back. */
void func_188338(void *a0)
{
    float f1 = *(float *)((char *)a0 + 0x04) - *(float *)((char *)a0 + 0x00);
    float f0 = *(float *)((char *)a0 + 0x0C) - *(float *)((char *)a0 + 0x08);
    *(float *)((char *)a0 + 0x10) = f1 * 4.656612873077393e-10f;
    *(float *)((char *)a0 + 0x14) = f0 * 4.656612873077393e-10f;
}
