/* LEVEL_17:0x172CA0 -- placement copy of LEVEL_16_17F658.c: probes for ground below a point raised above the object and lowers the stored height when it hits. */
typedef struct State {
    unsigned char pad_00[0x14];
    float height;
    int flag;
} State;

typedef struct Object {
    unsigned char pad_00[0x30];
    float pos[3];
    unsigned char pad_3C[0x1C];
    State *state;
} Object;

extern float D_001CF704[1];
extern int func_01DE00(float *out, float *query, float *point, int a, int b, float f);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

int func_172CA0(Object *object)
{
    State *state;
    float query[8];
    float q[3];

    state = object->state;
    state->flag = 0;
    Copy3(q, object->pos);
    q[1] = q[1] + 0.2f;
    if ((unsigned char)func_01DE00(&state->height, query, q, 56, 0, q[1] - D_001CF704[0])) {
        state->height -= 0.2f;
        return 1;
    }
    return 0;
}
