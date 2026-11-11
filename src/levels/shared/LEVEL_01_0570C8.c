/* LEVEL_01.REL:0x0570C8 -- sums the float array of an object. */
typedef struct {
    int pad[2];
    float *v;
} Obj;

float func_0570C8(Obj *a0, int n, float sum)
{
    float *p = a0->v;
    float *end = p + n;

    while (p != end) {
        sum += *p;
        p++;
    }
    return sum;
}
