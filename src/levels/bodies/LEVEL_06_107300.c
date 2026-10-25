typedef struct {
    char  pad[0x0C];
    float angle;
} Body;

typedef struct {
    char  pad[0x08];
    void *f8;
} Node;

typedef struct {
    Node *p;
} Holder;

extern Holder D_001F59A8;
extern int func_107340(void *, int, void *, Body *, float);

void func_107300(int a, Body *b, void *c)
{
    char buf[16];
    Node *n = D_001F59A8.p;

    func_107340(c ? c : buf, a, n->f8, b, b->angle);
}
