/* LEVEL_16.REL:0x079770 -- the tilt angle, mirrored for one handedness. */
typedef struct {
    char pad_00[0x30];
    float f_30;
} Rec;

extern int func_027E38(int);

float func_079770(Rec *a0)
{
    if (func_027E38(4) != 0)
        return -a0->f_30;
    return a0->f_30;
}
