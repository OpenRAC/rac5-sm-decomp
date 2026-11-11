/* LEVEL_23:0x0B2550 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_002F9E70;
extern int func_0B3930(void);
extern void func_07DCC0(int, int);

void func_0B2550(void)
{
    Tab *tab = &D_002F9E70;
    int index = func_0B3930();

    func_07DCC0(tab->table[index], func_0B3930());
}
