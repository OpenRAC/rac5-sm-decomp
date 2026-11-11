/* Wraps two level angles into [-pi, pi]; the second is only touched when the
   record is active. */
typedef struct {
    float *reference;   /* +0x00: pair of level-owned reference angles */
    float angle0;       /* +0x04 */
    float angle1;       /* +0x08 */
    int pad[5];         /* +0x0C .. +0x1F */
    int active;         /* +0x20 */
} LevelAngle;

#define LEVEL_PI 3.14159265f
#define LEVEL_TWO_PI 6.2831853f

void func_0756C0(LevelAngle *a) {
    float first = a->angle0 - a->reference[0];

    if (first > LEVEL_PI) {
        first -= LEVEL_TWO_PI;
    } else if (first < -LEVEL_PI) {
        first += LEVEL_TWO_PI;
    }
    a->angle0 = first;

    if (a->active) {
        float second = a->angle1 + a->reference[1];

        if (second > LEVEL_PI) {
            second -= LEVEL_TWO_PI;
        } else if (second < -LEVEL_PI) {
            second += LEVEL_TWO_PI;
        }
        a->angle1 = second;
    }
}
