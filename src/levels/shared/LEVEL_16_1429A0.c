/* LEVEL_16:0x1429A0 -- clears the owner relation when both entries share a value, then zeroes the slot. */
typedef struct Entry {char pad[32]; int value; char tail[16];} Entry;
typedef struct Table {int unused; Entry *entries;} Table;
typedef struct Node {char pad[64]; Table *table; unsigned char index; char middle[19]; int *slot; char gap[1412]; struct Node *relation;} Node;
void func_1429A0(Node *self,Node *owner)
{
 int *slot=self->slot;
 if(owner && owner->relation) {
  Node *other=owner->relation;
  if(other->table->entries[other->index].value==self->table->entries[self->index].value) owner->relation=0;
 }
 *slot=0;
}
