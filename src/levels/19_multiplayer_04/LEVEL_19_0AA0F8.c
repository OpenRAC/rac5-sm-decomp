/* LEVEL_19:0x0AA0F8 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00276AF0;
extern int func_0AB8F8(void);
extern void func_079828(int, int);

void func_0AA0F8(void)
{
    Tab *tab = &D_00276AF0;
    int index = func_0AB8F8();

    func_079828(tab->table[index], func_0AB8F8());
}
