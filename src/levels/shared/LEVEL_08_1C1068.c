/* LEVEL_08:0x1C1068 -- compares the float argument with a constant and
   returns 14, 13 or 12 depending on the sign of the difference of the two
   products of the objects. */
int func_1C1068(void *a0, void *a1, float a2)
{
    float f1;
    float f0;

    if (a2 <= -0.7071067690849304f) {
        return 14;
    }
    f0 = *(float *)((char *)a0 + 0x08) * *(float *)a1;
    f1 = *(float *)a0 * *(float *)((char *)a1 + 0x04);
    f0 = f0 - f1;
    if (0.0f < f0) {
        return 13;
    }
    return 12;
}
