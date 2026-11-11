/* LEVEL_23:0x0E2E00 -- placement copy of LEVEL_01_0EFF18.c: stores four resolved handles and a trailing value into the object, then runs a final helper. */

typedef struct Obj01_0EFF18 {
    unsigned char pad_00[0x1C];
    int f_1C;
    int f_20;
    int f_24;
    int f_28;
    void *f_2C;
} Obj01_0EFF18;

extern char D_001E9958[];
extern void func_096860(void *o, void *p);
extern void func_0E2A38(void *o, int *tbl);
extern int func_0DA9A0(int a);
extern int func_0EF9E8(int a);
extern int func_0F2140(int a);
extern int func_0F1738(int a);

void func_0E2E00(Obj01_0EFF18 *o, void *p, int *tbl) {
    int v;

    func_096860(o, D_001E9958);
    o->f_2C = p;
    o->f_1C = func_0DA9A0(tbl[0]);
    o->f_20 = func_0EF9E8(tbl[1]);
    o->f_24 = func_0F2140(tbl[2]);
    if (tbl[3] != 0) {
        v = func_0F1738(tbl[3]);
    } else {
        v = -1;
    }
    o->f_28 = v;
    func_0E2A38(o, tbl);
}
