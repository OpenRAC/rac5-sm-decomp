/* FRONTEND:0x005690 -- placement copy of LEVEL_16_079508.c: placement copy of LEVEL_17_079F80.c. */
/* LEVEL_17.REL:0x079F80 -- when the probe succeeds, runs the pair of angles
   through func_0055B0 and reports the result or-ed with the global flags. */
typedef struct {
    char pad0[0x108];
    int f_108;
    char pad1[0x134 - 0x10C];
    float f_134;
    float f_138;
} G;

extern G *D_0002AD1C;

int func_005748(int param_1);
int func_0055B0(float x, float y);

int func_005690(int a0)
{
    int r;

    if (!func_005748(a0))
        return 0;
    r = func_0055B0(D_0002AD1C->f_134, D_0002AD1C->f_138);
    return D_0002AD1C->f_108 | r;
}
