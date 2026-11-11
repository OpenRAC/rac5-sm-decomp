/* LEVEL_09:0x18F7B8 -- when the active object reaches a spot not too close to its position, latches the target points into its state and stores a scaled distance. */

struct State_18F7B8 {
    char pad0[0x1C];
    float p1c[3];
    float p28[3];
    float p34[3];
    float p40[3];
    float dist;
};

struct Obj_18F7B8 {
    char pad0[0x10];
    float v10[4];
    float v20[4];
    float pos[4];
    char pad1[0x5];
    unsigned char mode;
    char pad2[0x12];
    struct State_18F7B8 *state;
};

extern struct Obj_18F7B8 *D_0021CBF4;
extern float D_00201A88[4];

extern float func_11CE90(float *a0, float *a1, int a2);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_18F7B8(struct Obj_18F7B8 *obj, float *a, float *b, float *c, int check)
{
    struct State_18F7B8 *st;
    struct Obj_18F7B8 *cur;
    float dx;
    float dz;
    float tmp[4];

    cur = D_0021CBF4;
    st = obj->state;
    if (cur == obj) {
        if (cur->mode == 0) {
            if (check != 0) {
                dx = cur->pos[0] - a[0];
                dz = cur->pos[2] - a[2];
                if (dx * dx + dz * dz < 1.0f) {
                    return;
                }
            }
            cur->mode = 1;
            Copy3(st->p1c, a);
            Copy3(st->p28, b);
            Copy3(st->p34, c);
            Copy3(st->p40, cur->pos);
            *(int *)((char *)cur + 0x70) = 0;
            tmp[0] = D_00201A88[0];
            tmp[1] = D_00201A88[1];
            tmp[2] = D_00201A88[2];
            tmp[3] = D_00201A88[3];
            st->dist = func_11CE90(cur->v10, b, 1) / 105.0f;
        }
    }
}
