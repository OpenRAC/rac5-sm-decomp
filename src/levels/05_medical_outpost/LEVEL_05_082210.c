/* LEVEL_05:0x082210 -- placement copy of LEVEL_01_084890.c: transforms a point into volume space, clamps to box/sphere/cylinder, and transforms back if clamped. */
extern float sqrtf(float);
extern void func_121920(float *out, void *m, float *src);

struct Volume084890 {
    unsigned char pad00[0x4];
    unsigned char m04[0x40];
    unsigned char m44[0x44];
    unsigned char type;
};

int func_082210(struct Volume084890 *vol, float *pos)
{
    float v[3];
    int inside;

    func_121920(v, vol->m44, pos);
    inside = 1;
    switch (vol->type) {
    case 0:
        if (v[0] < -1.0f) {
            v[0] = -1.0f;
            inside = 0;
        } else if (v[0] > 1.0f) {
            v[0] = 1.0f;
            inside = 0;
        }
        if (v[1] < -1.0f) {
            v[1] = -1.0f;
            inside = 0;
        } else if (v[1] > 1.0f) {
            v[1] = 1.0f;
            inside = 0;
        }
        if (v[2] < -1.0f) {
            v[2] = -1.0f;
            inside = 0;
        } else if (v[2] > 1.0f) {
            v[2] = 1.0f;
            inside = 0;
        }
        break;
    case 1:
        {
            float d2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
            if (d2 > 1.0f) {
                float inv = 1.0f / sqrtf(d2);
                v[0] *= inv;
                v[1] *= inv;
                v[2] *= inv;
                inside = 0;
            }
        }
        break;
    case 2:
        if (v[1] < -1.0f) {
            v[1] = -1.0f;
            inside = 0;
        } else if (v[1] > 1.0f) {
            v[1] = 1.0f;
            inside = 0;
        }
        {
            float d2 = v[0] * v[0] + v[2] * v[2];
            if (d2 > 1.0f) {
                float inv = 1.0f / sqrtf(d2);
                v[0] *= inv;
                v[2] *= inv;
                inside = 0;
            }
        }
        break;
    default:
        return 0;
    }

    if (inside) {
        return 1;
    }
    func_121920(pos, vol->m04, v);
    return 0;
}
