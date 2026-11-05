/* LEVEL_01.REL:0x09FB18, bounded 36-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 36 bytes, first linked difference at body byte +8.
 * Reopen: Recover the self-linked node pointer-store order relative to the four zeroed fields.
 * Not linked into the accepted gate or counted.
 */
struct Link { int f0, f4, f8; struct Link *next, *prev; int value, f18; };
void func_09FB18(struct Link *node, int value)
{
    struct Link *self = (struct Link *)&node->next;
    node->value = value;
    node->f0 = 0;
    node->f4 = 0;
    node->f8 = 0;
    node->f18 = 0;
    node->prev = self;
    node->next = self;
}
