/* LEVEL_16:0x05D658 -- resets the float of the record to one when it is not
   strictly positive. */
void func_05D658(float *a0)
{
    float *p = a0 + 0x3E8;
    if (*p <= 0.0f) {
        *p = 1.0f;
    }
}
