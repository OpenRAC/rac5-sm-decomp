/* LEVEL_01:0x03B180 -- copies the four floats of the second object into the
   argument object at 0x30, mirrors them into the object it points at when
   there is one, and writes the second float into the pair at 0x2DC. */
void func_03B180(void *a0, void *a1)
{
    float *dst = (float *)((char *)a0 + 0x30);
    float *src = (float *)a1;
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    {
        void *other = *(void **)((char *)a0 + 0x59C);
        if (other != 0) {
            float *dst2 = (float *)((char *)other + 0x30);
            dst2[0] = dst[0];
            dst2[1] = dst[1];
            dst2[2] = dst[2];
            dst2[3] = dst[3];
        }
    }
    {
        float f = src[1];
        *(int *)((char *)a0 + 0x2E4) = 0;
        *(float *)((char *)a0 + 0x2DC) = f;
        *(float *)((char *)a0 + 0x2E0) = f;
    }
}
