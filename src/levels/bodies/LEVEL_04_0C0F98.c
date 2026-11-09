/* LEVEL_04:0x0C0F98 -- passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00343230;
extern int func_0C23A8(void);
extern void func_08B098(int, int);

void func_0C0F98(void)
{
    Tab *tab = &D_00343230;
    int index = func_0C23A8();

    func_08B098(tab->table[index], func_0C23A8());
}
