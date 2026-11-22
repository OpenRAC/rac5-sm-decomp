/* LEVEL_04:0x195C98 -- watches the object's event flags: counts up while the first slot is in state 7 and raises the event after 600 frames, and re-raises two events for every listed entry of the matching kind. */
typedef struct {
    char pad0[0x45];
    unsigned char state;
} Slot;

typedef struct {
    char pad0[0x44];
    unsigned char count;
} Table;

typedef struct {
    char pad0[0xE4];
    int wE4;
} Part;

typedef struct {
    char pad0[0x24];
    unsigned int kind;
} Type;

typedef struct {
    char pad0[0x40];
    Type *type;
    char pad44[0x58 - 0x44];
    Part *part;
} Entry;

typedef struct {
    Entry *entry;
    int pad4;
} Pair;

typedef struct {
    char pad0[0x58];
    Pair *pairs;
} Holder;

typedef struct {
    char pad0[0x20];
    Holder *holder;
} Info;

typedef struct Obj Obj;
struct Obj {
    char pad0[0x54];
    Info *info;
    char pad58[0x70 - 0x58];
    float timer;
};

typedef struct {
    char pad0[0x54];
    Info *info;
} Root;

extern Slot *D_00221E2C;
extern char D_0023CA88[];
extern char D_0023CAA0[];
extern char D_0023CAB8[];

extern int func_0B8C50(int id);
extern int func_08B220(int n);
extern int func_0B9390(int id);
extern void func_0B9328(char *tab, int id, unsigned int v);
extern int func_176790(Entry *e);

void func_195C98(Obj *o)
{
    Slot **first;
    Root *root;
    Holder *h;
    Entry *e;
    int i;
    int n;
    Pair *p;

    first = (Slot **)o->info;
    if (func_0B8C50(-0x54) == 0) {
        if ((*first)->state == 7) {
            if ((func_08B220(0x10) & 0xE000) != 0) {
                func_0B9390(-0x54);
            } else {
                o->timer = o->timer + 1.0f;
                if (600.0f <= o->timer) {
                    func_0B9328(D_0023CA88, -0x54, 0xFFFFFFFFu);
                }
            }
        }
    }
    root = (Root *)D_00221E2C;
    if (root == 0) {
        return;
    }
    if (func_0B8C50(-0x75) == 0 || func_0B8C50(-0x76) == 0) {
        h = root->info->holder;
        n = ((Table *)h->pairs)->count;
        for (i = 0; i < n; i++) {
            p = h->pairs + i;
            e = p->entry;
            if (e->type->kind == 0xDAC6B9D8) {
                do {
                    if (func_0B8C50(-0x75) == 0 && func_176790(e) != 0) {
                        func_0B9328(D_0023CAA0, -0x75, 0xFFFFFFFFu);
                    }
                } while (0);
                do {
                    if (func_0B8C50(-0x76) == 0 && e->part->wE4 != 0) {
                        func_0B9328(D_0023CAB8, -0x76, 0xFFFFFFFFu);
                    }
                } while (0);
            }
        }
    }
}
