/* LEVEL_06.REL:0x16F168 -- starts the move sequence when the object is idle
   or finished, and resets its speed slot. */
typedef struct {
    char pad0[0x8];
    float f_08;
} Move;

typedef struct {
    char pad0[0x45];
    unsigned char f_45;
    char pad1[0x2];
    Move *f_48;
} Obj;

void func_076738(Obj *a0, int a1, float f);

void func_16F168(Obj *a0)
{
    if (a0->f_45 == 0 || a0->f_45 == 3) {
        a0->f_45 = 1;
        func_076738(a0, 2, 0.0f);
        a0->f_48->f_08 = 2.0f;
    }
}
