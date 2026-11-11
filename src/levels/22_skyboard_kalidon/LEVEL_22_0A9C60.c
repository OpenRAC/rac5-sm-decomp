/* LEVEL_22:0x0A9C60 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_0027E5F0;
extern int func_0AB040(void);
extern void func_079218(int, int);

void func_0A9C60(void)
{
    Tab *tab = &D_0027E5F0;
    int index = func_0AB040();

    func_079218(tab->table[index], func_0AB040());
}
