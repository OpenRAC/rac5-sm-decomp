/* LEVEL_06/0x72040 : wrap two angle deltas into [-pi, pi]. */
typedef struct {
    float *src;
    float angle_a;
    float angle_b;
    unsigned char pad[0x14];
    int active;
} State;

#define PI_F 3.14159274101257324f
#define TWO_PI_F 6.28318548202514648f

void func_00072040(State *s) {
    float a = s->angle_a - s->src[0];
    if (a > PI_F) {
        a -= TWO_PI_F;
    } else if (a < -PI_F) {
        a += TWO_PI_F;
    }
    s->angle_a = a;
    if (s->active) {
        float b = s->angle_b + s->src[1];
        if (b > PI_F) {
            b -= TWO_PI_F;
        } else if (b < -PI_F) {
            b += TWO_PI_F;
        }
        s->angle_b = b;
    }
}
