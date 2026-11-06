/* LEVEL_01.REL:0x069148: Ghidra body 112 bytes.
 * Pinned pure C links 124 bytes and first differs at +24.
 * Recheck absolute-value lowering and clamp branches. No matching credit.
 */
float func_069148(float position, float velocity, float limit,
                  float elapsed, float step)
{
    int crossed;
    position = position + elapsed * velocity;
    limit = limit * __builtin_fabsf(velocity);
    if (position < 0.0f) {
        limit = -limit;
        if (limit <= position) {
            return position;
        }
        position = position + step;
        crossed = limit < position;
    } else {
        if (position <= limit) {
            return position;
        }
        position = position - step;
        crossed = position < limit;
    }
    if (crossed) {
        position = limit;
    }
    return position;
}
