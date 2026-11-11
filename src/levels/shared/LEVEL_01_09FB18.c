struct Link { int f0, f4, f8; struct Link *next, *prev; int value, f18; };
struct LinkHead { struct LinkHead *next, *prev; };
void func_09FB18(struct Link *node, int value)
{
    struct LinkHead *self = (struct LinkHead *)&node->next;
    node->value = value;
    node->f0 = 0;
    node->f4 = 0;
    node->f8 = 0;
    node->f18 = 0;
    self->prev = self;
    self->next = self;
}
