/* LEVEL_18:0x199F48 -- placement copy of FRONTEND_025D90.c: gathers the usable records of one or several record chains into a freshly built table and stores its bounds. */
struct Node;

struct List {
    struct Node **array;
    unsigned int count;
};

struct Pack {
    struct List first;
    struct List second;
    unsigned int lo;
    unsigned int hi;
};

struct Holder {
    unsigned int lo;
    unsigned int hi;
    int *single;
    int **chains;
    int count;
};

extern void *malloc(unsigned int size);
extern int func_199E78(int *chain);
extern void func_199EC0(int *chain, struct List *list, unsigned int *lo, unsigned int *hi);
extern int **func_199C10(struct Pack *pack, int count);

void func_199F48(struct Holder *h)
{
    struct Pack pack;
    int **q;
    int n;
    unsigned int size;

    if (h->chains != 0) {
        q = h->chains;
        n = 0;
        if (*q != 0) {
            do {
                n += func_199E78(*q);
                q++;
            } while (*q != 0);
        }
    } else {
        n = func_199E78(h->single);
    }
    h->count = n;
    size = n << 2;
    pack.first.array = malloc(size);
    pack.second.array = malloc(size);
    pack.first.count = 0;
    pack.second.count = 0;
    pack.lo = 0xFFFFFFFF;
    pack.hi = 0;
    if (h->chains != 0) {
        q = h->chains;
        if (*q != 0) {
            do {
                func_199EC0(*q, &pack.first, &pack.lo, &pack.hi);
                q++;
            } while (*q != 0);
        }
    } else {
        func_199EC0(h->single, &pack.first, &pack.lo, &pack.hi);
    }
    h->chains = func_199C10(&pack, n);
    h->lo = pack.lo;
    h->hi = pack.hi;
}
