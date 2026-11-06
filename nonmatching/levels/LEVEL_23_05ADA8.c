/* LEVEL_23.REL:0x05ADA8, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +4 is a missing scheduling gap after
 * floating-point zero materialization. Retail compares the
 * input with zero only after that gap. Five qualified cc1
 * routes did not supply it. Reopen with a qualified, narrowly
 * tested compiler or assembler scheduling remedy.
 */
extern int D_001C7CD0;
extern float D_001C7CCC;

void func_05ADA8(float input)
{
    if (input < 0.0f)
        return;
    D_001C7CCC = input;
    D_001C7CD0 = 2;
}
