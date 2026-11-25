/* LEVEL_17:0x143E98 -- placement copy of LEVEL_16_14ADC0.c: per-frame update of a pickup collector: gathers the distinct targets reported by the up to twelve active slots' callbacks, then builds the frame record from them and runs the follow-up passes. */
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

extern void func_146570(float dt, Obj *o);
extern int func_1464A0(Obj *o, float dt);
extern void func_146B60(St *st, Info *info, void *p);
extern unsigned int func_144358(float dt, St *st, char *buf, unsigned char *flag);
extern void func_144750(char *buf, unsigned int n);
extern void func_1452C0(char *buf, unsigned int n, char *extra, int flag);
extern void func_1444C8(char *buf, unsigned int n);

void func_143E98(Obj *o, float dt)
{
    char buf[0x180];
    void *list[12];
    unsigned char flag;
    Info *info;
    St *st;
    void *p;
    unsigned int r;
    unsigned int n;
    unsigned int i;
    unsigned int j;

    info = o->info;
    st = o->st;
    func_146570(dt, o);
    if (func_1464A0(o, dt) == 0) {
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
                        func_146B60(st, info, p);
                        list[n++] = p;
                    }
                }
            }
            i++;
        } while (i < 12);
    }
    r = func_144358(dt, st, buf, &flag);
    if (r == 0) {
        return;
    }
    func_144750(buf, r);
    if (info->b14 != 0) {
        func_1452C0(buf, r, st->extra, flag);
    }
    func_1444C8(buf, r);
}
