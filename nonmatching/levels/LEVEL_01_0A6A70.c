/* LEVEL_01.REL:0x0A6A70, bounded 176-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +4. Not linked into the accepted
 * gate or counted.
 * Reopen: The idx < 0xB bound is compared in 64 bits (sltiu) while the table index is computed in 32 bits (mult). Reopen by separating the two with a temporary.
 */
extern int func_0A69A0(void);
extern void func_0A7360(int oldType, int newType);
extern int DAT_001f68e0;
extern int DAT_001f68e4;
extern int DAT_001f7060[];

int func_0A6A70(unsigned long idx, unsigned int type)
{
    int old = DAT_001f68e4;

    if (func_0A69A0() != 0 && idx < 0xB && type < 3 &&
        *(int *)((char *)DAT_001f7060 + type * 4 + (int)idx * 0xC) != 0) {
        DAT_001f68e0 = (int)idx;
        DAT_001f68e4 = type;
        if (old != (int)type)
            func_0A7360(old, type);
        return 1;
    }
    return 0;
}
