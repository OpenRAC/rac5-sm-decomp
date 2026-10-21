/* LEVEL_01:0x055C98 -- when the state word of the argument object is one,
   adds the three products of the two float vectors and, when the sum is
   negative, sets the state to two. */
void func_055C98(void *a0)
{
    if (*(int *)((char *)a0 + 0x168) == 1) {
        float *p = (float *)((char *)a0 + 0xC5C);
        float *q = (float *)((char *)a0 + 0x2F4);
        float f0 = p[0] * q[0];
        float f1 = p[1] * q[1];
        float f2 = p[2] * q[2];
        f0 = f0 + f1;
        f0 = f0 + f2;
        if (f0 < 0.0f) {
            *(int *)((char *)a0 + 0x168) = 2;
        }
    }
}
