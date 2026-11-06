extern int func_131C50(void *rec);
extern void func_130B48(void);
extern int func_116CF0(void);
extern void func_117060(int value);

extern int D_0021BD5C;

struct Rec {
    int pad[30];
    int f78;
};

int func_130a90(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_131C50(rec);
        D_0021BD5C = v;
        if (D_0021BD5C != 0) {
            if (*(int *)(D_0021BD5C + 0x18) == 0)
                func_130B48();
        }
    }
    if (D_0021BD5C == 0) {
        D_0021BD5C = func_116CF0();
        if (D_0021BD5C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_117060(D_0021BD5C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
