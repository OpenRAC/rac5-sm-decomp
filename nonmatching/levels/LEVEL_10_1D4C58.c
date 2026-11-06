/* LEVEL_10.REL:0x1D4C58, bounded 64-byte retail body.
 * Pinned C links 68 bytes; first difference at body byte +0.
 * The global state initialization uses different address and value registers. Reopen with the original data structure and types.
 */
extern unsigned int D_003A200C;
extern unsigned int D_00211F9C;
extern unsigned int D_002A14E4;
extern unsigned int D_003A2004;
extern unsigned int D_003A2010;

void func_1D4C58(void)
{
    D_003A200C = 0;
    D_00211F9C = (D_00211F9C & 0xf800ffffu) | (D_002A14E4 << 16);
    D_003A2004 = 0;
    D_003A2010 = 0;
}
