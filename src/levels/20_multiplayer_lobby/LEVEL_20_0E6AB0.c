/* LEVEL_20:0x0E6AB0 -- placement copy of LEVEL_16_114010.c: registers an object in a four-slot table and runs its setup calls. */
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

extern Slot114010 D_00202B68[4];
extern int func_0E7720(Obj114010 *o);
extern int func_0E5768(void);
extern Rec114010 *func_01EDC8(int k, int v);
extern void func_0F7B38(Obj114010 *o);
extern void func_0E5AD8(Obj114010 *o);
extern void func_032338(Obj114010 *o, int a);

int func_0E6AB0(Obj114010 *o)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;
    Slot114010 *p;

    if (o == 0)
        return 0;
    p = D_00202B68;
    for (j = 0; j < 4; j++, p++) {
        if (p->obj == o)
            return 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_00202B68[i].used == 0) {
            D_00202B68[i].used = 1;
            D_00202B68[i].obj = o;
            D_00202B68[i].val = func_0E7720(o);
            if (func_0E5768()) {
                for (k = 2; k < 16; k++) {
                    if (func_01EDC8(k, o->f0xF8)->f50) {
                        func_0F7B38(o);
                        break;
                    }
                }
            }
            func_0E5AD8(o);
            func_032338(o, 0);
            return 1;
        }
    }
    return 0;
}
