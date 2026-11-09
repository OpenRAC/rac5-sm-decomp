/* LEVEL_15:0x049C50 -- placement copy of LEVEL_01_0589C0.c: resets a search state block, runs a probe, then stores the probe results. */
extern int func_012E48(void *scratch, void *object, void *geometry,
                       int *index, float *value,
                       const float *normal, const float *distance_sq);
extern float func_048358(void *object, int count, float sum);
typedef struct {
    char pad_000[0x30];
    char geom[0xC58];
    int idx_C88;
    float val_C8C;
    float f_C90;
    float f_C94;
    int z_C98;
    int z_C9C;
    int z_CA0;
    char pad_CA4[0x14];
    float c_CB8;
    float c_CBC;
    char pad_CC0[4];
    int e_CC4;
    char pad_CC8[0xC];
    int z_CD4;
} State;
void func_049C50(State *state, void *object)
{
    char scratch[16];
    int index;
    float value;
    float result;
    int *zp = &state->z_C98;
    state->e_CC4 = 8;
    state->c_CB8 = 0.06666667f;
    state->c_CBC = 0.005555556f;
    state->z_CD4 = 0;
    state->z_C98 = 0;
    zp[1] = 0;
    zp[2] = 0;
    value = state->val_C8C;
    index = state->idx_C88;
    if (func_012E48(scratch, object, state->geom, &index, &value, 0, 0)) {
        result = func_048358(object, index, 0.0f);
        state->val_C8C = value;
        state->idx_C88 = index;
        state->f_C90 = result;
        state->f_C94 = result + value;
    }
}
