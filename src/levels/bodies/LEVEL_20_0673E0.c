/* LEVEL_20.REL:0x0673E0 -- the tilt angle, mirrored for one handedness. */
typedef struct {
    char pad_00[0x30];
    float f_30;
} Rec;

extern int func_024940(int);

float func_0673E0(Rec *a0)
{
    if (func_024940(4) != 0)
        return -a0->f_30;
    return a0->f_30;
}
