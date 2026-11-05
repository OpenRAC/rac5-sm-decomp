/* LEVEL_01.REL:0x058738, bounded 60-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 60 bytes, first linked difference at body byte +15.
 * Reopen: Recover the local zero-float and stack pointer selection after the initial field load.
 * Not linked into the accepted gate or counted.
 */
void func_058738(float decrement, char *state)
{
    float *field = (float *)(state + 0x96C);
    float current = *field;
    float zero = 0.0f;
    float options[2];
    float *selected = options + 1;
    options[0] = current - decrement;
    options[1] = zero;
    if (zero < options[0])
        selected = options;
    *field = *selected;
}
