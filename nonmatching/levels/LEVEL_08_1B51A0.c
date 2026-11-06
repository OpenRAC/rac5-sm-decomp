/* LEVEL_08.REL:0x1B51A0, bounded 56-byte retail body.
 * Pinned C links 60 bytes; first difference at body byte +4.
 * The pinned compiler links 60 bytes and schedules float constants and byte store differently before the call. Reopen with the original float-argument prototype and value lifetime.
 */
extern void func_084C98(float, float, char *, int, int, int);
void func_1B51A0(char *record, int value)
{
    record[0x45] = value;
    func_084C98(0.15f, 0.0f, record, value, 0, 1);
}