/* LEVEL_17:0x11D3A8 -- placement copy of LEVEL_16_11D978.c: sets a slot's two floats and picks its state. */
typedef struct {
    char pad0[0x10];
    int state;
    int pad14;
    float a;
    float b;
    char pad20[8];
} Slot;

extern Slot D_001AC1D8[][8];
extern Slot D_001ABB98[][8];
extern int D_002D2770;
extern unsigned int func_1125C8(void);

void func_11D3A8(float a, float b, int idx)
{
    Slot *s;

    if (func_1125C8()) {
        s = &D_001AC1D8[D_002D2770][idx];
    } else {
        s = &D_001ABB98[D_002D2770][idx];
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
