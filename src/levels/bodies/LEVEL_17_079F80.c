/* LEVEL_17.REL:0x079F80 -- when the probe succeeds, runs the pair of angles
   through func_079EA0 and reports the result or-ed with the global flags. */
typedef struct {
    char pad0[0x108];
    int f_108;
    char pad1[0x134 - 0x10C];
    float f_134;
    float f_138;
} G;

extern G *D_0019788C;

int func_07A100(void);
int func_079EA0(float x, float y);

int func_079F80(void)
{
    int r;

    if (!func_07A100())
        return 0;
    r = func_079EA0(D_0019788C->f_134, D_0019788C->f_138);
    return D_0019788C->f_108 | r;
}
