/* LEVEL_04:0x032680 -- gets two floats from a helper into locals, then passes them with three pointers to another helper. */
extern void func_0329C8(float *p0, float *p1);
extern void func_031D58(void *a, void *b, void *c, float x, float y);

void func_032680(void *a, void *b, void *c)
{
    float x;
    float y;

    func_0329C8(&x, &y);
    func_031D58(a, b, c, x, y);
}
