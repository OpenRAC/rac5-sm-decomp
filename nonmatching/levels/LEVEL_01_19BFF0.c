/* USA LEVEL_01.REL:0x19BFF0. Retained C hypothesis, not a match.
 * The pinned profile links 476 bytes against a 520-byte candidate body;
 * the first difference is at body byte 4. Control flow and the random
 * factor still need semantic review; see docs/MATCHING-BLOCKERS.md. */
typedef struct { float x, y, z; } Vec3;
extern Vec3 D_00217E88;
extern float D_002251A4;
extern int rand(void);
extern float sqrtf(float value);

void func_19BFF0(char *object, char *other) {
    float *v;
    float f3, f4;
    Vec3 delta;
    Vec3 cross;

    *(unsigned char *)(object + 0x45) = 3;
    v = *(float **)(object + 0x54);
    **(int **)(object + 0x58) = (int)other;
    v[0] = D_00217E88.x * 0.10000001f;
    v[1] = D_00217E88.y * 0.10000001f;
    v[2] = D_00217E88.z * 0.10000001f;
    if (other != 0) {
        float zero = 0.0f;
        delta.x = *(float *)(other + 0x30) - *(float *)(object + 0x30);
        delta.y = *(float *)(other + 0x34) - *(float *)(object + 0x34);
        delta.z = *(float *)(other + 0x38) - *(float *)(object + 0x38);
        cross.x = D_00217E88.y * delta.z - D_00217E88.z * delta.y;
        cross.y = D_00217E88.z * delta.x - D_00217E88.x * delta.z;
        cross.z = D_00217E88.x * delta.y - D_00217E88.y * delta.x;
        f4 = D_002251A4;
        f4 = (float)rand() * 4.656613e-10f * zero + f4;
        v[0] = v[0] + cross.x * f4;
        v[1] = v[1] + cross.y * f4;
        v[2] = v[2] + cross.z * f4;
    }
    f4 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (f4 < 2.384185791015625e-7f) {
        v[3] = 0.0f;
    } else {
        f4 = sqrtf(f4);
        f3 = 1.0f / f4;
        v[0] = v[0] * f3;
        v[2] = v[2] * f3;
        v[1] = v[1] * f3;
        v[3] = f4;
    }
}
