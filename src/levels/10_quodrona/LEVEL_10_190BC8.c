/* LEVEL_10:0x190BC8 -- placement copy of LEVEL_08_1B7FF8.c: state 0 waits for the flag, marks the parent's owner, enters state 1 and wakes the group's four members; state 1 counts the timer down by 1.0 and runs the two finishing calls when it runs out. */
typedef struct {
    char pad00[0x64];
    unsigned int flags;
} Owner;

typedef struct {
    char *kid[4];
    char pad10[0x18 - 0x10];
    Owner *owner;
    unsigned char count;
} Group;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Group *group;
    char pad58[0x64 - 0x58];
    unsigned int flags;
    char pad68[0x70 - 0x68];
    float timer;
} Obj;

extern int func_15B348(char *object);
extern int func_15B370(char *a0, int a1, int a2, int a3);
extern void func_190EC8(char *a0);
extern void func_190CC8(Obj *p);

void func_190BC8(Obj *o)
{
    Group *g;
    char **k;
    int i;

    switch (o->state) {
    case 0:
        if ((o->flags & 0x200000) != 0) {
            g = o->group;
            if (g->owner != 0) {
                g->owner->flags |= 0x200000;
            }
            o->state = 1;
            if (g->count != 0) {
                k = g->kid;
                for (i = 3; i >= 0; i--) {
                    if (*k != 0) {
                        if (func_15B348(*k) != 0) {
                            func_15B370(*k, 2, 0, 0);
                        }
                    }
                    k++;
                }
            }
        }
        break;
    case 1:
        o->timer -= 1.0f;
        if (o->timer <= 0.0f) {
            func_190EC8((char *)o);
            func_190CC8(o);
        }
        break;
    }
}
