/* LEVEL_01:0x1DB678 -- advances the frame counter by the global step and
   signals the object once it passes five. */
typedef struct {
    char pad0[0x70];
    float f70;
} Obj;

extern float D_0023192C;
extern void func_07C670(Obj *, int);

int func_1DB678(Obj *a0)
{
    float f = a0->f70 + D_0023192C;

    a0->f70 = f;
    if (5.0f < f) {
        func_07C670(a0, 1);
        return 1;
    }
    return 0;
}
