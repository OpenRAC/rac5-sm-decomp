/* LEVEL_01.REL:0x063EB8: Ghidra body 152 bytes.
 * Pinned pure C links 144 bytes and first differs at +0.
 * Recheck the float/record callee ABI and stack argument layout. No matching credit.
 */
extern int D_00239178;
extern int D_00239180;
extern long long func_049C28(float, float, long long, int *, int, char *, int);

void func_063EB8(long long object)
{
    int value;
    char work[12];
    char *record = (char *)(unsigned int)object;
    if (func_049C28(0.5f, 0.75f, object, &value, 0, work, 0) == 0) {
        *(int *)(record + 0x30) = *(int *)(record + 0x344);
        *(int *)(record + 0x34) = *(int *)(record + 0x348);
        *(int *)(record + 0x38) = *(int *)(record + 0x34c);
        *(int *)(record + 0x2e0) = value;
    } else {
        D_00239180 = 0x40a000d1;
        D_00239178 = 3;
        *(int *)(record + 0x1b8) = 0;
    }
}
