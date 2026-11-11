/* LEVEL_01.REL:0x126218 -- copies the 3x3 block of the packed frame into the
   dense 3x3 of the node: the source keeps the four-float stride, the
   destination the three-float one. */
void func_126218(float *dst, float *src)
{
    int i;

    for (i = 0; i < 3; i++) {
        int off = i * 4;
        float *s = (float *)(off + (int)src);
        float *d = dst + i * 3;
        int j;

        for (j = 2; j >= 0; j--) {
            *d = *s;
            s += 4;
            d++;
        }
    }
}
