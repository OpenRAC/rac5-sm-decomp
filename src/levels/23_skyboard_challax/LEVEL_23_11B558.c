extern int func_11C718(void *rec);
extern void func_11B610(void);
extern int func_1031D0(void);
extern void func_103540(int value);

extern int D_001DA19C;

struct Rec {
    int pad[30];
    int f78;
};

int func_11b558(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_11C718(rec);
        D_001DA19C = v;
        if (D_001DA19C != 0) {
            if (*(int *)(D_001DA19C + 0x18) == 0)
                func_11B610();
        }
    }
    if (D_001DA19C == 0) {
        D_001DA19C = func_1031D0();
        if (D_001DA19C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_103540(D_001DA19C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
