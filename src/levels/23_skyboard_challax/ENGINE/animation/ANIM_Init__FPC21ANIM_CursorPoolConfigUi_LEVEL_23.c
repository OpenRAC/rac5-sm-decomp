/* LEVEL_23:0x07FBC8 -- placement copy of LEVEL_01_089D40.c: builds the pooled node lists for a set of groups and resets the matrix tables. */
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

extern int D_001C9678;
extern Group *D_002104B8;
extern char *D_001C9674;
extern Mat D_0020CC70;
extern int D_002104B0;
extern int D_002104B4;
extern char D_001E3038[];
extern void *func_101FC8(int, int, char *, int);
extern void *func_101F18(int, int, int, char *, int);

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

    D_001C9678 = n;
    D_002104B8 = func_101FC8(n * 12, 7, D_001E3038, 0x653);
    total = 0;
    for (i = 0; i < n; i++) {
        g = &D_002104B8[i];
        size = specs[i].size;
        g->size = size;
        head = (Node *)&g->prev;
        count = specs[i].count;
        head->next = head;
        g->prev = head;
        prod = size * count;
        total += prod;
        arr = func_101FC8(count * 0x18, 7, D_001E3038, 0x667);
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
    block = func_101F18(0x10, total * 0x70, 7, D_001E3038, 0x679);
    for (i = 0; i < n; i++) {
        g2 = &D_002104B8[i];
        size2 = g2->size;
        h2 = (Node *)&g2->prev;
        for (p = h2->next; p != h2; p = p->next) {
            *(char **)((char *)p + 8) = block;
            block += size2 * 0x70;
        }
    }
    for (i = 0; i < 0x80; i++) {
        *(float *)(D_001C9674 + i * 64 + 0) = 1.0f;
        *(float *)(D_001C9674 + i * 64 + 4) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 8) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 12) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 16) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 20) = 1.0f;
        *(float *)(D_001C9674 + i * 64 + 24) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 28) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 32) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 36) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 40) = 1.0f;
        *(float *)(D_001C9674 + i * 64 + 44) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 48) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 52) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 56) = 0.0f;
        *(float *)(D_001C9674 + i * 64 + 60) = 1.0f;
    }
    mm = &D_0020CC70;
    D_002104B0 = 0;
    mm->m[0] = 1.0f;
    D_002104B4 = 0;
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
