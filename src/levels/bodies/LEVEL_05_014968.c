/* LEVEL_05:014968 -- samples a float through the level's routine and stores it
   into the record at +4 and into the optional output pointer. */
extern int func_0149B8(void *a0, float *out, void *a2);
void func_014968(void *a0, void *a1, void *a2)
{
    float v;

    if (func_0149B8(a0, &v, a2)) {
        *(float *)((char *)a0 + 0x4) = v;
    }
    if (a1 != 0) {
        *(float *)a1 = v;
    }
}
