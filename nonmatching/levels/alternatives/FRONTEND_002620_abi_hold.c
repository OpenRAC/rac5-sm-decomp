/* FRONTEND.REL:0x002620: reviewed 28-byte candidate, held for ABI review.
 * Forwards fd, offset and whence to the lseek import.
 * pinned C with gnu-ee-trial links 28/28 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * It defines the function returning int with (int, int, int), but the accepted
 * caller FRONTEND_01E4B8.c declares it returning int with (int, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern int asyncPs2fioLseek(int, long long, int);

int func_002620(int fd, int offset, int whence)
{
    return asyncPs2fioLseek(fd, offset, whence);
}
