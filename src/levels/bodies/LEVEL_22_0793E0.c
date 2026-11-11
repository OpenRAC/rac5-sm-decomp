/* LEVEL_22:0x0793E0 -- placement copy of LEVEL_16_079508.c: placement copy of LEVEL_17_079F80.c. */
/* LEVEL_17.REL:0x079F80 -- when the probe succeeds, runs the pair of angles
   through func_079300 and reports the result or-ed with the global flags. */
typedef struct {
    char pad0[0x108];
    int f_108;
    char pad1[0x134 - 0x10C];
    float f_134;
    float f_138;
} G;

extern G *D_001555DC;

int func_0794C8(int param_1);
int func_079300(float x, float y);

int func_0793E0(int a0)
{
    int r;

    if (!func_0794C8(a0))
        return 0;
    r = func_079300(D_001555DC->f_134, D_001555DC->f_138);
    return D_001555DC->f_108 | r;
}
