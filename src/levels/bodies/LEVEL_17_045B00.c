/* LEVEL_17:0x045B00 -- placement de la famille de LEVEL_16:0x0462A0. */
void func_045B00(void *a0, float a1)
{
    float f0 = *(float *)((char *)a0 + 0x1B8);
    float f1 = -0.6f;

    f0 = f0 + a1;
    *(float *)((char *)a0 + 0x1B8) = f0;
    if (f0 < f1) {
        *(float *)((char *)a0 + 0x1B8) = f1;
    }
}
