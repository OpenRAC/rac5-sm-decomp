/* LEVEL_02.REL:0x055E58, bounded 200-byte candidate.
 * Isolated pinned C object: 196 bytes; first linked
 * difference at body byte +24. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern void func_0835F8(float, int, int, int, int);
extern void func_0872A0(float, float, float, float, int, int, int, int, int, int, int, int);
extern char D_002501D8[];
extern int D_002095CC;

void func_00055E58(int param)
{
    if (*(unsigned short *)(param + 0x108) != *(int *)(D_002501D8 + 0x24)) {
        if (*(int *)(D_002501D8 + 0x24) == 3) {
            *(int *)(param + 0x36C) = 0x21;
            func_0835F8(0.3f, *(int *)(param + 0x59C), 0x21, 0, 1);
            if (D_002095CC != 0) {
                func_0872A0(*(float *)(D_002095CC + 0x14),
                            *(float *)(D_002095CC + 0x18),
                            *(float *)(D_002095CC + 0x1C),
                            *(float *)(D_002095CC + 0x20),
                            *(int *)(param + 0x59C), D_002095CC,
                            (int)(D_002501D8 + 0x34), 0, 0, 0, 0, 1);
            }
        }
        *(unsigned short *)(param + 0x108) =
            *(unsigned short *)(D_002501D8 + 0x24);
    }
}
