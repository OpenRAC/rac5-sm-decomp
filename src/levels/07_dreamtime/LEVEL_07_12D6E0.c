extern int func_12E8A0(void *rec);
extern void func_12D798(void);
extern int func_1139F8(void);
extern void func_113D68(int value);

extern int D_0021B09C;

struct Rec {
    int pad[30];
    int f78;
};

int func_12d6e0(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_12E8A0(rec);
        D_0021B09C = v;
        if (D_0021B09C != 0) {
            if (*(int *)(D_0021B09C + 0x18) == 0)
                func_12D798();
        }
    }
    if (D_0021B09C == 0) {
        D_0021B09C = func_1139F8();
        if (D_0021B09C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_113D68(D_0021B09C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
