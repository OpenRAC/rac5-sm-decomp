/* LEVEL_01.REL:0x0589C0: reviewed 196-byte candidate.
 * pinned C with gnu-ee-trial links 192 bytes; first differs at +13.
 * Retry: Reconstruct the float-constant loading and store schedule, then close the
 * 4-byte size gap under a qualified profile.
 * No matching credit.
 */
extern int func_014F98(void *scratch, void *object, void *geometry,
                       int *index, float *value,
                       const float *normal, const float *distance_sq);
extern float func_0570C8(void *object, int count, float sum);

void func_0589C0(char *state, void *object)
{
    char scratch[16];
    int index;
    float value;
    float result;

    *(int *)(state + 0xCC4) = 8;
    *(float *)(state + 0xCB8) = 0.06666667f;
    *(float *)(state + 0xCBC) = 0.005555556f;
    *(int *)(state + 0xCD4) = 0;
    *(int *)(state + 0xC98) = 0;
    *(int *)(state + 0xCA0) = 0;
    *(int *)(state + 0xC9C) = 0;
    index = *(int *)(state + 0xC88);
    value = *(float *)(state + 0xC8C);
    if (func_014F98(scratch, object, state + 0x30,
                    &index, &value, 0, 0)) {
        result = func_0570C8(object, index, 0.0f);
        *(float *)(state + 0xC8C) = value;
        *(int *)(state + 0xC88) = index;
        *(float *)(state + 0xC90) = result;
        *(float *)(state + 0xC94) = result + value;
    }
}
