/* LEVEL_08.REL:0x0BD340, bounded 44-byte body.
 * Pinned C links 40 against the 44-byte retail body; first
 * difference at byte +4 is the condition/branch layout.
 * Reopen: recover the original condition source form or a
 * qualified compiler route preserving the extra test step.
 */
extern char D_00376C08[];

void func_0BD340(int index, int value)
{
    if (index < 4)
        *(int *)(D_00376C08 + index * 0x14 + 0xc) = value;
}
