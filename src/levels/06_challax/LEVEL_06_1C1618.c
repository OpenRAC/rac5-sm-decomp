/* LEVEL_06:0x1C1618 -- one-shot accumulator: while the "done" byte is clear,
   the argument is added to the global float (the store is unconditional, so it
   falls into the delay slot of the comparison) and the flag is raised when
   the total passes 15.0. */
typedef struct {
    float f;
    unsigned char done;
} Rec;

extern Rec D_385600;

void func_1C1618(float a0)
{
    if (D_385600.done == 0) {
        float v = D_385600.f + a0;
        D_385600.f = v;
        if (v > 15.0f) {
            D_385600.done = 1;
        }
    }
}
