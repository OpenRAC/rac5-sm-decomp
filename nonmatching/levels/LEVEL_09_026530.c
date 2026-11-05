/* LEVEL_09.REL:0x026530, bounded 32-byte body.
 * Isolated pinned C links 32 bytes; first difference at body byte +6:
 * the mask and data-pointer temporaries use the opposite registers.
 * Reopen: recover source-level lifetimes or qualify a compiler route
 * that selects the retail registers. Operand order, local pointers,
 * typed field views and five other qualified cc1 routes did not.
 */
extern char *D_001DDDAC;

unsigned int func_026530(int index, unsigned int bit)
{
    return *(unsigned short *)(D_001DDDAC + index + 0x8c0) &
           (1u << bit);
}
