/* LEVEL_02:0x033F80 -- copies a 4-float vector to the stack, runs two helpers and returns the inverted flag. */

extern int func_0348A0(unsigned char *a0, float *a1, int a2, int a3);
extern int func_035200(unsigned char *a0, float *a1, int a2);
extern void func_034038(unsigned char *a0, float *a1, int a2, int a3, int a4);

unsigned char func_033F80(unsigned char *o, float *v, int a2, int a3)
{
    float vec[4];
    int s0;
    int s1;

    vec[0] = v[0];
    vec[1] = v[1];
    vec[2] = v[2];
    vec[3] = v[3];
    s0 = func_0348A0(o, vec, o[0x2D], 0);
    s1 = func_035200(o, vec, s0);
    o[0x2D] = s0;
    func_034038(o, vec, s0, a2, a3);
    return (unsigned char)(s1 ^ 1);
}
