/* LEVEL_19:0x17B778 -- placement copy of LEVEL_16_17EAE0.c: dispatches on the object's state byte: states 1, 2 and 3 run their update helpers (state 3 first advances a float timer). */
typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x2A];
    float f70;
} Obj;

extern void func_17B7F0(void *o, float);
extern void func_17B8F0(void *value);
extern void func_17B928(char *a0);

void func_17B778(Obj *o, float dt)
{
    if (o->state == 2) {
        func_17B7F0(o, dt);
    } else if (o->state == 1) {
        func_17B8F0(o);
    } else if (o->state == 3) {
        o->f70 = o->f70 + dt;
        func_17B928((char *)o);
    }
}
