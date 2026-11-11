/* LEVEL_16:0x0AA820 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00276970;
extern int func_0AC020(void);
extern void func_079340(int, int);

void func_0AA820(void)
{
    Tab *tab = &D_00276970;
    int index = func_0AC020();

    func_079340(tab->table[index], func_0AC020());
}
