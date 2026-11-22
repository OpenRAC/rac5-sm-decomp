/* USA LEVEL_01.REL:0x1394D0, 204-byte candidate (21 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Node {
    struct Node *next;
    char pad_04[0x10];
    struct Node *back;
} Node;

typedef struct Rec {
    Node node;
    unsigned char b18;
    char pad19[0x38 - 0x19];
    int *slots[8];
    char pad58[0xED - 0x58];
    unsigned char armed;
} Rec;

typedef struct Obj {
    char pad0[0x58];
    Rec *rec;
} Obj;

extern int *D_001F6398;
extern void func_097840(int *p);

void func_1394D0(Obj *o)
{
    Rec *r = o->rec;
    int **slot;
    unsigned int i;

    if (r->armed != 0) {
        slot = r->slots;
        for (i = 0; i < 8; i++) {
            if (*slot != 0) {
                if (*slot == D_001F6398) {
                    D_001F6398 = 0;
                } else {
                    func_097840(*slot);
                }
                *slot = 0;
            }
            r->slots[i] = 0;
            slot++;
        }
    }
    if (r->node.back != 0) {
        r->node.back->next = r->node.next;
        if (r->node.next == 0) {
            r->node.back = 0;
        } else {
            r->node.next->back = r->node.back;
            r->node.back = 0;
        }
    }
    r->b18 = 1;
}
