/* LEVEL_02.REL:0x07AA10: reviewed 96-byte candidate.
 * pinned C with gnu-ee-trial links 92 bytes; first differs at +28.
 * Retry: Recover the boolean temporary and guarded-return branch schedule while
 * retaining the pointer-key getter contract; current C links 92/96 bytes and first
 * differs at +28.
 * No matching credit.
 */
extern void *func_07B648(void *key);

int func_07AA10(char *object)
{
    int result = 0;
    char *owner = *(char **)(object + 0x40);
    char *table = *(char **)(owner + 0x10);
    if ((*(unsigned int *)(table + 0x3c) & 0x2002) == 0) {
        if (*(int *)(object + 0x48) != 0) {
            if ((*(unsigned int *)(object + 0x64) & 0x4000) == 0) {
                result = func_07B648(object) == 0;
            }
        }
    }
    return result;
}
