/* LEVEL_06.REL:0x1C8EC0 -- advances the timer at +0x70 and fires the level
   callback once it passes five seconds. */
typedef struct {
    char pad_00[0x70];
    float f_70;
} Rec;

extern float D_21E6AC;
extern void func_076268(Rec *, int);

int func_1C8EC0(Rec *a0)
{
    float v = a0->f_70 + D_21E6AC;

    a0->f_70 = v;
    if (v > 5.0f) {
        func_076268(a0, 1);
        return 1;
    }
    return 0;
}
