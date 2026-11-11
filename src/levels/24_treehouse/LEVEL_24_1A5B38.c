/* LEVEL_24.REL:0x1A5B38 -- accumulates the argument into the timer at
   0x00362940 and latches its "done" byte once the total passes 15. */
typedef struct {
    float v_0;
    unsigned char done_4;
} Rec;

extern Rec D_00362940;

void func_1A5B38(float delta)
{
    if (D_00362940.done_4 == 0) {
        float total = D_00362940.v_0 + delta;

        D_00362940.v_0 = total;
        if (total > 15.0f) {
            D_00362940.done_4 = 1;
        }
    }
}
