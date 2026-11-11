extern int func_0EF6C8(void *rec);
extern void func_0EE5C0(void);
extern int func_0D61E8(void);
extern void func_0D6558(int value);

extern int D_0015B71C;

struct Rec {
    int pad[30];
    int f78;
};

int func_0ee508(struct Rec *rec)
{
    int v;

    if (rec != 0) {
        if (rec->f78 != 0)
            return rec->f78 == 1;
        v = func_0EF6C8(rec);
        D_0015B71C = v;
        if (D_0015B71C != 0) {
            if (*(int *)(D_0015B71C + 0x18) == 0)
                func_0EE5C0();
        }
    }
    if (D_0015B71C == 0) {
        D_0015B71C = func_0D61E8();
        if (D_0015B71C == 0) {
            rec->f78 = 2;
            return 0;
        }
    }
    func_0D6558(D_0015B71C);
    if (rec != 0)
        rec->f78 = 1;
    return 1;
}
