/* LEVEL_15:0x1268E8 -- the point is normalised and the three edge lengths are
   written back scaled by 2^-31. */
void func_1268E8(void *a0)
{
    float k = 4.6566129e-10f;
    float t = 1.0f / *(float *)((char *)a0 + 0x0);
    float d3 = *(float *)((char *)a0 + 0x8) - *(float *)((char *)a0 + 0x4);
    float d2 = *(float *)((char *)a0 + 0x14) - *(float *)((char *)a0 + 0x10);
    float d1 = *(float *)((char *)a0 + 0x1C) - *(float *)((char *)a0 + 0x18);

    *(float *)((char *)a0 + 0x20) = t;
    *(float *)((char *)a0 + 0x24) = d3 * k;
    *(float *)((char *)a0 + 0x28) = d2 * k;
    *(float *)((char *)a0 + 0x2C) = d1 * k;
}
