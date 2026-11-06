/* LEVEL_01.REL:0x0A0AC0, bounded 184-byte candidate.
 * Isolated pinned C object: 204 bytes; first linked
 * difference at body byte +20. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern unsigned char D_001F6720;
extern unsigned int D_001F6710;
extern unsigned int D_001F6718;
extern unsigned int D_001F671C;
extern int D_00000054;
extern int D_00000008;

void func_0A1C30(void);

void func_0A0AC0(void)
{
    int base;
    int *p;

    if (D_001F6720 != 0)
        return;
    base = D_00000054;
    p = *(int **)(base + 8);
    *(unsigned int *)((char *)p + 0x0) = (unsigned int)D_00000008;
    *(unsigned int *)((char *)p + 0x4) = 0;
    *(unsigned int *)((char *)p + 0x8) = 0;
    *(unsigned int *)((char *)p + 0xC) = 0;
    *(unsigned int *)((char *)p + 0x10) = 0;
    *(unsigned int *)((char *)p + 0x14) = 0;
    *(unsigned int *)((char *)p + 0x18) = 0;
    *(unsigned int *)((char *)p + 0x1C) = 0;
    *(unsigned int *)(*(int *)(base + 4) + 0xC) = 0x6C010014;
    *(unsigned int *)(*(int *)(base + 4) + 0x10) = D_001F6710;
    *(unsigned int *)(*(int *)(base + 4) + 0x14) = D_001F6718;
    *(unsigned int *)(*(int *)(base + 4) + 0x18) = D_001F671C;
    *(short *)*(int **)(base + 8) = 2;
    p = (int *)(*(int *)(base + 4) + 0x30);
    *(int *)(base + 4) = (int)p;
    *(int *)(base + 8) = (int)(p - 4);
    func_0A1C30();
    D_001F6720 = 1;
}
