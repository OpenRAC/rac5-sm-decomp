/* LEVEL_03:0x0BB5A0 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_003438B0;
extern int func_0BC978(void);
extern void func_087C58(int, int);

void func_0BB5A0(void)
{
    Tab *tab = &D_003438B0;
    int index = func_0BC978();

    func_087C58(tab->table[index], func_0BC978());
}
