/* LEVEL_06:0x13A7A0 -- placement copy of LEVEL_01_1440A8.c: tears down the object's data block: runs the record cleanup, unlinks the block from its doubly linked list and, when the flag byte is set, releases the first N of its resource slots (clearing the global handle when it is the shared one). */
typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct Data {
    char pad_00[4];
    Link link;
    char pad_1C[0x5C - 0x1C];
    int *slots[12];
    char pad_8C;
    unsigned char flag;
} Data;

extern int *D_001E5298;
extern const unsigned int D_0020B434;
extern void func_13C670(char *record);
extern void func_090550(int *address);

static __inline__ void Unlink(Link *l)
{
    if (l->prev != 0) {
        l->prev->next = l->next;
        if (l->next != 0) {
            l->next->prev = l->prev;
        }
        l->prev = 0;
    }
}

static __inline__ void Release(int **slot)
{
    if (*slot != 0) {
        if (*slot == D_001E5298) {
            D_001E5298 = 0;
        } else {
            func_090550(*slot);
        }
        *slot = 0;
    }
}

void func_13A7A0(char *obj)
{
    Data *d;
    unsigned int i;

    d = *(Data **)(obj + 0x58);
    func_13C670(obj);
    Unlink(&d->link);
    if (d->flag != 0) {
        for (i = 0; i < D_0020B434; i++) {
            Release(&d->slots[i]);
        }
    }
}
