/* LEVEL_21:0x10E358 -- placement copy of LEVEL_15_10E358.c: per-frame update of every actor of every scene node: publishes the actor's palette, poses its three animation slots, restores the default palette and dispatches the actor's type handler. */
typedef struct {
    char pad00[0x30];
} Slot;

typedef struct {
    char pad00[0xCC];
} Anim;

typedef struct {
    char pad00[0x250];
} Cfg;

typedef struct {
    char pad00[0xB8];
    char *palette;
    int wBC;
} Model;

typedef struct Actor Actor;

typedef struct {
    char pad00[0x14];
    void (*update)(Actor *a);
    char pad18[4];
} Handler;

typedef struct {
    Handler *list;
    int w4;
} Table;

struct Actor {
    Actor *next;
    int index;
    char pad08[0x244 - 0x08];
    Slot slots[3];
    char pad2D4[0x2D4 - 0x244 - 0x90];
    int *type;
    char pad2D8[4];
    Model *model;
};

typedef struct {
    Actor *first;
} Group;

typedef struct Node Node;

struct Node {
    Node *next;
    char pad04[0x0C - 0x04];
    Group *group;
};

typedef struct {
    char pad00[8];
    Node *head;
} Ctx;

typedef struct {
    char *palette;
} Gfx;

extern Gfx D_0014AEF4;
extern int D_00183860;
extern char D_001838B0[];
extern char D_001858B0[];
extern Table D_00170198[];
extern Anim D_002EFB80[];
extern Cfg D_002F0360[];

extern void func_0702B8(void);
extern void func_06D880(Model *m);
extern void func_0FF5C0(Slot *o, Anim *a, Cfg *cfg, char *base);
extern void func_070308(void);

void func_10E358(Ctx *ctx)
{
    Node *n;
    Actor *a;
    Model *m;
    Handler *h;
    int k;
    char *pal = D_001838B0;

    for (n = ctx->head; n != 0; n = n->next) {
        for (a = n->group->first; a != 0; a = a->next) {
            m = a->model;
            D_0014AEF4.palette = m->palette;
            func_0702B8();
            func_06D880(m);
            for (k = 0; k < 3; k++) {
                func_0FF5C0(&a->slots[k], &D_002EFB80[k], &D_002F0360[k], D_001858B0);
            }
            func_070308();
            m->wBC = D_00183860;
            D_0014AEF4.palette = pal;
            h = D_00170198[*a->type].list + a->index;
            if (h->update != 0) {
                h->update(a);
            }
        }
    }
}
