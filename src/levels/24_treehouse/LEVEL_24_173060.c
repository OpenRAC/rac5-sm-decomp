/* LEVEL_24:0x173060 -- searches the record's word list for a1; on a hit, replaces the hit with the last entry and decrements the count. */
typedef struct {
    int w0;
    int count;
    int item[1];
} List;

typedef struct {
    char pad00[0x58];
    List *list;
} Obj;

void func_173060(Obj *o, int key)
{
    List *l;
    unsigned int i;

    l = o->list;
    for (i = 0; i < l->count; i++) {
        if (l->item[i] == key) {
            if (i < l->count - 1) {
                l->item[i] = l->item[l->count - 1];
            }
            l->count--;
            return;
        }
    }
}
