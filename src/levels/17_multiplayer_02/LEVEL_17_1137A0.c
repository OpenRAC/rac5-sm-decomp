/* LEVEL_17:0x1137A0 -- placement copy of LEVEL_16_114010.c: registers an object in a four-slot table and runs its setup calls. */
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

extern Slot114010 D_002D0908[4];
extern int func_114510(Obj114010 *o);
extern int func_112350(void);
extern Rec114010 *func_021A48(int k, int v);
extern void func_171EC0(Obj114010 *o);
extern void func_1126F8(Obj114010 *o);
extern void func_0378F0(Obj114010 *o, int a);

int func_1137A0(Obj114010 *o)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;
    Slot114010 *p;

    if (o == 0)
        return 0;
    p = D_002D0908;
    for (j = 0; j < 4; j++, p++) {
        if (p->obj == o)
            return 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_002D0908[i].used == 0) {
            D_002D0908[i].used = 1;
            D_002D0908[i].obj = o;
            D_002D0908[i].val = func_114510(o);
            if (func_112350()) {
                for (k = 2; k < 16; k++) {
                    if (func_021A48(k, o->f0xF8)->f50) {
                        func_171EC0(o);
                        break;
                    }
                }
            }
            func_1126F8(o);
            func_0378F0(o, 0);
            return 1;
        }
    }
    return 0;
}
