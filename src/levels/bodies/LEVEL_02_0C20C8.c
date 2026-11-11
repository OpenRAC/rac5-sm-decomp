/* LEVEL_02:0x0C20C8 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_0033FF30;
extern int func_0C34A0(void);
extern void func_08E730(int, int);

void func_0C20C8(void)
{
    Tab *tab = &D_0033FF30;
    int index = func_0C34A0();

    func_08E730(tab->table[index], func_0C34A0());
}
