/* LEVEL_01:0x0EFF18 -- stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_002167D8[];
extern void func_09FB18(void *o, void *p);
extern void func_0EFB50(void *o, int *tbl);
extern int func_0E6188(int a);
extern int func_0FCB00(int a);
extern int func_0FF258(int a);
extern int func_0FE850(int a);

void func_0EFF18(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_09FB18(o, D_002167D8);
    o->f_2C = p;
    o->f_1C = func_0E6188(tbl[0]);
    o->f_20 = func_0FCB00(tbl[1]);
    o->f_24 = func_0FF258(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0FE850(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0EFB50(o, tbl);
}
