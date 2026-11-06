/* LEVEL_02.REL:0x0246A8, bounded 192-byte candidate.
 * Isolated pinned C object: 204 bytes; first linked
 * difference at body byte +32. Not linked into the accepted
 * gate or counted.
 * Reopen: Recheck the measured register or order difference.
 */
extern void func_023AB0(float);
extern void func_082F58(int, int);
extern void func_0830B8(int);

void func_000246A8(int param, int arg)
{
    int obj;

    if (arg != 0) {
        if (*(int *)(param + 0x9C4) == 0xC) {
            *(int *)(param + 0x9C4) = 2;
            func_023AB0(0.0f);
        }
    } else {
        if (*(int *)(param + 0x9C4) != 0xC) {
            obj = *(int *)(param + 0x5A4);
            *(int *)(param + 0x9C4) = 0xC;
            if (obj != 0) {
                func_082F58(obj, 1);
                if ((*(unsigned int *)(obj + 0x64) & 6) == 0) {
                    *(int *)(param + 0x5A4) = 0;
                } else {
                    func_0830B8(obj);
                    *(int *)(param + 0x5A4) = 0;
                }
            }
            *(int *)(param + 0x9A4) = 0;
            *(int *)(param + 0x9C0) = 0;
            *(unsigned long long *)(param + 0x960) &= 0xFFFFF7FFFFFFFFFFULL;
            *(unsigned char *)(param + 0x9CD) = 0;
        }
    }
}
