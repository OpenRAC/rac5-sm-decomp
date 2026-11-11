extern int func_107390(void *rec);
extern void func_106278(void);
extern int func_0EFDF8(void);
extern void func_0F0168(int value);

extern int D_001B5D2C;

struct Rec {
    int pad[30];
    int f78;
};

int func_1061c0(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_107390(rec);
        D_001B5D2C = v;
        if (D_001B5D2C != 0) {
            if (*(int *)(D_001B5D2C + 0x18) == 0)
                func_106278();
        }
    }
    if (D_001B5D2C == 0) {
        D_001B5D2C = func_0EFDF8();
        if (D_001B5D2C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_0F0168(D_001B5D2C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
