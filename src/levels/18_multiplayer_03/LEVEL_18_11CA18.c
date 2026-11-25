/* LEVEL_18:0x11CA18 -- placement copy of LEVEL_16_11D978.c: sets a slot's two floats and picks its state. */
typedef struct {
    char pad0[0x10];
    int state;
    int pad14;
    float a;
    float b;
    char pad20[8];
} Slot;

extern Slot D_001BA060[][8];
extern Slot D_001B9A20[][8];
extern int D_002E17F0;
extern unsigned int func_111BF0(void);

void func_11CA18(float a, float b, int idx)
{
    Slot *s;

    if (func_111BF0()) {
        s = &D_001BA060[D_002E17F0][idx];
    } else {
        s = &D_001B9A20[D_002E17F0][idx];
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
