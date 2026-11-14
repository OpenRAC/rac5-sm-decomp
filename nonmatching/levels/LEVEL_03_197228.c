/* USA LEVEL_03.REL:0x197228, 100-byte candidate (14 November 2026).
 * Measured pinned: 14 differing words; first difference at 0x20.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Node Node;
struct Node {Node *next;char pad[16];Node *previous;};
typedef struct {char pad[0x14];void *link;char tail[0x1C];} Entry;
typedef struct {char pad[4];Entry *entries;} Header;
typedef struct {char pad[0x40];Header *header;unsigned char selected;char gap[0x13];Node *node;char gap2[8];unsigned int flags;} Obj;
static __inline__ void unlink_node(Node *n) {
 if(n->previous) {n->previous->next=n->next;if(n->next)n->next->previous=n->previous;n->previous=0;}
}
void func_197228(Obj *o) {
 Node *n=o->node;
 if(o->header->entries[o->selected].link) {
  if(n->previous) unlink_node(n);
 }
}
