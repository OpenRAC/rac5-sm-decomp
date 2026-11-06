/* LEVEL_01.REL:0x069420: Ghidra body 128 bytes.
 * Pinned pure C links 112 bytes and first differs at +28.
 * Recheck halfword-state helper arguments and field stores. No matching credit.
 */
extern short func_03A360();

void func_069420(char *record, int enabled)
{
    int first = *(int *)(record + 0x5a4);
    int second;
    if (first != 0) {
        if (enabled == 0) {
            *(short *)(first + 0x74) = -1;
        } else {
            *(short *)(first + 0x74) = func_03A360();
        }
    }
    second = *(int *)(record + 0x5a8);
    if (second != 0) {
        if (enabled == 0) {
            *(short *)(second + 0x74) = -1;
        } else {
            *(short *)(second + 0x74) = func_03A360(record);
        }
    }
}
