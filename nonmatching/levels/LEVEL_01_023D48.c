/* LEVEL_01.REL:0x023D48: Ghidra body 192 bytes.
 * Pure C with `pinned` links 204 bytes and first differs at +32.
 * Recheck 64-bit mask synthesis and field width evidence. No matching credit.
 */
extern void func_023150(float);
extern void func_07C670(int, int);
extern void func_07C7D0(int);

void func_023D48(char *record, int mode)
{
    int instance;
    if (mode != 0) {
        if (*(int *)(record + 0x9c4) == 12) {
            *(int *)(record + 0x9c4) = 2;
            func_023150(0.0f);
        }
    } else {
        if (*(int *)(record + 0x9c4) != 12) {
            instance = *(int *)(record + 0x5a4);
            *(int *)(record + 0x9c4) = 12;
            if (instance != 0) {
                func_07C670(instance, 1);
                if ((*(unsigned int *)(instance + 100) & 6) != 0)
                    func_07C7D0(instance);
                *(int *)(record + 0x5a4) = 0;
            }
            *(int *)(record + 0x9a4) = 0;
            *(int *)(record + 0x9c0) = 0;
            *(long long *)(record + 0x960) &=
                -8796093022209LL;
            record[0x9cd] = 0;
        }
    }
}
