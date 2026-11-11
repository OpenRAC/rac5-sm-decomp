/* LEVEL_18:0x112DC8 -- placement copy of LEVEL_16_114010.c: registers an object in a four-slot table and runs its setup calls. */
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

extern Slot114010 D_002DF988[4];
extern int func_113B38(Obj114010 *o);
extern int func_111978(void);
extern Rec114010 *func_021710(int k, int v);
extern void func_17EEB0(Obj114010 *o);
extern void func_111D20(Obj114010 *o);
extern void func_0368E0(Obj114010 *o, int a);

int func_112DC8(Obj114010 *o)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;
    Slot114010 *p;

    if (o == 0)
        return 0;
    p = D_002DF988;
    for (j = 0; j < 4; j++, p++) {
        if (p->obj == o)
            return 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_002DF988[i].used == 0) {
            D_002DF988[i].used = 1;
            D_002DF988[i].obj = o;
            D_002DF988[i].val = func_113B38(o);
            if (func_111978()) {
                for (k = 2; k < 16; k++) {
                    if (func_021710(k, o->f0xF8)->f50) {
                        func_17EEB0(o);
                        break;
                    }
                }
            }
            func_111D20(o);
            func_0368E0(o, 0);
            return 1;
        }
    }
    return 0;
}
