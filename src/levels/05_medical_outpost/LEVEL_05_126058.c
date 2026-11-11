extern int func_127218(void *rec);
extern void func_126110(void);
extern int func_10CDE8(void);
extern void func_10D158(int value);

extern int D_001F5E1C;

struct Rec {
    int pad[30];
    int f78;
};

int func_126058(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_127218(rec);
        D_001F5E1C = v;
        if (D_001F5E1C != 0) {
            if (*(int *)(D_001F5E1C + 0x18) == 0)
                func_126110();
        }
    }
    if (D_001F5E1C == 0) {
        D_001F5E1C = func_10CDE8();
        if (D_001F5E1C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_10D158(D_001F5E1C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
