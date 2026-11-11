/* LEVEL_16:0x14D8A0 -- writes 255.0f and a byte into an array reached
   through a0->f_58. */
typedef struct {
    char pad_58[0x58];
    float *f_58;
} Obj;

void func_14D8A0(Obj *a0, int a1)
{
    float *p = a0->f_58;
    int off = a1 * 4;

    *(float *)((char *)p + off + 0x410) = 255.0f;
    *(char *)((char *)p + a1 + 0x40D) = 1;
}
