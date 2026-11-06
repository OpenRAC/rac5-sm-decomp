/* LEVEL_01.REL:0x0BE780: Ghidra body 116 bytes.
 * Pinned pure C links 112 bytes and first differs at +6.
 * Recheck sound state globals and the 64-bit flag update. No matching credit.
 */
extern char D_00235140[];
extern unsigned long long D_00235AA0;
extern char *D_002356DC;
extern char *D_001F3FAC;
extern void *func_06AB80(void *);
extern void func_02F5C8(int, int);
extern void func_02F750(void);

void func_0BE780(void)
{
    if (func_06AB80(D_00235140) != 0) {
        D_00235AA0 |= 0x4000000000000ULL;
        *(short *)(D_002356DC + 0x74) = -1;
    }
    if (*(char *)(D_001F3FAC + 0x1c7e) != 0) {
        func_02F5C8(*(char *)(D_001F3FAC + 0x1c7e), 1);
        func_02F750();
    }
}
