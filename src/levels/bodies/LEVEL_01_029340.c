typedef struct {
    char  pad0[0x58];
    float f58;
    char  pad1[0x214 - 0x5C];
    float f214;
} Obj;

void func_029340(Obj *o, float *acc, float dt)
{
    float a = o->f58;
    float b;
    float k;

    if (a > 0.0f) {
        b = o->f214;
        if (b > 0.0f) {
            k = (a < b) ? a : b;
            *acc = *acc + k * 0.06f * dt;
        }
    }
    if (o->f58 < 0.0001f) {
        if (o->f214 < 0.0001f) {
            if (*acc > 0.0001f) {
                *acc = *acc - dt * 0.06f;
            }
        }
    }
}
