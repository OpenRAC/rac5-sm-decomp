/* LEVEL_04:0x1F4D08 -- subtracts a small constant from the float field,
   the step depending on the flag. */
void func_1F4D08(float *a0, int a1)
{
    if (a1 != 0) {
        *a0 = *a0 - 1.0f / 30.0f;
    } else {
        *a0 = *a0 - 1.0f / 45.0f;
    }
}
