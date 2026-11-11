/* LEVEL_01:0x058738 -- lowers a float field by a delta and stores the chosen slot back. */
void func_058738(float decrement, char *state)
{
    float *field = (float *)(state + 0x96C);
    float current = *field;
    float zero = 0.0f;
    float options[2];
    float *selected = (float *)((unsigned int)options | 4);

    options[0] = current - decrement;
    options[1] = zero;
    if (zero < options[0]) {
        selected = options;
    }
    *field = *selected;
}
