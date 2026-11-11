/* LEVEL_15:0x0975C8 -- the table D_00151460 holds one pointer per slot and
   the table D_00151618 one float per slot; the float is raised to one the
   first time a slot is reused. */
typedef struct {
    void *p;
} Slot;

extern Slot D_00151460[];
extern float D_00151618[];

void func_0975C8(int a0, void *a1)
{
    if (D_00151460[a0].p != 0) {
        if (D_00151460[a0].p != a1) {
            if (D_00151618[a0] == 0.0f) {
                D_00151618[a0] = 1.0f;
            }
        }
    }
    D_00151460[a0].p = a1;
}
