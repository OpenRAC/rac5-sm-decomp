/* LEVEL_01:0x089D40 -- builds the pooled node lists for a set of groups and resets the matrix tables. */
typedef struct Node Node;
struct Node {
    Node *prev;
    Node *next;
    void *slot;
    int a;
    Node *head;
    int b;
};

typedef struct {
    int size;
    Node *prev;
    Node *next;
} Group;

typedef struct {
    int size;
    unsigned count;
} Spec;

typedef struct {
    float m[16];
} Mat;

extern int D_001F6278;
extern Group *D_0023F038;
extern char *D_001F6274;
extern Mat D_0023B7F0;
extern int D_0023F030;
extern int D_0023F034;
extern char D_0020FEB8[];
extern void *func_10F7A0(int, int, char *, int);
extern void *func_10F6F0(int, int, int, char *, int);

void ANIM_Init__FPC21ANIM_CursorPoolConfigUi(Spec *specs, int n)
{
    int i;
    unsigned j;
    Node *head;
    unsigned count;
    int size;
    int prod;
    int step;
    int total;
    Group *g;
    Group *g2;
    int size2;
    Node *h2;
    Node *nd;
    Node *p;
    Node *tail;
    Node *after;
    Node *arr;
    char *block;
    Mat *mm;

    D_001F6278 = n;
    D_0023F038 = func_10F7A0(n * 12, 7, D_0020FEB8, 0x653);
    total = 0;
    for (i = 0; i < n; i++) {
        g = &D_0023F038[i];
        size = specs[i].size;
        g->size = size;
        head = (Node *)&g->prev;
        count = specs[i].count;
        head->next = head;
        g->prev = head;
        prod = size * count;
        total += prod;
        arr = func_10F7A0(count * 0x18, 7, D_0020FEB8, 0x667);
        for (j = 0; j < count; j++) {
            nd = &arr[j];
            nd->a = 0;
            nd->b = 0;
            nd->head = (Node *)&g->prev;
            tail = g->prev;
            after = tail->next;
            nd->prev = tail;
            nd->next = after;
            after->prev = nd;
            tail->next = nd;
        }
    }
    block = func_10F6F0(0x10, total * 0x70, 7, D_0020FEB8, 0x679);
    for (i = 0; i < n; i++) {
        g2 = &D_0023F038[i];
        size2 = g2->size;
        h2 = (Node *)&g2->prev;
        for (p = h2->next; p != h2; p = p->next) {
            *(char **)((char *)p + 8) = block;
            block += size2 * 0x70;
        }
    }
    for (i = 0; i < 0x80; i++) {
        *(float *)(D_001F6274 + i * 64 + 0) = 1.0f;
        *(float *)(D_001F6274 + i * 64 + 4) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 8) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 12) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 16) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 20) = 1.0f;
        *(float *)(D_001F6274 + i * 64 + 24) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 28) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 32) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 36) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 40) = 1.0f;
        *(float *)(D_001F6274 + i * 64 + 44) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 48) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 52) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 56) = 0.0f;
        *(float *)(D_001F6274 + i * 64 + 60) = 1.0f;
    }
    mm = &D_0023B7F0;
    D_0023F030 = 0;
    mm->m[0] = 1.0f;
    D_0023F034 = 0;
    mm->m[1] = 0.0f;
    mm->m[2] = 0.0f;
    mm->m[3] = 0.0f;
    mm->m[4] = 0.0f;
    mm->m[5] = 1.0f;
    mm->m[6] = 0.0f;
    mm->m[7] = 0.0f;
    mm->m[8] = 0.0f;
    mm->m[9] = 0.0f;
    mm->m[10] = 1.0f;
    mm->m[11] = 0.0f;
    mm->m[12] = 0.0f;
    mm->m[13] = 0.0f;
    mm->m[14] = 0.0f;
    mm->m[15] = 1.0f;
}
