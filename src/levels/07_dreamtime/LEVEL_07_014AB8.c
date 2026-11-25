/* LEVEL_07:0x014AB8 -- asks func_014B10 for a float into a stack slot
   (with the caller's selector, a size of 0x38 and a zero) and copies it into
   the record at 0x4, then into the optional output pointer. */

extern int func_014B10(void *a0, float *out, int a2, int a3, int a4);

int func_014AB8(void *a0, float *a1, int a2, float height)
{
    float f;
    int r;

    r = func_014B10(a0, &f, a2, 56, 0);
    if (r != 0) {
        *(float *)((char *)a0 + 4) = f;
    }
    if (a1 != 0) {
        *a1 = f;
    }
    return r;
}
