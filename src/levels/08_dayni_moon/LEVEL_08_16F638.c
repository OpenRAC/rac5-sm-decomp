/* LEVEL_08:0x16F638 -- advances the level's distance counter and the two
   floats of the moving platform. */
typedef struct {
    float x;
    float y;
} V2;

typedef struct {
    char pad[0x38];
    float f38;
    char pad2[9];
    char flag;
    char pad3[0x12];
    V2 *v;
} Rec;

extern float D_284408;

void func_16F638(Rec *a0)
{
    V2 *v;
    float d;
    float nx;

    d = D_284408 - a0->f38 - 1.0f;
    v = a0->v;
    nx = v->x - d;
    v->x = d;
    v->y = v->y + nx;
    a0->flag = 3;
}
