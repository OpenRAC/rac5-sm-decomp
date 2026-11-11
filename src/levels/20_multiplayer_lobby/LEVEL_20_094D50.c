/* LEVEL_20:0x094D50 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_0019A1B0;
extern int func_096550(void);
extern void func_066FB0(int, int);

void func_094D50(void)
{
    Tab *tab = &D_0019A1B0;
    int index = func_096550();

    func_066FB0(tab->table[index], func_096550());
}
