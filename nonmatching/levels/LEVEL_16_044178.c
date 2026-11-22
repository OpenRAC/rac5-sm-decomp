/* USA LEVEL_16.REL:0x044178, 372-byte candidate (21 November 2026).
 * Measured pinned: 23 differing words; first difference at 0x30.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float D_0019AD24;
extern float func_044420(char *record);

void func_044178(char *record)
{
    int frames;
    int maximum_steps;
    int *selected;
    int remaining;
    float *position;
    float *velocity;
    float target;
    float stiffness;
    float damping;
    float maximum;
    float next;
    float angle;

    angle = func_044420(record);
    stiffness = *(float *)(record + 0x248);
    if (angle > 0.3490658700466156f && *(float *)(record + 0x240) > 0.0060000005178153515f) {
        target = *(float *)(record + 0x240);
        stiffness = 0.019999999552965164f;
    } else if (*(float *)(record + 0x240) == 0.0f) {
        target = *(float *)(record + 0x240);
        stiffness = stiffness + stiffness;
    } else {
        target = *(float *)(record + 0x240);
        if (target < *(float *)(record + 0x23c))
            stiffness = stiffness * 1.5f;
    }
    position = (float *)(record + 0x23c);
    velocity = (float *)(record + 0x244);
    damping = *(float *)(record + 0x24c);
    maximum = *(float *)(record + 0x250);
    maximum_steps = 2;
    frames = (int)(D_0019AD24 * 59.998802185058594f);
    selected = &frames;
    if (frames >= 2)
        selected = &maximum_steps;
    remaining = *selected;
    if (remaining > 0) {
        do {
            next = (target - *position) * stiffness - *velocity * damping;
            *velocity = next;
            if (maximum < next)
                *velocity = maximum;
            else if (next < -maximum)
                *velocity = -maximum;
            remaining--;
            *position = *position + *velocity;
        } while (remaining != 0);
    }
}
