/* USA LEVEL_02.REL:0x1C0DD0, 120-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 120 linked bytes; first differing word +0x1C.
 * Unaccepted; no matching credit. Recover the distance helper and boolean-result scheduling. The shared region-test graph also has inconsistent accepted callers.
 */
extern void func_01AC80(float *point);
extern int func_08B060(char *region, float *point);
int func_1C0DD0(char *object)
{
    float point[4];
    float dx, dz;
    func_01AC80(point);
    dz = *(float *)(object + 0x38) - point[2];
    dx = *(float *)(object + 0x30) - point[0];
    if (dx * dx + dz * dz < 900.0f) {
        char *resource = *(char **)(object + 0x54);
        return func_08B060(*(char **)(resource + 0x2C), point) != 0;
    }
    return 0;
}
