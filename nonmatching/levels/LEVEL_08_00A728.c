/* LEVEL_08.REL:0x00A728, bounded 56-byte retail body.
 * Pinned C links 56 bytes; first difference at body byte +10.
 * The pinned compiler links 56 bytes with three float arguments but chooses another global-pointer register and load order. Reopen with the call prototype and field layout.
 */
extern char *D_00237DD4;
extern void func_002128(int, int, int, void *, void *, void *);

void func_00A728(void)
{
    char *record = D_00237DD4;
    func_002128(*(int *)(record + 0x30c), *(int *)(record + 0x318),
              *(int *)(record + 0x324), record + 0x30,
              record + 0x2cc, record + 0x2f0);
}
