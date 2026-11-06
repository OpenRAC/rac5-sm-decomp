/* LEVEL_22.REL:0x0571F8, bounded 48-byte body.
 * Pinned C links 44 against the 48-byte retail body; first
 * difference at byte +4 is a missing scheduling gap after
 * floating-point zero materialization. Retail compares the
 * input with zero only after that gap. Five qualified cc1
 * routes did not supply it. Reopen with a qualified, narrowly
 * tested compiler or assembler scheduling remedy.
 */
extern int D_00153C50;
extern float D_00153C4C;

void func_0571F8(float input)
{
    if (input < 0.0f)
        return;
    D_00153C4C = input;
    D_00153C50 = 2;
}
