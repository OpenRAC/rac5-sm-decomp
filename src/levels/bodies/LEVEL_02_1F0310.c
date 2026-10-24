/* LEVEL_02.REL:1F0310 -- advances the record's timer and starts the level's
   action once it passes five. */
typedef struct {
    char pad[0x70];
    float f_70;
} Obj;

extern float D_00248E2C;

extern void func_082F58(void *a0, int a1);

int func_1F0310(Obj *a0)
{
    float t = a0->f_70 + D_00248E2C;

    a0->f_70 = t;
    if (t > 5.0f) {
        func_082F58(a0, 1);
        return 1;
    }
    return 0;
}
