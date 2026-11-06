/* LEVEL_02.REL:0x0934B0, bounded 188-byte candidate.
 * Isolated pinned C object: 96 bytes; first linked
 * difference at body byte +5. Not linked into the accepted
 * gate or counted.
 * Reopen: A 64-bit sub-mask chain; describe successive bitfields on a structure at offset zero instead of masking one global.
 */
extern char D_0020B318[];
extern int D_0020B314;
extern char *D_0020B310;

void func_000934B0(char *param_1)
{
    *(unsigned short *)param_1 = 0;
    *(unsigned short *)(param_1 + 8) = 0;
    *(char *)(param_1 + 10) = 0;
    *(char *)(param_1 + 11) = 0;
    *(unsigned short *)(param_1 + 12) = 0;
    *(char *)(param_1 + 14) = 0;
    *(char *)(param_1 + 15) = 0;
    *(unsigned long long *)param_1 =
        (*(unsigned long long *)param_1 & 0xffffULL) | 0x60000000ULL;
    D_0020B310 = param_1 + 16;
    D_0020B314 = D_0020B314 +
                 (((int)(param_1 + 16) - (int)D_0020B318) >> 4) * -0x10;
}
