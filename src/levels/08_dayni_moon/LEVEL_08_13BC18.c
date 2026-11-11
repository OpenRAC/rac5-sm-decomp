extern int func_13CDD8(void *rec);
extern void func_13BCD0(void);
extern int func_121148(void);
extern void func_1214B8(int value);

extern int D_0024FC5C;

struct Rec {
    int pad[30];
    int f78;
};

int func_13bc18(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_13CDD8(rec);
        D_0024FC5C = v;
        if (D_0024FC5C != 0) {
            if (*(int *)(D_0024FC5C + 0x18) == 0)
                func_13BCD0();
        }
    }
    if (D_0024FC5C == 0) {
        D_0024FC5C = func_121148();
        if (D_0024FC5C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_1214B8(D_0024FC5C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
