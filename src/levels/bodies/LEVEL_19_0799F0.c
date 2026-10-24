/* LEVEL_19.REL:0x0799F0 -- when the probe succeeds, runs the pair of angles
   through func_079910 and reports the result or-ed with the global flags. */
typedef struct {
    char pad0[0x108];
    int f_108;
    char pad1[0x134 - 0x10C];
    float f_134;
    float f_138;
} G;

extern G *D_001A540C;

int func_079B70(void);
int func_079910(float x, float y);

int func_0799F0(void)
{
    int r;

    if (!func_079B70())
        return 0;
    r = func_079910(D_001A540C->f_134, D_001A540C->f_138);
    return D_001A540C->f_108 | r;
}
