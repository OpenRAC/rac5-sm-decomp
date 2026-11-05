/* LEVEL_02.REL:0x068A00, bounded 44-byte body.
 * Pinned C links 40 against the 44-byte retail body; first
 * difference at byte +4 is the condition/branch layout.
 * Reopen: recover the original condition source form or a
 * qualified compiler route preserving the extra test step.
 */
extern char D_00250668[];

void func_068A00(char *record)
{
    if (*(unsigned short *)(record + 0x108) == 0) {
        int *state = (int *)(D_00250668 + 0x20);
        if (*state == -1)
            *state = 1;
    }
}
