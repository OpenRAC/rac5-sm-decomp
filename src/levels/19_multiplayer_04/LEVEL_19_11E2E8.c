/* LEVEL_19:0x11E2E8 -- placement copy of LEVEL_16_11D978.c: sets a slot's two floats and picks its state. */
typedef struct {
    char pad0[0x10];
    int state;
    int pad14;
    float a;
    float b;
    char pad20[8];
} Slot;

extern Slot D_001B9D58[][8];
extern Slot D_001B9718[][8];
extern int D_002E15F0;
extern unsigned int func_1135E0(void);

void func_11E2E8(float a, float b, int idx)
{
    Slot *s;

    if (func_1135E0()) {
        s = &D_001B9D58[D_002E15F0][idx];
    } else {
        s = &D_001B9718[D_002E15F0][idx];
    }
    s->a = a;
    s->b = b;
    if (s->state != 4) {
        if (a <= 0.0f) {
            s->state = 3;
        } else if (b <= a) {
            s->state = 1;
        } else {
            s->state = 2;
        }
    }
}
