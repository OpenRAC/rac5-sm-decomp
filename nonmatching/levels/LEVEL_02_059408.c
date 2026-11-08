/* LEVEL_02.REL:0x059408: reviewed 76-byte candidate.
 * pinned C with gnu-ee-trial links 72 bytes; first differs at +32.
 * Retry: Find a natural source or qualified CC1 route retaining the retail 16-bit
 * mask after the state subtraction without altering the callee ABI.
 * No matching credit.
 */
extern void func_06FC30(void *object);

void func_059408(char *object)
{
    unsigned short state = *(unsigned short *)(object + 0x108);
    unsigned short adjusted;

    if (state == 9) {
        func_06FC30(object);
        return;
    }
    adjusted = state - 2U;
    if (adjusted > 1)
        *(int *)(object + 0xC6C) = 7;
    else
        *(int *)(object + 0xC6C) = 8;
}
