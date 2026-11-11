/* LEVEL_06:0x0B60B8 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_003157B0;
extern int func_0B7490(void);
extern void func_080C78(int, int);

void func_0B60B8(void)
{
    Tab *tab = &D_003157B0;
    int index = func_0B7490();

    func_080C78(tab->table[index], func_0B7490());
}
