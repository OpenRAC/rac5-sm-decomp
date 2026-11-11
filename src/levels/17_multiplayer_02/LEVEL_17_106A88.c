extern int func_107C58(void *rec);
extern void func_106B40(void);
extern int func_0F0BD0(void);
extern void func_0F0F40(int value);

extern int D_001A7EAC;

struct Rec {
    int pad[30];
    int f78;
};

int func_106a88(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_107C58(rec);
        D_001A7EAC = v;
        if (D_001A7EAC != 0) {
            if (*(int *)(D_001A7EAC + 0x18) == 0)
                func_106B40();
        }
    }
    if (D_001A7EAC == 0) {
        D_001A7EAC = func_0F0BD0();
        if (D_001A7EAC == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_0F0F40(D_001A7EAC);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
