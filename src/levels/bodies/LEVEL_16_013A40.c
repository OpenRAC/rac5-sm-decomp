/* LEVEL_16.REL:013A40 -- reads one value through the level's sampler into a
   local and stores it in the record and in the optional out pointer. */
extern int func_013A98(void *a0, float *out, void *a2, int a3, int a4);

void func_013A40(void *a0, void *a1, void *a2)
{
    float v;

    if (func_013A98(a0, &v, a2, 0x38, 0)) {
        *(float *)((char *)a0 + 4) = v;
    }
    if (a1 != 0) {
        *(float *)a1 = v;
    }
}
