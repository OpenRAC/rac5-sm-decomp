/* LEVEL_08:0x0FB960 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_00260458[];
extern void func_0AA418(void *o, void *p);
extern void func_0FB598(void *o, int *tbl);
extern int func_0F1158(int a);
extern int func_108548(int a);
extern int func_10BE80(int a);
extern int func_10A298(int a);

void func_0FB960(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_0AA418(o, D_00260458);
    o->f_2C = p;
    o->f_1C = func_0F1158(tbl[0]);
    o->f_20 = func_108548(tbl[1]);
    o->f_24 = func_10BE80(tbl[2]);
    if (tbl[3] != 0) {
        v = func_10A298(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0FB598(o, tbl);
}
