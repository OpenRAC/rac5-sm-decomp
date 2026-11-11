extern int func_137D20(void *rec);
extern void func_136C18(void);
extern int func_11BF10(void);
extern void func_11C280(int value);

extern int D_002201BC;

struct Rec {
    int pad[30];
    int f78;
};

int func_136b60(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_137D20(rec);
        D_002201BC = v;
        if (D_002201BC != 0) {
            if (*(int *)(D_002201BC + 0x18) == 0)
                func_136C18();
        }
    }
    if (D_002201BC == 0) {
        D_002201BC = func_11BF10();
        if (D_002201BC == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_11C280(D_002201BC);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
