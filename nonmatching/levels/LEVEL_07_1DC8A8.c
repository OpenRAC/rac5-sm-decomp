/* LEVEL_07.REL:0x1DC8A8: reviewed 84-byte candidate.
 * Returns a scaled random float offset from a base value.
 * pinned C with gnu-ee-trial links 84/84 bytes; first differs at +44 (4
 * words).
 * The two float constants are allocated to swapped registers; the instructions
 * are otherwise identical.
 * Retry: Recover the order in which the constants are introduced.
 * No matching credit.
 */
int rand(void);

float func_1DC8A8(void)
{
    float r;

    r = (float)rand();
    return 0.8f + r * 4.656612873077392578125e-10f * 0.4000000357627869f;
}
