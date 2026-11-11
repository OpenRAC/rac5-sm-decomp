/* LEVEL_09:0x0B8A68 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_003101B0;
extern int func_0B9E40(void);
extern void func_0847B8(int, int);

void func_0B8A68(void)
{
    Tab *tab = &D_003101B0;
    int index = func_0B9E40();

    func_0847B8(tab->table[index], func_0B9E40());
}
