/* LEVEL_05:0x0B9D60 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_003148F0;
extern int func_0BB138(void);
extern void func_085758(int, int);

void func_0B9D60(void)
{
    Tab *tab = &D_003148F0;
    int index = func_0BB138();

    func_085758(tab->table[index], func_0BB138());
}
