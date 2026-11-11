/* LEVEL_05:0x0EC058 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_002056D8[];
extern void func_09E0D0(void *o, void *p);
extern void func_0EBC90(void *o, int *tbl);
extern int func_0E3BF8(int a);
extern int func_0F8C40(int a);
extern int func_0FB398(int a);
extern int func_0FA990(int a);

void func_0EC058(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_09E0D0(o, D_002056D8);
    o->f_2C = p;
    o->f_1C = func_0E3BF8(tbl[0]);
    o->f_20 = func_0F8C40(tbl[1]);
    o->f_24 = func_0FB398(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0FA990(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0EBC90(o, tbl);
}
