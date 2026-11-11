/* LEVEL_17:0x0A9D60 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00267C70;
extern int func_0AB560(void);
extern void func_079DB8(int, int);

void func_0A9D60(void)
{
    Tab *tab = &D_00267C70;
    int index = func_0AB560();

    func_079DB8(tab->table[index], func_0AB560());
}
