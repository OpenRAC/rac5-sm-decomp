/* LEVEL_15:0x0FA730 -- scales a four-float vector by a table entry and returns that entry. */
typedef struct {
    char pad[0x440A8];
    int level;
} Big;

extern Big D_002A8B58;
extern float *func_0F6D08(int a0);

int func_0FA730(float *a0)
{
    int s0 = D_002A8B58.level;
    float *v = func_0F6D08(7);
    float f2 = (float)s0;

    a0[0] = v[0] * f2;
    a0[1] = v[1] * f2;
    a0[2] = v[2] * f2;
    a0[3] = v[3] * f2;
    return s0;
}
