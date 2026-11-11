extern int func_0E0428(void *rec);
extern void func_0DF310(void);
extern int func_0CB7A0(void);
extern void func_0CBB10(int value);

extern int D_00116F8C;

struct Rec {
    int pad[30];
    int f78;
};

int func_0df258(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_0E0428(rec);
        D_00116F8C = v;
        if (D_00116F8C != 0) {
            if (*(int *)(D_00116F8C + 0x18) == 0)
                func_0DF310();
        }
    }
    if (D_00116F8C == 0) {
        D_00116F8C = func_0CB7A0();
        if (D_00116F8C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_0CBB10(D_00116F8C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
