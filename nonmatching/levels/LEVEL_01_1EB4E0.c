/* USA LEVEL_01.REL:0x1EB4E0, 84-byte candidate (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Node {
    int w0;
    char *tail;
    int w8;
    int wC;
    char data[8];
} Node;

extern void *malloc(unsigned int n);
extern void *memset(void *s, int c, unsigned int n);
extern void func_1EB480(Node *p);

Node *func_1EB4E0(void)
{
    Node *p;

    p = malloc(0x18);
    if (p == 0)
        func_1EB480(p);
    memset(p, 0, 0x18);
    p->tail = p->data;
    return p;
}
