/* LEVEL_02:0x16ADC0 -- counts down a timer and restarts an animation when it expires. */
typedef struct O {
    char pad0[0x70];
    float timer;
} O;
extern int rand(void);
extern int func_083710(O *o);
extern int func_0833A0(O *o, int a);
extern void func_0835F8(O *o, int a, int b, int c, float x, float y);

void func_16ADC0(O *o)
{
    if (func_083710(o) == 4 && func_0833A0(o, 0)) {
        o->timer = (float)(rand() % 180 + 90);
        func_0835F8(o, 3, 0, 1, 0.15f, 0.0f);
        return;
    }
    o->timer -= 1.0f;
    if (o->timer <= 0.0f) {
        func_0835F8(o, 4, 0, 1, 0.15f, 0.0f);
        o->timer = 2147483648.0f;
    }
}
