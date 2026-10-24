/* LEVEL_04:013E70 -- samples a float through the level's routine and stores it
   into the record at +4 and into the optional output pointer. */
extern int func_013EC8(void *a0, float *out, void *a2, int a3, int a4);

void func_013E70(void *a0, void *a1, void *a2)
{
    float v;

    if (func_013EC8(a0, &v, a2, 0x38, 0)) {
        *(float *)((char *)a0 + 0x4) = v;
    }
    if (a1 != 0) {
        *(float *)a1 = v;
    }
}
