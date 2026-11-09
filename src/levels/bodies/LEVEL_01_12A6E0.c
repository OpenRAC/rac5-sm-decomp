/* LEVEL_01:0x12A6E0 -- placement copy of LEVEL_02_130A90.c. */
extern int func_12B8A0(void *rec);
extern void func_12A798(void);
extern int func_1109A8(void);
extern void func_110D18(int value);

extern int D_00206D9C;

struct Rec {
    int pad[30];
    int f78;
};

int func_12A6E0(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_12B8A0(rec);
        D_00206D9C = v;
        if (D_00206D9C != 0) {
            if (*(int *)(D_00206D9C + 0x18) == 0)
                func_12A798();
        }
    }
    if (D_00206D9C == 0) {
        D_00206D9C = func_1109A8();
        if (D_00206D9C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_110D18(D_00206D9C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
