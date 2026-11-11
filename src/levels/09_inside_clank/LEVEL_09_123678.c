extern int func_124838(void *rec);
extern void func_123730(void);
extern int func_109D98(void);
extern void func_10A108(int value);

extern int D_001F089C;

struct Rec {
    int pad[30];
    int f78;
};

int func_123678(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_124838(rec);
        D_001F089C = v;
        if (D_001F089C != 0) {
            if (*(int *)(D_001F089C + 0x18) == 0)
                func_123730();
        }
    }
    if (D_001F089C == 0) {
        D_001F089C = func_109D98();
        if (D_001F089C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_10A108(D_001F089C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
