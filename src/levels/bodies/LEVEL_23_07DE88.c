/* LEVEL_23:0x07DE88 -- placement copy of LEVEL_16_079508.c: placement copy of LEVEL_17_079F80.c. */
/* LEVEL_17.REL:0x079F80 -- when the probe succeeds, runs the pair of angles
   through func_07DDA8 and reports the result or-ed with the global flags. */
typedef struct {
    char pad0[0x108];
    int f_108;
    char pad1[0x134 - 0x10C];
    float f_134;
    float f_138;
} G;

extern G *D_001C965C;

int func_07DF70(int param_1);
int func_07DDA8(float x, float y);

int func_07DE88(int a0)
{
    int r;

    if (!func_07DF70(a0))
        return 0;
    r = func_07DDA8(D_001C965C->f_134, D_001C965C->f_138);
    return D_001C965C->f_108 | r;
}
