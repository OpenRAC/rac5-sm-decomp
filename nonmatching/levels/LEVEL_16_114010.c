/* LEVEL_16.REL:0x114010: reviewed 244-byte candidate, held for ABI review.
 * Registers an object in a four-slot table and runs its setup calls.
 * pinned C with gnu-ee-trial links 244/244 bytes and is byte-exact at this and
 * 4 other USA placements, but the prototypes disagree.
 * It declares func_114D80 returning int with (pointer), but the accepted
 * LEVEL_16_114D80.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    char pad0[0xF8];
    int f0xF8;
} Obj114010;

typedef struct {
    char pad0[0x50];
    int f50;
} Rec114010;

typedef struct {
    Obj114010 *obj;
    int used;
    int pad8;
    int val;
    char pad10[0x10];
} Slot114010;

extern Slot114010 D_002DF608[4];
extern int func_114D80(Obj114010 *o);
extern int func_112BC0(void);
extern Rec114010 *func_0220C8(int k, int v);
extern void func_17E878(Obj114010 *o);
extern void func_112F68(Obj114010 *o);
extern void func_038050(Obj114010 *o, int a);

int func_114010(Obj114010 *o)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;
    Slot114010 *p;

    if (o == 0)
        return 0;
    p = D_002DF608;
    for (j = 0; j < 4; j++, p++) {
        if (p->obj == o)
            return 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_002DF608[i].used == 0) {
            D_002DF608[i].used = 1;
            D_002DF608[i].obj = o;
            D_002DF608[i].val = func_114D80(o);
            if (func_112BC0()) {
                for (k = 2; k < 16; k++) {
                    if (func_0220C8(k, o->f0xF8)->f50) {
                        func_17E878(o);
                        break;
                    }
                }
            }
            func_112F68(o);
            func_038050(o, 0);
            return 1;
        }
    }
    return 0;
}
