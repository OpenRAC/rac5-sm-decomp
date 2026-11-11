/* LEVEL_08:0x0C66A8 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00377CB0;
extern int func_0C7AB8(void);
extern void func_08FE50(int, int);

void func_0C66A8(void)
{
    Tab *tab = &D_00377CB0;
    int index = func_0C7AB8();

    func_08FE50(tab->table[index], func_0C7AB8());
}
