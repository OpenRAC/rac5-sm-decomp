/* LEVEL_15:0x13E048 -- calls func_13DFE0 on the record, then stores the
   difference between the record's 0x30 and 0x2C fields, scaled by 2^-31,
   into the 0x38 field. */
void func_13DFE0(void *a0);

void func_13E048(void *a0)
{
    void *s0 = a0;
    func_13DFE0(a0);
    {
        float t0 = *(float *)((char *)s0 + 0x30);
        float t1 = *(float *)((char *)s0 + 0x2C);
        float k = 4.656612873077392578125e-10f;
        float d = t0 - t1;
        *(float *)((char *)s0 + 0x38) = d * k;
    }
}
