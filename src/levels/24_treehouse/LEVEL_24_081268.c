/* LEVEL_24:0x081268 -- placement copy of LEVEL_16_079508.c: placement copy of LEVEL_17_079F80.c. */
/* LEVEL_17.REL:0x079F80 -- when the probe succeeds, runs the pair of angles
   through func_081188 and reports the result or-ed with the global flags. */
typedef struct {
    char pad0[0x108];
    int f_108;
    char pad1[0x134 - 0x10C];
    float f_134;
    float f_138;
} G;

extern G *D_001C6EDC;

int func_081350(int param_1);
int func_081188(float x, float y);

int func_081268(int a0)
{
    int r;

    if (!func_081350(a0))
        return 0;
    r = func_081188(D_001C6EDC->f_134, D_001C6EDC->f_138);
    return D_001C6EDC->f_108 | r;
}
