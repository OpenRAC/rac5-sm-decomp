/* LEVEL_23.REL:0x1A2248, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_00366704;
extern unsigned int D_001DC2A4;
extern unsigned int D_00269524;
extern unsigned int D_003666FC;
extern unsigned int D_00366708;

void func_1A2248(void)
{
    D_00366704 = 0;
    D_001DC2A4 = (D_001DC2A4 & 0xf800ffffu) | (D_00269524 << 16);
    D_003666FC = 0;
    D_00366708 = 0;
}
