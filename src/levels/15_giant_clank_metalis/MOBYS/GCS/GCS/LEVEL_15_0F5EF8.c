/* LEVEL_15:0x0F5EF8 -- allocates a record through a helper, links it to the argument and a table address, and returns it; a second entry forwards to a flush helper. */

struct Rec {
    int w_00;
    int w_04;
    char *w_08;
    void *w_0C;
};

extern char D_0016F170[];
extern char D_000F5EB8[];

struct Rec *func_0D4FE0(int a0, int a1, char *a2, int a3);
void func_0F51C8(void);

struct Rec *func_0F5EF8(void *a0)
{
    struct Rec *rec;

    rec = func_0D4FE0(0x10, 0, D_0016F170, 1001);
    rec->w_0C = a0;
    rec->w_08 = D_000F5EB8;
    rec->w_04 = 0;
    return rec;
}

void func_0F5F48(void)
{
    func_0F51C8();
}
