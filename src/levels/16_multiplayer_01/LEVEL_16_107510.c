extern int func_1086E0(void *rec);
extern void func_1075C8(void);
extern int func_0F15C0(void);
extern void func_0F1930(int value);

extern int D_001B48AC;

struct Rec {
    int pad[30];
    int f78;
};

int func_107510(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_1086E0(rec);
        D_001B48AC = v;
        if (D_001B48AC != 0) {
            if (*(int *)(D_001B48AC + 0x18) == 0)
                func_1075C8();
        }
    }
    if (D_001B48AC == 0) {
        D_001B48AC = func_0F15C0();
        if (D_001B48AC == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_0F1930(D_001B48AC);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
