/* LEVEL_15:0x0F5650 -- initializes the slot table and runs the init handler of each registered slot. */
typedef struct {
    int id;
    int type;
    int arg;
} Slot;

typedef struct {
    int pad0;
    void (*init)(int arg, void *state);
    int pad8;
} Handler;

typedef struct {
    char pad0[0x9C];
} State;

typedef struct {
    char pad0[0x41038];
    Slot slots[0x400];
} Big;

extern Big D_002A8B58;
extern Slot D_002E9B90[0x400];
extern State D_002C2B90[];
extern Handler D_0016F368[];
extern char D_0016F168[];

extern int func_0D4D38(unsigned int hash, void *name, int i);
extern void func_0F54E8(Slot *slots, int i);
void func_0F5650(void)
{
    int i;
    int j;
    Handler *h;
    Slot *q;
    State *st;
    for (j = 0; j < 0x400; j++) {
        D_002A8B58.slots[j].id = func_0D4D38(0xE217458D, D_0016F168, j);
        D_002A8B58.slots[j].type = -1;
        D_002A8B58.slots[j].arg = 0;
    }
    for (i = 0; i < 5; i++)
        func_0F54E8(D_002E9B90, i);
    for (i = 0; i < 0x400; i++) {
        q = &D_002E9B90[i];
        if (q->type != -1) {
            st = &D_002C2B90[i];
            h = &D_0016F368[q->type];
            h->init(q->arg, st);
        }
    }
}
