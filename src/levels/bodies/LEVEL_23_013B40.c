/* LEVEL_23:0x013B40 -- decodes one value into a local and stores it into
   the object when the decode succeeds, and into the optional second
   pointer. */
typedef struct {
    int f_00;
    float f_04;
} Obj;

extern int func_013B98(void *a, void *b, void *c, int d, int e);

void func_013B40(Obj *a0, float *a1, void *a2)
{
    float v;

    if (func_013B98(a0, &v, a2, 0x38, 0))
        a0->f_04 = v;
    if (a1 != 0)
        *a1 = v;
}
