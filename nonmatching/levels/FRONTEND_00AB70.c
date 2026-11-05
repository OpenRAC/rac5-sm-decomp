/* FRONTEND.REL:0x00AB70, bounded 56-byte candidate.
 * Isolated pinned C object: 56 bytes; first linked difference
 * at body byte +2. Not linked into the accepted gate or counted.
 * Reopen: Recover the record-stride multiply and argument-bank setup for the local call.
 */
extern char D_001230C8[];
void func_00AC18(void *, int, unsigned char, unsigned char, unsigned char);

void func_00AB70(int index, int a1, unsigned char a2, unsigned char a3, unsigned char a4)
{
    func_00AC18(D_001230C8 + index * 0x18, a1, a2, a3, a4);
}
