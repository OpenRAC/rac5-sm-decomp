/* LEVEL_17:0x1814A8 -- advances the frame counter by the global step and
   signals the object once it passes five. */
typedef struct {
    char pad0[0x70];
    float f70;
} Obj;

extern float D_001D192C;
extern void func_06FF78(Obj *, int);

int func_1814A8(Obj *a0)
{
    float f = a0->f70 + D_001D192C;

    a0->f70 = f;
    if (5.0f < f) {
        func_06FF78(a0, 1);
        return 1;
    }
    return 0;
}
