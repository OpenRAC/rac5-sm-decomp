/* LEVEL_19:0x159030 -- picks a follow-up state from a mode byte and the target's type tag. */
typedef struct {
    char pad0[0x24];
    int tag;
} Info;

typedef struct {
    char pad0[0x40];
    Info *info;
} Node;

typedef struct {
    char pad0[0x10];
    int key;
} Ref;

typedef struct {
    char pad0[0x45];
    unsigned char mode;
    char pad1[0xE];
    Ref *ref;
} Obj;

extern void *func_113490(int key);
extern Node *func_16A280(void *p);
extern int func_15AD50(void *p);
extern int func_177A40(void *p);
extern void func_158EE0(Obj *obj, int n);

void func_159030(Obj *obj)
{
    void *v;
    Node *w;

    v = func_113490(obj->ref->key);
    w = func_16A280(v);
    switch (obj->mode) {
    case 0:
        if (w != 0 && w->info->tag == 0x653D696A) {
            func_158EE0(obj, 3);
        } else if (func_15AD50(v)) {
            func_158EE0(obj, 2);
        } else if (func_177A40(v)) {
            func_158EE0(obj, 1);
        }
        break;
    case 1:
        if (w != 0 && w->info->tag == 0x653D696A) {
            func_158EE0(obj, 3);
        } else if (func_15AD50(v)) {
            func_158EE0(obj, 2);
        } else if (!func_177A40(v)) {
            func_158EE0(obj, 0);
        }
        break;
    case 2:
        if (w != 0 && w->info->tag == 0x653D696A) {
            func_158EE0(obj, 3);
        } else if (!func_15AD50(v)) {
            func_158EE0(obj, 0);
        }
        break;
    case 3:
        if (w == 0 || w->info->tag != 0x653D696A) {
            func_158EE0(obj, 0);
        }
        break;
    }
}
