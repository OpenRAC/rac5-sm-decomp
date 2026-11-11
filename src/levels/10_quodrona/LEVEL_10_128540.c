extern int func_129700(void *rec);
extern void func_1285F8(void);
extern int func_10EBC0(void);
extern void func_10EF30(int value);

extern int D_0020F9FC;

struct Rec {
    int pad[30];
    int f78;
};

int func_128540(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_129700(rec);
        D_0020F9FC = v;
        if (D_0020F9FC != 0) {
            if (*(int *)(D_0020F9FC + 0x18) == 0)
                func_1285F8();
        }
    }
    if (D_0020F9FC == 0) {
        D_0020F9FC = func_10EBC0();
        if (D_0020F9FC == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_10EF30(D_0020F9FC);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
