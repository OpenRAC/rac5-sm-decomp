/* LEVEL_16:0x0462A0 -- clamps a float field of a record: adds the caller's
   float to the field and, if the sum is under the limit, overwrites the
   field with the limit. */
void func_0462A0(void *a0, float a1)
{
    float f0 = *(float *)((char *)a0 + 0x1B8);
    float f1 = -0.6f;

    f0 = f0 + a1;
    *(float *)((char *)a0 + 0x1B8) = f0;
    if (f0 < f1) {
        *(float *)((char *)a0 + 0x1B8) = f1;
    }
}
