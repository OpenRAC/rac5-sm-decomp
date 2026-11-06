/* FRONTEND.REL:0x021948: Ghidra body 184 bytes.
 * Pure C with `pinned` links 176 bytes and first differs at +24.
 * Recheck branch result lifetime across the second call. No matching credit.
 */
extern char D_001EC1E8[];
extern int func_021C78(unsigned long long);
extern int func_021C40(unsigned long long);
extern unsigned int func_01F308(void *);

int func_021948(unsigned long long index, unsigned int value)
{
    char *record;
    unsigned int limit;
    int result = 0;
    if (index < 8) {
        if (func_021C78(index) != 0) {
            if (func_021C40(index) == 0 && value != 0) {
                record = D_001EC1E8 + (int)index * 0x824;
                if (value != *(unsigned int *)(record + 0x814)) {
                    limit = func_01F308(record);
                    if (value <= limit) {
                        *(unsigned int *)(record + 0x810) = value;
                        *(int *)(record + 0x81c) = 0;
                        result = 1;
                    }
                }
            }
        }
    }
    return result;
}
