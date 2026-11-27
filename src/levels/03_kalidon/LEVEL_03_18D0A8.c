/* LEVEL_03:0x18D0A8 -- marks the object and, when its selected entry carries a link, unlinks the object node from its list. */
typedef struct Node Node;
struct Node {Node *next;char pad[16];Node *previous;};
typedef struct {char pad[0x14];void *link;char tail[0x1C];} Entry;
typedef struct {char pad[4];Entry *entries;} Header;
typedef struct {char pad[0x40];Header *header;unsigned char selected;char gap[0x13];Node *node;char gap2[8];unsigned int flags;} Obj;
static __inline__ void unlink_node(Node *n) {
 if(n->previous) {n->previous->next=n->next;if(n->next)n->next->previous=n->previous;n->previous=0;}
}

static __inline__ unsigned char is_linked(Node *n) { return n->previous != 0; }
void func_18D0A8(Obj *o) {
 Node *n=o->node;
 o->flags|=0x20;
 if(o->header->entries[o->selected].link) {
  if(is_linked(n)) unlink_node(n);
 }
}
