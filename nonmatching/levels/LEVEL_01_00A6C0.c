/* LEVEL_01.REL:0x00A6C0, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +10.
 * The pinned compiler links 56 bytes with three float arguments but chooses another global-pointer register and load order. Reopen with the call prototype and field layout.
 */
extern char *D_001EF254;
extern void func_002108(float, float, float, void *, void *, void *);
void func_00A6C0(void)
{
    char *record = D_001EF254;
    func_002108(*(float *)(record + 0x30c), *(float *)(record + 0x318),
                *(float *)(record + 0x324), record + 0x30,
                record + 0x2cc, record + 0x2f0);
}