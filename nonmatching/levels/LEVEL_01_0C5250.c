/* LEVEL_01.REL:0x0C5250, bounded 176-byte candidate.
 * Isolated pinned C object: 176 bytes; first linked
 * difference at body byte +0. Not linked into the accepted
 * gate or counted.
 * Reopen: The call is now func_0AE708(0x20a, &a, 0.0f), but the frame is 0x40 with $s0-$s4 instead of the retail's 0x20 with $ra alone. Reopen with a source shape that needs no saved registers.
 */
extern int D_0032BA00;
extern int D_0032BA04;
extern int D_0032BA08;
extern int D_0032BA0C;
extern int D_0032BA10;
extern int D_0032BA14;
extern int D_0032B9F0;
extern int D_0032B9F4;
extern int D_0032B9F8;
extern int D_0032B9FC;
extern int D_00200B24;
extern void func_0AE708(int, void *, float);

void func_000C5250(void)
{
    int a;
    int b;
    int c;
    int d;

    func_0AE708(0x20a, &a, 0.0f);
    D_0032BA00 = (c - a) / 2 + a;
    D_0032B9F0 = b;
    D_0032BA14 = 0xd2;
    D_0032BA04 = (d - b) / 2 + b;
    D_0032BA08 = ((D_0032BA00 - a) + 0x100) - D_00200B24;
    D_0032BA10 = ((c - D_0032BA00) + 0x100) - D_00200B24;
    D_0032B9F4 = a;
    D_0032B9F8 = c;
    D_0032B9FC = d;
    D_0032BA0C = 0xd2;
}
