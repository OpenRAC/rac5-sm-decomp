/* Wrap an angle into [-pi, pi] and, when the record is active, apply the
   same wrap to a second angle fed by the next source value.
   Shared body: 17 placements across the level modules (0x06B578 in LEVEL_22). */
typedef struct {
    float *src;
    float angle;
    float other;
    int pad0[5];
    int active;
} AngleState;

void func_00006B578(AngleState *s) {
    float value = s->angle - *s->src;

    if (value > 3.14159265f)
        value -= 6.28318531f;
    else if (value < -3.14159265f)
        value += 6.28318531f;
    s->angle = value;

    if (s->active != 0) {
        float other = s->other + s->src[1];

        if (other > 3.14159265f)
            other -= 6.28318531f;
        else if (other < -3.14159265f)
            other += 6.28318531f;
        s->other = other;
    }
}
