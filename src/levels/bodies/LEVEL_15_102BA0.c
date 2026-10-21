/* LEVEL_15:0x102BA0 -- divides one of the record's floats by another and
   stores the quotient back into the record. */
void func_102BA0(void *a0)
{
    float d = *(float *)a0;
    *(float *)((char *)a0 + 0x1C) = 1.0f / d;
}
