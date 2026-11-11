/* LEVEL_24:0x0E7B28 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_001E7558[];
extern void func_099398(void *o, void *p);
extern void func_0E7760(void *o, int *tbl);
extern int func_0DD4D8(int a);
extern int func_0F4710(int a);
extern int func_0F6E68(int a);
extern int func_0F6460(int a);

void func_0E7B28(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_099398(o, D_001E7558);
    o->f_2C = p;
    o->f_1C = func_0DD4D8(tbl[0]);
    o->f_20 = func_0F4710(tbl[1]);
    o->f_24 = func_0F6E68(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0F6460(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0E7760(o, tbl);
}
