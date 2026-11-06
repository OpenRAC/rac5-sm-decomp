/* LEVEL_01.REL:0x055018: Ghidra body 196 bytes.
 * Pure C with `pinned` links 200 bytes and first differs at +2.
 * Recheck pointer-clamp source representation and stack lifetime. No matching credit.
 */
extern float D_001EF29C;

void func_055018(char *record)
{
    int frames;
    int maximum_steps;
    int *selected;
    int remaining;
    float *position = (float *)(record + 0x23c);
    float *velocity = (float *)(record + 0x244);
    float maximum = *(float *)(record + 0x250);
    float next;
    maximum_steps = 2;
    frames = (int)(D_001EF29C * 59.998802f);
    selected = &maximum_steps;
    if (frames < 2)
        selected = &frames;
    remaining = *selected;
    if (remaining > 0) {
        do {
            next = (*(float *)(record + 0x240) - *position) *
                   *(float *)(record + 0x248) -
                   *velocity * *(float *)(record + 0x24c);
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
