/* LEVEL_01.REL:0x0AE870: Ghidra body 76 bytes.
 * Pinned pure C links 68 bytes and first differs at +8.
 * Recheck global pointer reuse and byte-store scheduling. No matching credit.
 */
extern char *D_001FBE0C;
extern unsigned char D_001FBDF6;

int func_0AE870(void)
{
    char *record = D_001FBE0C;
    unsigned int enabled;
    if (record == 0) {
        return 0;
    }
    enabled = *(unsigned int *)(record + 4) & 1;
    D_001FBDF6 = enabled;
    if ((*(unsigned int *)(record + 4) & 2) != 0) {
        int *selected = (int *)(record + 0x10);
        if (enabled != 0) {
            selected = (int *)(record + 0x14);
        }
        return *selected;
    }
    return 0;
}
