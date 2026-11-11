/* LEVEL_07:0x198B08 -- three-state callback on the byte at +0x45: state 0 waits for the first helper to report done, state 1 probes the global record at +0x30 and the current record, state 2 waits for the probe and rearms state 1. */
typedef struct Link {
    char *target;
    char *pending;
    void *probe;
} Link;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0x54 - 0x46];
    Link *link;
} Obj;

extern unsigned char D_0024AA40[];
extern int func_186B60(char *object);
extern void func_1D1F50(char *object);
extern int func_086800(void *a, void *b);
extern unsigned int func_003450(void);

void func_198B08(Obj *o)
{
    Link *link = o->link;
    unsigned char state = o->state;

    if (state == 0) {
        if (func_186B60(link->pending) == 0) {
            func_1D1F50(link->target);
            o->state = 1;
        }
    } else if (state == 1) {
        void *probe = link->probe;
        unsigned char *base = D_0024AA40;

        if (func_086800(probe, base + 0x30) == 0) {
            if (func_086800(probe, (char *)func_003450() + 0x30) == 0) {
                link->target[0x45] = 3;
                o->state = 2;
            }
        }
    } else if (state == 2) {
        unsigned char *base = D_0024AA40;

        if (func_086800(link->probe, base + 0x30) != 0) {
            func_1D1F50(link->target);
            o->state = 1;
        }
    }
}
