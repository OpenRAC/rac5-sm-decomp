/* LEVEL_10:014448 -- calls the level's sampler into a local float, stores it
   into the caller's record and into the optional output pointer. */
extern int func_014498(void *a0, float *out);

void func_014448(void *a0, void *a1)
{
    float v;
    if (func_014498(a0, &v)) {
        *(float *)((char *)a0 + 4) = v;
    }
    if (a1 != 0) {
        *(float *)a1 = v;
    }
}
