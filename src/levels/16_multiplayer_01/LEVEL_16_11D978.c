/* LEVEL_16:0x11D978 -- sets a slot's two floats and picks its state. */
typedef struct {
    char pad0[0x10];
    int state;
    int pad14;
    float a;
    float b;
    char pad20[8];
} Slot;

extern Slot D_001B8BE0[][8];
extern Slot D_001B85A0[][8];
extern int D_002E1470;
extern unsigned int func_112E38(void);

void func_11D978(float a, float b, int idx)
{
    Slot *s;

    if (func_112E38()) {
        s = &D_001B8BE0[D_002E1470][idx];
    } else {
        s = &D_001B85A0[D_002E1470][idx];
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
