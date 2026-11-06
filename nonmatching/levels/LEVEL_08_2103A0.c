/* LEVEL_08.REL:0x2103A0, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_003EB494;
extern unsigned int D_00252B14;
extern unsigned int D_002E7364;
extern unsigned int D_003EB48C;
extern unsigned int D_003EB498;

void func_2103A0(void)
{
    D_003EB494 = 0;
    D_00252B14 = (D_00252B14 & 0xf800ffffu) | (D_002E7364 << 16);
    D_003EB48C = 0;
    D_003EB498 = 0;
}
