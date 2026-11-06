extern int func_129B08(void *rec);
extern void func_128A00(void);
extern int func_10E670(void);
extern void func_10E9E0(int value);

extern int D_0021F41C;

struct Rec {
    int pad[30];
    int f78;
};

int func_128948(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_129B08(rec);
        D_0021F41C = v;
        if (D_0021F41C != 0) {
            if (*(int *)(D_0021F41C + 0x18) == 0)
                func_128A00();
        }
    }
    if (D_0021F41C == 0) {
        D_0021F41C = func_10E670();
        if (D_0021F41C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_10E9E0(D_0021F41C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
