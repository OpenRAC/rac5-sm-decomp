typedef struct {
    char pad[0x0C];
    float angle;
} Body;

typedef struct {
    char  pad[0x08];
    void *f8;
} Node;

typedef struct {
    Node *p;
} Holder;

extern Holder D_00220000[];

extern int func_10EEE0(void *, int, void *, Body *, float);

void func_10EEA0(int a, Body *b, void *c)
{
    char buf[16];
    Node *n = D_00220000[-0x2F6].p;

    func_10EEE0(c ? c : buf, a, n->f8, b, b->angle);
}
