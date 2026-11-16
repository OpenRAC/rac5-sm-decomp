/* USA SCUS_976.15 boot: anonymous body at 0x01E92FC0, inside the next-label
 * interval of SND_StopATRACInstance__FP13ATRACInstance.
 * Observed body: 792 bytes.
 * Measured 15 November 2026, -O2 -G0, default GNU assembler, independent SN
 * link at the retail address:
 * - gnu-ee-trial-divpad-blockmove: 800 compiled bytes, 492 equal positions
 *   in the 792-byte body, first differing byte +0x38.
 * - gnu-ee-trial: 784 bytes, 394 equal; rebuilt default route: 784, 384.
 * Not exact; no complete-program gate, promotion or C matching credit.
 * Computes the volume and pan of a positional sound: picks the nearest of
 * the listener cameras, derives a pan angle from the sound's position in
 * that camera's space, attenuates the volume between two distances and
 * converts it through the volume helper at 0x01E92E98. Without a position
 * it converts the plain volume, without testing the volume output pointer,
 * as retail does.
 * Three differences remain: retail keeps two unreduced index multiplications
 * in the camera loop; it loads pi before 180 in the angle conversion; and
 * its division padding is absent where the previous instruction computed
 * the dividend (blocker 09), which no available profile reproduces.
 * The two-element camera array assumes a count of at most two, which this
 * body does not establish. Reopen with a qualified padding rule and
 * evidence for the camera loop's original form.
 */
typedef struct { float x, y, z; } VEC3;
typedef struct { float m[16]; } MATRIX4;
typedef struct {
    MATRIX4 inverse;
    VEC3 position;
    char pad[4];
} SoundCamera;
typedef struct {
    char pad[0x50];
    SoundCamera camera[2];
    unsigned int camera_count;
} SoundGlobals;
typedef struct SND_Positional {
    int state;
    void *sound;
    unsigned int result;
    char pad0c[4];
    struct SND_Positional **link;
    float field14;
    float field18;
    unsigned char field1c, field1d, field1e, field1f;
    unsigned char field20, field21, field22;
    char pad23;
    VEC3 position;
    float field30, field34, field38, field3c, field40, field44, field48;
    int field4c, field50;
    unsigned char field54;
    char pad55[3];
} SND_Positional;
extern SoundGlobals g_snd;
extern void VEC_MulMat4Vec3__FP4VEC3PC7MATRIX4PC4VEC3(VEC3 *, const MATRIX4 *, const VEC3 *);
extern float atan2f(float, float);
extern float sqrtf(float);
extern float fabsf(float);
extern int func_1E92E98(float);

void func_1E92FC0(SND_Positional *p, int *volumeOut, int *panOut)
{
    int pan = 0;
    int volume = 1024;

    if (p) {
        if (p->field20) {
            float distanceSquared = 100000.0f;
            const MATRIX4 *matrix = 0;

            if (g_snd.camera_count < 2) {
                const VEC3 *b = &g_snd.camera[0].position;
                const VEC3 *a = &p->position;
                float x = a->x - b->x;
                float y = a->y - b->y;
                float z = a->z - b->z;
                matrix = &g_snd.camera[0].inverse;
                distanceSquared = (x * x + y * y) + z * z;
            } else {
                float best = distanceSquared;
                unsigned int i;

                for (i = 0; i < g_snd.camera_count; i++) {
                    if (!matrix) {
                        const VEC3 *b = &g_snd.camera[i].position;
                        const VEC3 *a = &p->position;
                        float x = a->x - b->x;
                        float y = a->y - b->y;
                        float z = a->z - b->z;
                        matrix = &g_snd.camera[i].inverse;
                        best = (x * x + y * y) + z * z;
                    } else {
                        const VEC3 *b = &g_snd.camera[i].position;
                        const VEC3 *a = &p->position;
                        float x = a->x - b->x;
                        float y = a->y - b->y;
                        float z = a->z - b->z;
                        float distance = (x * x + y * y) + z * z;
                        if (distance < best) {
                            best = distance;
                            matrix = &g_snd.camera[i].inverse;
                        }
                    }
                }
                distanceSquared = best;
            }
            if (panOut) {
                VEC3 transformed;
                VEC_MulMat4Vec3__FP4VEC3PC7MATRIX4PC4VEC3(&transformed, matrix, &p->position);
                if (fabsf(transformed.x) > 0.0001f || fabsf(transformed.z) > 0.0001f) {
                    pan = (int)(-atan2f(transformed.x, transformed.z) * 180.0f / 3.1415927f);
                    if (pan < 0)
                        pan += 360;
                }
            }
            if (volumeOut) {
                float level = p->field14 * 0.8935546875f;
                float distance = sqrtf(distanceSquared);
                if (distance > p->field40) {
                    level = 0.0f;
                } else if (distance > p->field3c) {
                    float attenuation = (p->field40 - distance) / (p->field40 - p->field3c);
                    level *= attenuation * attenuation;
                }
                volume = func_1E92E98(level);
                p->field30 = distance;
                if (p->field34 < 0.0f)
                    p->field34 = distance;
            }
        } else {
            volume = func_1E92E98(p->field14);
        }
    }
    if (panOut)
        *panOut = pan;
    if (volumeOut)
        *volumeOut = volume;
}
