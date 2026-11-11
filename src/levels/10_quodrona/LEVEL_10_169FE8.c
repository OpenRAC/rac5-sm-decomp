typedef struct {
    char   pad[0x38];
    float  f38;
} Node;

typedef struct {
    char  pad[0x54];
    Node *node;
    int  *slots;
} Obj;

void func_169FE8(Obj *o, int v)
{
    Node *n = o->node;
    int *slot = o->slots;
    int i = 0;

    do {
        if (*slot == 0) {
            *slot = v;
            *(float *)(slot + 4) = n->f38 * 30.0f;
            return;
        }
        slot++;
        i++;
    } while (i < 4);
}
