/* LEVEL_07:0x0BD818 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_0033E330;
extern int func_0BEBF0(void);
extern void func_089ED0(int, int);

void func_0BD818(void)
{
    Tab *tab = &D_0033E330;
    int index = func_0BEBF0();

    func_089ED0(tab->table[index], func_0BEBF0());
}
