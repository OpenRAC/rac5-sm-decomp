/* LEVEL_10:0x19B168 -- unlinks the record's list node, releases its attached handle and triggers the stop effect while its flag byte is set. */
typedef struct Link {
    struct Link *next;
    char pad_04[0x10];
    struct Link *prev;
} Link;

typedef struct {
    char pad_00[0x98];
    unsigned char active;
    char pad_99[0x0F];
    Link node;
    char pad_c0[4];
    char *handle;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *rec;
} Obj;

extern void func_07CCA0(char *handle, int flag);
extern void func_000E18(int index, int first, int second);
extern void func_002DB8(void);

void func_19B168(Obj *o)
{
    Rec *rec = o->rec;
    Link *v = &rec->node;
    Link *p = v->prev;
    Link *q;

    if (p != 0) {
        p->next = v->next;
        q = v->next;
        if (q == 0) {
            v->prev = 0;
        } else {
            q->prev = v->prev;
            v->prev = 0;
        }
    }
    if (rec->handle != 0) {
        func_07CCA0(rec->handle, 1);
        rec->handle = 0;
    }
    if (rec->active != 0) {
        func_000E18(0, (int)func_002DB8, 0);
    }
}
