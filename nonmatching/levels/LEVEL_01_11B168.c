/* USA LEVEL_01:11B168, 192-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 192 bytes: 24 differing words; first difference +0x0. No matching credit.
 * Remaining issue: float register allocation in one block: loading z, x, y then the three
 * maximum values as locals before any store (252 orders of the point/max loads and statements
 * tried) gives the retail accumulators f1/f2/f4/f5/f3/f0 (40 -> 24 words), but the point values
 * and difference temporaries still differ (retail z f12, x f7, y f8); inline MinF/MaxF helpers
 * reload the point after each store (204 B); 13 more placements share these bytes
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_01:0x11B168 -- widens a min/max box by one point with averaged absolute differences. */
void func_11B168(float *minimum, float *maximum, const float *point)
{
    float z = point[2];
    float x = point[0];
    float y = point[1];
    float max_x = maximum[0];
    float max_y = maximum[1];
    float max_z = maximum[2];
    minimum[0] = ((minimum[0] + x) - __builtin_fabsf(x - minimum[0])) * 0.5f;
    minimum[1] = ((minimum[1] + y) - __builtin_fabsf(y - minimum[1])) * 0.5f;
    minimum[2] = ((minimum[2] + z) - __builtin_fabsf(z - minimum[2])) * 0.5f;
    maximum[0] = (max_x + x + __builtin_fabsf(x - max_x)) * 0.5f;
    maximum[1] = (max_y + y + __builtin_fabsf(y - max_y)) * 0.5f;
    maximum[2] = (max_z + z + __builtin_fabsf(z - max_z)) * 0.5f;
}
