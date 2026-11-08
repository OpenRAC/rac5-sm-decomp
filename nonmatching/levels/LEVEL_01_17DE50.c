/* LEVEL_01.REL:0x17DE50: reviewed 148-byte candidate.
 * pinned C with gnu-ee-trial links 148 bytes; first differs at +38.
 * Retry: Recover f2/f3 lifetimes for limit and next-value comparison; all qualified
 * cc1 routes keep the 148-byte body but first differ at +38.
 * No matching credit.
 */
void func_17DE50(char *state)
{
    float previous = *(float *)(state + 0x114);
    if (previous != 0.0f) {
        float next = previous + 1.50000011920929f;
        float limit = *(float *)(state + 0xa4);
        if (limit < next) {
            if (previous <= limit)
                *(float *)(state + 0x68) += 1.5f;
            if (limit < next - 5.0f) {
                *(float *)(state + 0x114) = 0.0f;
                return;
            }
        }
        *(float *)(state + 0x114) = next;
    }
}
