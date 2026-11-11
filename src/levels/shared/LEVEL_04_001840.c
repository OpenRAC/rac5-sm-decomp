/* LEVEL_04:0x001840 -- 80 bytes, 2 placements.
   Two-state update: state 0 forwards the rate to the helper (with the incoming
   factor), state 1 integrates it into the accumulator. */
typedef struct {
    float f0;
    float f4;
    char pad_08[0x10 - 0x08];
    int i10;
} Rec;

extern void func_001748(Rec *, float, float);

void func_001840(Rec *r, float f)
{
    switch (r->i10) {
    case 0:
        func_001748(r, f, r->f4);
        break;
    case 1:
        r->f0 = r->f0 + f * r->f4;
        break;
    }
}
