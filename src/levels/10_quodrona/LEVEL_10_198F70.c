/* LEVEL_10:0x198F70 -- unlinks the object's item from its list, releases up to three attached handles and, when the item has its flag byte set, tears down its two embedded records. */
typedef struct Item {
    struct Item *next;
    char pad04[0x10];
    struct Item *prev;
    char pad18[0x10];
    void *h28;
    char pad2C[0x14];
    void *h40;
    void *h44;
    char pad48[0x18];
    unsigned char flag;
    char pad61[3];
    char recs[2][0x5C];
} Item;

typedef struct {
    char pad00[0x58];
    Item *item;
} Obj;

extern void func_07CCA0(void *p, int a1);
extern void func_108F08(char *record);

void func_198F70(Obj *o)
{
    Item *it = o->item;
    char *rec;
    int i;
    int n;

    if (it->prev != 0) {
        it->prev->next = it->next;
        if (it->next != 0) {
            it->next->prev = it->prev;
        }
        it->prev = 0;
    }
    if (it->h28 != 0) {
        func_07CCA0(it->h28, 1);
    }
    if (it->h40 != 0) {
        func_07CCA0(it->h40, 1);
    }
    if (it->h44 != 0) {
        func_07CCA0(it->h44, 1);
    }
    if (it->flag != 0) {
        rec = it->recs[0];
        for (i = 0; i < 2; i = n) {
            func_108F08(rec);
            n = i + 1;
            rec += 0x5C;
        }
    }
}
