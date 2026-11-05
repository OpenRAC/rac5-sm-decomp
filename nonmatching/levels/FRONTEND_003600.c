/* FRONTEND.REL:0x003600, bounded 52-byte candidate.
 * Isolated pinned C object: 48 bytes; first linked difference
 * at body byte +6. Not linked into the accepted gate or counted.
 * Reopen: Recover the global flag store and imported-call argument register order.
 */
extern char *D_00027E9C;
extern unsigned char MCP_WideScreenMaster;
void MEMCARD_SetWideScreenToMemcard__FUi(unsigned int);

void func_003600(void)
{
    unsigned int enabled = *(int *)(D_00027E9C + 0x20) != 0;
    MCP_WideScreenMaster = (unsigned char)enabled;
    MEMCARD_SetWideScreenToMemcard__FUi(enabled);
}
