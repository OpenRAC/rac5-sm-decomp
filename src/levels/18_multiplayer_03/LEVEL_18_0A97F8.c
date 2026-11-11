/* LEVEL_18:0x0A97F8 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00276CF0;
extern int func_0AAFF8(void);
extern void func_078CC0(int, int);

void func_0A97F8(void)
{
    Tab *tab = &D_00276CF0;
    int index = func_0AAFF8();

    func_078CC0(tab->table[index], func_0AAFF8());
}
