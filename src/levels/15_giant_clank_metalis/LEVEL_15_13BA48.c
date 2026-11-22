/* LEVEL_15:0x13BA48 -- releases the slot's current object, allocates a new one for the owner and links it into the owner's list, storing it in the slot (or clearing the slot when the allocation fails). */
typedef struct Link {
    struct Link *prev;
    struct Link *next;
} Link;

typedef struct X {
    char pad[0xC4];
    unsigned int refs;
    char p[12];
    Link node;
} X;

typedef struct Y {
    char p[12];
    Link **head;
} Y;

extern void func_13B338(X *);
extern X *func_13B390(Y *, float, float);

int func_13BA48(void *unused, X **slot, Y *owner, float a, float b)
{
    X *x;
    Link **head;

    if (*slot) {
        func_13B338(*slot);
    }
    head = owner->head;
    x = func_13B390(owner, a, b);
    if (x) {
        Link *n = &x->node;
        Link *p = *head;
        Link *next = p->next;

        n->prev = p;
        n->next = next;
        next->prev = n;
        p->next = n;
        x->refs++;
        *slot = x;
    } else {
        *slot = 0;
    }
}
