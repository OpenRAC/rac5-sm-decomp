/* LEVEL_01.REL:0x13A3A8: reviewed 164-byte candidate.
 * pinned C with gnu-ee-trial links 160 bytes; first differs at +8.
 * Retry: Recover the global 3D-reference base materialization and float-threshold
 * return layout from defined C or a per-source qualified route.
 * No matching credit.
 */
/* LEVEL_01.REL:0x13A3A8: useful C candidate, no matching credit.
   Reopen when: Recover the global 3D-reference base materialization and float-threshold return layout from defined C or a per-source qualified route. */
typedef struct {
    float x;
    float y;
    float z;
} Point;

extern char D_00235140[];

int func_13A3A8(char *object)
{
    Point *position = (Point *)(object + 0x30);
    Point *reference = (Point *)(D_00235140 + 0x30);
    float dx = position->x - reference->x;
    float dy = position->y - reference->y;
    float dz = position->z - reference->z;
    float distance = dx * dx + dy * dy + dz * dz;
    if (*(unsigned char *)(object + 0x45) == 4) {
        if (distance > 25.0f)
            goto four;
        goto zero;
    }
    if (!(distance > 36.0f))
        goto zero;
four:
    return 4;
zero:
    return 0;
}
