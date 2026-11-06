/* LEVEL_01.REL:0x0BB5D8: Ghidra body 88 bytes.
 * Pinned pure C links 92 bytes and first differs at +18.
 * Recheck the common global base and zero-store schedule. No matching credit.
 */
extern unsigned char D_00328A30[];
extern void func_0BC338(int);
extern void func_0BB630(void);
extern void func_0BB420(void);

void func_0BB5D8(void)
{
    func_0BC338(3);
    *(int *)(D_00328A30 + 0x58) = 0;
    *(int *)(D_00328A30 + 0x08) = 0;
    *(int *)(D_00328A30 + 0x0c) = 0;
    *(int *)(D_00328A30 + 0x10) = 0;
    *(int *)(D_00328A30 + 0x18) = 0;
    *(int *)(D_00328A30 + 0x14) = 0;
    *(int *)(D_00328A30 + 0x04) = 0;
    *(int *)(D_00328A30 + 0x1c) = 0;
    D_00328A30[0x1d] = 0;
    *(int *)(D_00328A30 + 0x28) = 0;
    func_0BB630();
    func_0BB420();
}
