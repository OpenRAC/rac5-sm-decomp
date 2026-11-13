/* USA LEVEL_03.REL:0x18D0A8, 108-byte candidate.
 * Representative measured with pinned/gnu-ee-trial: 108 linked bytes; first differing word +0x0.
 * Unaccepted; no matching credit. Recover the original types, register lifetimes or control flow before repeating this mismatch class.
 */
typedef struct Node Node;
struct Node {Node *next;char pad[16];Node *previous;};
typedef struct {char pad[0x14];void *link;char tail[0x1C];} Entry;
typedef struct {char pad[4];Entry *entries;} Header;
typedef struct {char pad[0x40];Header *header;unsigned char selected;char gap[0x13];Node *node;char gap2[8];unsigned int flags;} Obj;
static __inline__ void unlink_node(Node *n) {
 if(n->previous) {n->previous->next=n->next;if(n->next)n->next->previous=n->previous;n->previous=0;}
}
void func_18D0A8(Obj *o) {
 o->flags|=0x20;
 if(o->header->entries[o->selected].link) {
  Node *n=o->node;
  if(n->previous) unlink_node(n);
 }
}
