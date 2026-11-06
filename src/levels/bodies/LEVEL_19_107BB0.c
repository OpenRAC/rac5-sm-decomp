extern int func_108D80(void *rec);
extern void func_107C68(void);
extern int func_0F1C08(void);
extern void func_0F1F78(int value);

extern int D_001B5A2C;

struct Rec {
    int pad[30];
    int f78;
};

int func_107bb0(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_108D80(rec);
        D_001B5A2C = v;
        if (D_001B5A2C != 0) {
            if (*(int *)(D_001B5A2C + 0x18) == 0)
                func_107C68();
        }
    }
    if (D_001B5A2C == 0) {
        D_001B5A2C = func_0F1C08();
        if (D_001B5A2C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_0F1F78(D_001B5A2C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
