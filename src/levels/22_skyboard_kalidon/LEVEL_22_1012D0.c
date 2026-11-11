extern int func_102490(void *rec);
extern void func_101388(void);
extern int func_0EC710(void);
extern void func_0ECA80(int value);

extern int D_00165D7C;

struct Rec {
    int pad[30];
    int f78;
};

int func_1012d0(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_102490(rec);
        D_00165D7C = v;
        if (D_00165D7C != 0) {
            if (*(int *)(D_00165D7C + 0x18) == 0)
                func_101388();
        }
    }
    if (D_00165D7C == 0) {
        D_00165D7C = func_0EC710();
        if (D_00165D7C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_0ECA80(D_00165D7C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
