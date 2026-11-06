/* LEVEL_01.REL:0x050F30, bounded 200-byte candidate.
 * Isolated pinned C object: 188 bytes; first linked
 * difference at body byte +22. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail keeps the 0x240000 page in $s2 and reuses the base; the pinned chain rematerialises 0x238CC8. Reopen by keeping the base live across the calls.
 */
extern void func_07CD28(int a, int b, int c, int d, float e, float f);
extern void func_0809D0(float a, float b, float c, float d, int e, void *f,
                        char *g, int h, int i, int j, int k, int l);

extern char D_00238CC8[];
extern void *D_001F460C;

void func_00050F30(char *param_1)
{
    char *base = D_00238CC8;

    if (*(unsigned short *)(param_1 + 0x108) != *(int *)(base + 0x24)) {
        if (*(int *)(base + 0x24) == 3) {
            *(int *)(param_1 + 0x36c) = 0x21;
            func_07CD28(*(int *)(param_1 + 0x59c), 0x21, 0, 1, 0.3f, 0.0f);
            if (D_001F460C != 0) {
                func_0809D0(*(float *)((char *)D_001F460C + 0x14),
                            *(float *)((char *)D_001F460C + 0x18),
                            *(float *)((char *)D_001F460C + 0x1c),
                            *(float *)((char *)D_001F460C + 0x20),
                            *(int *)(param_1 + 0x59c), D_001F460C,
                            base + 0x34, 0, 0, 0, 0, 1);
            }
        }
        *(unsigned short *)(param_1 + 0x108) = *(unsigned short *)(base + 0x24);
    }
}
