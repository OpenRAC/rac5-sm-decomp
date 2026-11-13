/* USA LEVEL_01.REL:0x0AE8C0, 116-byte candidate.
 * Measured pinned/gnu-ee-trial: 112 linked bytes; first differing word +0x2C.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
struct Object { int pad; unsigned int flags; int pad2[3]; unsigned int count; };
extern struct Object *D_001FBE0C;
extern int D_001F71C8;
extern unsigned char D_001FBDF6;
void *func_0AE8C0(unsigned int index)
{
    struct Object *object = D_001FBE0C;
    unsigned int selected = index;
    unsigned int flag;
    int override;
    char **entries;
    if (!object) return 0;
    flag = object->flags & 1;
    override = D_001F71C8;
    D_001FBDF6 = flag;
    selected = override != -1 ? override : selected;
    if (flag) { if (!(object->flags & 2)) return 0; }
    entries = (char **)(object + 1);
    if (selected < object->count) return entries[selected] + 8;
    return 0;
}
