/* LEVEL_03.REL:0x1E1048, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_003B3A44;
extern unsigned int D_00221EEC;
extern unsigned int D_002B2F64;
extern unsigned int D_003B3A3C;
extern unsigned int D_003B3A48;

void func_1E1048(void)
{
    D_003B3A44 = 0;
    D_00221EEC = (D_00221EEC & 0xf800ffffu) | (D_002B2F64 << 16);
    D_003B3A3C = 0;
    D_003B3A48 = 0;
}
