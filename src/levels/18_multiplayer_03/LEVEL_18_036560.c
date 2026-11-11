/* LEVEL_18.REL:0x036560 -- reads the time slot of the object when the
   routine says it is live, zero otherwise. */
typedef struct {
    char pad0[0x568];
    float f_568;
} Obj;

int func_036530(Obj *a0);

float func_036560(Obj *a0)
{
    return func_036530(a0) ? a0->f_568 : 0.0f;
}
