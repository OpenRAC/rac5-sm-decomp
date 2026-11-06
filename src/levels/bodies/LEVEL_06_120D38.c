extern int func_121EF8(void *rec);
extern void func_120DF0(void);
extern int func_106F78(void);
extern void func_1072E8(int value);

extern int D_001F599C;

struct Rec {
    int pad[30];
    int f78;
};

int func_120d38(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_121EF8(rec);
        D_001F599C = v;
        if (D_001F599C != 0) {
            if (*(int *)(D_001F599C + 0x18) == 0)
                func_120DF0();
        }
    }
    if (D_001F599C == 0) {
        D_001F599C = func_106F78();
        if (D_001F599C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_1072E8(D_001F599C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
