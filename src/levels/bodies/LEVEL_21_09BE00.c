/* LEVEL_21:0x09BE00 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00240270;
extern int func_09D1D8(void);
extern void func_06C4E0(int, int);

void func_09BE00(void)
{
    Tab *tab = &D_00240270;
    int index = func_09D1D8();

    func_06C4E0(tab->table[index], func_09D1D8());
}
