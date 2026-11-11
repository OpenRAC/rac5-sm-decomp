/* LEVEL_01:0x1882F0 -- writes the three differences of the record, scaled by
   2^-31, into its own last three float fields. */
void func_1882F0(void *a0)
{
    float d0 = *(float *)((char *)a0 + 4) - *(float *)a0;
    float d1 = *(float *)((char *)a0 + 0xC) - *(float *)((char *)a0 + 8);
    float d2 = *(float *)((char *)a0 + 0x14) - *(float *)((char *)a0 + 0x10);
    *(float *)((char *)a0 + 0x2C) = d0 * 4.656612873077393e-10f;
    *(float *)((char *)a0 + 0x30) = d1 * 4.656612873077393e-10f;
    *(float *)((char *)a0 + 0x34) = d2 * 4.656612873077393e-10f;
}
