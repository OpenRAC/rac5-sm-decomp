/* LEVEL_01:0x0019A8 -- 140 bytes, 7 placements.
   Three-state update of a record: state 0 hands the rate to the helper,
   state 1 integrates it into the accumulator, state 2 hands the square of the
   first rate to the helper. */
typedef struct {
    float f0;
    float f4;
    char pad_08[0x10 - 0x08];
    int i10;
} Obj;

extern void func_001940(Obj *, float, float);

void func_0019A8(Obj *o, float a, float b, float c)
{
    switch (o->i10) {
    case 0:
        func_001940(o, c, o->f4);
        break;
    case 1:
        o->f0 = o->f0 + c * o->f4;
        break;
    case 2:
        func_001940(o, c, a * b * o->f4);
        break;
    }
}
