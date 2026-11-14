/* LEVEL_05:0x18ACD0 -- walks the object's child list; every child with its first flag set is enabled and, depending on its model id, handed to one of two handlers. */
typedef struct {
    char pad00[0x24];
    int id;
} Model;

typedef struct Child {
    char pad00[0x40];
    Model *model;
    char pad44[0x64 - 0x44];
    unsigned int flags;
} Child;

typedef struct {
    Child *child[72];
    unsigned int count;
} List;

typedef struct {
    char pad00[0x58];
    List *list;
} Obj;

extern void func_079CF8(void *object, int flag);
extern void func_1530B8(void *value);
extern void func_154958(void *value);

void func_18ACD0(Obj *o)
{
    List *l;
    unsigned int i;

    l = o->list;
    for (i = 0; i < l->count; i++) {
        if ((l->child[i]->flags & 1) != 0) {
            func_079CF8(l->child[i], 1);
            if (l->child[i]->model->id == 0x114CD815) {
                func_1530B8(l->child[i]);
            } else if (l->child[i]->model->id == 0x4109ABC7) {
                func_154958(l->child[i]);
            }
        }
    }
}
