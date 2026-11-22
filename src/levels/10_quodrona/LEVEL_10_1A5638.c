/* LEVEL_10:0x1A5638 -- state step: states 0 and 1 run the update steps, states 1 and 2 count the timer down and kill the object when it runs out, then the object's marker effect is drawn. */
typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[0x45 - 0x3C];
    unsigned char state;
    char pad_46[0x70 - 0x46];
    float timer;
} Obj;

extern void func_1A5A00(Obj *o);
extern void func_1A5B98(Obj *o);
extern void func_07CCA0(Obj *o, int a);
extern void func_08D080(float *pos, unsigned int color, float size);

void func_1A5638(Obj *o)
{
    switch (o->state) {
    case 1:
        o->timer -= 1.0f;
        if (o->timer <= 0.0f) {
            func_07CCA0(o, 1);
            return;
        }
        func_1A5A00(o);
    case 0:
        func_1A5B98(o);
        break;
    case 2:
        o->timer -= 1.0f;
        if (o->timer <= 0.0f) {
            func_07CCA0(o, 1);
            return;
        }
        break;
    }
    func_08D080(o->pos, 0xFF40FF40, 10.0f);
}
