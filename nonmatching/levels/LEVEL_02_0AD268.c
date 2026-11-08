/* LEVEL_02.REL:0x0AD268: reviewed 68-byte candidate.
 * pinned C with gnu-ee-trial links 64 bytes; first differs at +0.
 * Retry: Recover the two-global address composition and branch layout without
 * artificial compiler steering.
 * No matching credit.
 */
extern char D_002CB230[];
extern char D_0030C230[];

int func_0AD268(void)
{
    char *base = D_002CB230 + 0x60000;

    if (*(int *)(base + 0x1800) == -1)
        return 0;
    if (*(int *)(base + 0x1804) == -1)
        return 0;
    return (int)D_0030C230 != -1;
}
