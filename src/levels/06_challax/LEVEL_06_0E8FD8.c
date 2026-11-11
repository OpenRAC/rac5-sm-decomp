/* LEVEL_06:0x0E8FD8 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_00205658[];
extern void func_09A2F0(void *o, void *p);
extern void func_0E8C10(void *o, int *tbl);
extern int func_0E0A88(int a);
extern int func_0F5BC0(int a);
extern int func_0F8318(int a);
extern int func_0F7910(int a);

void func_0E8FD8(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_09A2F0(o, D_00205658);
    o->f_2C = p;
    o->f_1C = func_0E0A88(tbl[0]);
    o->f_20 = func_0F5BC0(tbl[1]);
    o->f_24 = func_0F8318(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0F7910(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0E8C10(o, tbl);
}
