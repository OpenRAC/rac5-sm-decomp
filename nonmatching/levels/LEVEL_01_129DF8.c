/* LEVEL_01.REL:0x129DF8, bounded 56-byte candidate; 20 raw-identical
 * numbered-level placements with no body relocations. Pinned C object:
 * 56 bytes, first linked difference at body byte +8.
 * Reopen: Recover the linked-list loop entry without the compiler shortening it to a branch-likely return.
 * Not linked into the accepted gate or counted.
 */
struct Node { unsigned char pad[0x64]; int key; unsigned char pad2[8]; struct Node *next; };
struct Node *func_129DF8(struct Node *owner)
{
    struct Node *node = owner->next;
    struct Node *result = 0;
    int key;
    if (node != 0) {
        key = owner->key;
        do {
            if (node->key == key) {
                result = node;
                break;
            }
            node = node->next;
        } while (node != 0);
    }
    return result;
}
