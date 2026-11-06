extern int func_1213A0(void *rec);
extern void func_120298(void);
extern int func_1079A8(void);
extern void func_107D18(int value);

extern int D_001D7A1C;

struct Rec {
    int pad[30];
    int f78;
};

int func_1201e0(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_1213A0(rec);
        D_001D7A1C = v;
        if (D_001D7A1C != 0) {
            if (*(int *)(D_001D7A1C + 0x18) == 0)
                func_120298();
        }
    }
    if (D_001D7A1C == 0) {
        D_001D7A1C = func_1079A8();
        if (D_001D7A1C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_107D18(D_001D7A1C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
