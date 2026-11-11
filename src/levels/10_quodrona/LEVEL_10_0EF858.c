/* LEVEL_10:0x0EF858 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_0021F758[];
extern void func_0A0BF8(void *o, void *p);
extern void func_0EF490(void *o, int *tbl);
extern int func_0E75C8(int a);
extern int func_0FC440(int a);
extern int func_0FEB98(int a);
extern int func_0FE190(int a);

void func_0EF858(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_0A0BF8(o, D_0021F758);
    o->f_2C = p;
    o->f_1C = func_0E75C8(tbl[0]);
    o->f_20 = func_0FC440(tbl[1]);
    o->f_24 = func_0FEB98(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0FE190(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0EF490(o, tbl);
}
