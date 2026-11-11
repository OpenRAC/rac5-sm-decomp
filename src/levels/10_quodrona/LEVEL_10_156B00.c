/* LEVEL_10:0x156B00 -- placement copy of LEVEL_01_158E98.c: forwards the pulse colour and the phase of the object's record, with the step, to the colour pulse update. */
typedef struct Rec {
    int w0;
    float phase;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
    char pad5C[0x10];
    int color;
} Obj;

extern void func_062818(int *color, float *phase, float delta);

void func_156B00(Obj *o, float delta)
{
    func_062818(&o->color, &o->rec->phase, delta);
}
