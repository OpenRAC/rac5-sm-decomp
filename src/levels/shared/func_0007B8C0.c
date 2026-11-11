/* LEVEL_04:0x7B8C0 / LEVEL_05:0x751D0 -- wrap two relative angles into (-pi, pi]. */
#define PI_F 3.14159265f
#define TWO_PI_F 6.28318531f

typedef struct {
    float x;
    float y;
} Vec2;

void func_0007B8C0(char *o) {
    float *p = *(float **)o;
    float a = *(float *)(o + 4) - p[0];
    if (a > PI_F)
        a -= TWO_PI_F;
    else if (a < -PI_F)
        a += TWO_PI_F;
    *(float *)(o + 4) = a;
    if (*(void **)(o + 0x20)) {
        float b = *(float *)(o + 8) + (*(Vec2 **)o)->y;
        if (b > PI_F)
            b -= TWO_PI_F;
        else if (b < -PI_F)
            b += TWO_PI_F;
        *(float *)(o + 8) = b;
    }
}
