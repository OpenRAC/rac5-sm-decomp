/* LEVEL_10:0x0BCB00 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00331E30;
extern int func_0BDEE0(void);
extern void func_088168(int, int);

void func_0BCB00(void)
{
    Tab *tab = &D_00331E30;
    int index = func_0BDEE0();

    func_088168(tab->table[index], func_0BDEE0());
}
