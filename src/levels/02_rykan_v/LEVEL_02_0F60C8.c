/* LEVEL_02:0x0F60C8 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_0022B758[];
extern void func_0A6408(void *o, void *p);
extern void func_0F5D00(void *o, int *tbl);
extern int func_0ECB18(int a);
extern int func_102CB0(int a);
extern int func_105408(int a);
extern int func_104A00(int a);

void func_0F60C8(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_0A6408(o, D_0022B758);
    o->f_2C = p;
    o->f_1C = func_0ECB18(tbl[0]);
    o->f_20 = func_102CB0(tbl[1]);
    o->f_24 = func_105408(tbl[2]);
    if (tbl[3] != 0) {
        v = func_104A00(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0F5D00(o, tbl);
}
