/* USA LEVEL_04.REL:0x197870, complete 80-byte body.
 * The finish helper receives the owner and its record from offset 0x58.
 * Its access at record+0x4C establishes the additional record field below. */
/* USA LEVEL_04.REL:0x197870, 80-byte candidate (14 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Node {
    struct Node *next;
    char pad4[0x10];
    struct Node *back;
} Node;

typedef struct Rec {
    char pad0[4];
    Node node;
    char pad1C[0x4C - 0x1C];
    int value4C;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern void func_035400(char *unused, char *record);

void func_197870(Obj *o)
{
  Rec *r = o->rec;
  Node *n = &r->node;
  if (n->back != 0)
  {
    n->back->next = r->node.next;
    if (r->node.next != 0)
    {
      r->node.next->back = n->back;
    }
    n->back = 0;
  }
  func_035400((char *) o, (char *) r);
}
