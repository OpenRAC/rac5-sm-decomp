/* USA LEVEL_16.REL:0x14ADC0 (22 November 2026): exact linked bytes under gnu-
 * ee-trial-divpad, held.
 * Its form stays out of the accepted set because a placement declares
 * func_14D3C8 unlike its accepted definition; and declares func_14D498 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    int target;
    char pad4[0x18 - 4];
    unsigned char flags;
    char pad19[0x1C - 0x19];
} Slot;

typedef struct St St;
typedef void *(*Probe)(int target);

struct St {
    Slot slots[12];
    char pad150[0x150 - 12 * 0x1C];
    Probe probes[12];
    char pad180[0x408 - 0x180];
    unsigned char count;
    char extra[1];
};

typedef struct {
    char pad0[0x14];
    unsigned char b14;
} Info;

typedef struct Obj Obj;
struct Obj {
    char pad0[0x54];
    Info *info;
    St *st;
};

extern void func_14D498(Obj *o);
extern int func_14D3C8(Obj *o, float dt);
extern void func_14DA88(St *st, Info *info, void *p);
extern void *func_14B280(float dt, St *st, char *buf, unsigned char *flag);
extern void func_14B678(char *buf, void *p);
extern void func_14C1E8(char *buf, void *p, char *extra, int flag);
extern void func_14B3F0(char *buf, void *p);

void func_14ADC0(Obj *o, float dt)
{
    char buf[0x180];
    void *list[12];
    unsigned char flag;
    Info *info;
    St *st;
    void *p;
    void *r;
    unsigned int n;
    unsigned int i;
    unsigned int j;

    info = o->info;
    st = o->st;
    func_14D498(o);
    if (func_14D3C8(o, dt) == 0) {
        return;
    }
    flag = 0;
    if (st->count != 0) {
        n = 0;
        i = 0;
        do {
            if (st->slots[i].target != 0 && (st->slots[i].flags & 1) != 0 && st->probes[i] != 0) {
                p = st->probes[i](st->slots[i].target);
                if (p != 0) {
                    for (j = 0; j < n; j++) {
                        if (list[j] == p) {
                            break;
                        }
                    }
                    if (j == n) {
                        func_14DA88(st, info, p);
                        list[n++] = p;
                    }
                }
            }
            i++;
        } while (i < 12);
    }
    r = func_14B280(dt, st, buf, &flag);
    if (r == 0) {
        return;
    }
    func_14B678(buf, r);
    if (info->b14 != 0) {
        func_14C1E8(buf, r, st->extra, flag);
    }
    func_14B3F0(buf, r);
}
