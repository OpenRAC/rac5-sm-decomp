/* LEVEL_05:0x085920 -- placement copy of LEVEL_16_079508.c: placement copy of LEVEL_17_079F80.c. */
/* LEVEL_17.REL:0x079F80 -- when the probe succeeds, runs the pair of angles
   through func_085840 and reports the result or-ed with the global flags. */
typedef struct {
    char pad0[0x108];
    int f_108;
    char pad1[0x134 - 0x10C];
    float f_134;
    float f_138;
} G;

extern G *D_001E55DC;

int func_085A08(int param_1);
int func_085840(float x, float y);

int func_085920(int a0)
{
    int r;

    if (!func_085A08(a0))
        return 0;
    r = func_085840(D_001E55DC->f_134, D_001E55DC->f_138);
    return D_001E55DC->f_108 | r;
}
