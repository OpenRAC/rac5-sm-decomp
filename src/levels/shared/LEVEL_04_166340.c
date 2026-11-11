/* LEVEL_04:0x166340 -- writes the object's 2D direction scaled by the first state value into the output pair, then adds the second state pair scaled by the fourth state value. */
typedef struct {
    float k_00;
    char pad_04[8];
    float s_0C;
    float x_10;
    float z_14;
} State;

typedef struct {
    char pad_00[0x20];
    float dx_20;
    char pad_24[4];
    float dz_28;
    char pad_2C[0x2C];
    State *state_58;
} Object;

void func_166340(Object *o, float *out)
{
    State *s = o->state_58;
    float k = s->k_00;
    float a = k * o->dx_20;
    float b;
    float t;

    out[0] = a;
    b = k * o->dz_28;
    out[1] = b;
    t = s->s_0C;
    out[0] = a + s->x_10 * t;
    out[1] = b + s->z_14 * t;
}
