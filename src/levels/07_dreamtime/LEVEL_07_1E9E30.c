/* LEVEL_07.REL:1E9E30 -- advances the record's timer and starts the level's
   action once it passes five. */
typedef struct {
    char pad[0x70];
    float f_70;
} Obj;

extern float D_0024722C;

extern void func_07E7F0(void *a0, int a1);

int func_1E9E30(Obj *a0)
{
    float t = a0->f_70 + D_0024722C;

    a0->f_70 = t;
    if (t > 5.0f) {
        func_07E7F0(a0, 1);
        return 1;
    }
    return 0;
}
