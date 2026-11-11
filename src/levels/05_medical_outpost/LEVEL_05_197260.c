/* LEVEL_05.REL:0x197260 -- drains the time slot of the caller's record and
   starts the reaction when the countdown is over. */
typedef struct {
    char pad0[0x70];
    float f_70;
} Rec;

void func_079CF8(Rec *a0, int a1);

void func_197260(Rec *a0, float dt)
{
    float t = a0->f_70 - dt;

    a0->f_70 = t;
    if (t <= 0.0f) func_079CF8(a0, 1);
}
