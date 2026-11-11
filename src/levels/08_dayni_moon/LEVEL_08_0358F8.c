/* LEVEL_08:0x0358F8 -- placement copy of LEVEL_04_032680.c: gets two floats from a helper into locals, then passes them with three pointers to another helper. */
extern void func_035C40(float *p0, float *p1);
extern void func_034FD0(void *a, void *b, void *c, float x, float y);

void func_0358F8(void *a, void *b, void *c)
{
    float x;
    float y;

    func_035C40(&x, &y);
    func_034FD0(a, b, c, x, y);
}
