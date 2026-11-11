/* LEVEL_08:0x1AE998 -- tears down the nested record: unlinks it, releases two attached records and clears seven slot pointers when flagged. */
typedef struct Node Node;

struct Node {
    Node *next;
    char pad04[0x10];
    Node *prev;
    char pad18[0x1DC - 0x18];
    int slots[7];
    char pad1F8[0x39C - 0x1F8];
    char *rec39C;
    char *rec3A0;
    char pad3A4[0x3CA - 0x3A4];
    unsigned char b3CA;
};

typedef struct {
    char pad00[0x58];
    Node *nested;
} Obj;

extern void func_088AA8(char *record);
extern void func_0845F8(int slot, int flag);

void func_1AE998(Obj *o)
{
    Node *n = o->nested;
    unsigned int i;
    int *p;

    if (n->prev != 0) {
        n->prev->next = n->next;
        if (n->next != 0) {
            n->next->prev = n->prev;
        }
        n->prev = 0;
    }
    func_088AA8(n->rec39C);
    func_088AA8(n->rec3A0);
    if (n->b3CA != 0) {
        p = n->slots;
        i = 0;
        do {
            func_0845F8(*p, 1);
            i++;
            *p = 0;
            p++;
        } while (i < 7);
    }
}
