/* LEVEL_02.REL:0x05AB60: reviewed 96-byte candidate.
 * pinned C with gnu-ee-trial links 92 bytes; first differs at +4.
 * Retry: Recover the three floating-product stack spills and update schedule under a
 * qualified compiler route.
 * No matching credit.
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;

void func_05AB60(char *state, float scale)
{
    float products[3];
    Vector3 *source = (Vector3 *)(state + 0x2F4);
    Vector3 *target = (Vector3 *)(state + 0xC5C);

    products[0] = scale * source->x;
    products[1] = scale * source->y;
    products[2] = scale * source->z;
    target->x += products[0];
    target->y += products[1];
    target->z += products[2];
}
