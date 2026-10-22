/* LEVEL_02:0x11ED90 -- clamps the float the pointer holds between the two
   limits, when the erased routine says the object is ready. */
extern char D_0022C6A0[];

extern int func_000000(void *a0, void *a1, void *a2);

int func_11ED90(void *a0, float *a1, float lo, float hi)
{
    float l = lo;
    float h = hi;

    if (func_000000(a0, D_0022C6A0, a1) != 1) {
        return 0;
    }
    if (l > a1[0]) {
        a1[0] = l;
    }
    if (a1[0] > h) {
        a1[0] = h;
    }
    return 1;
}
