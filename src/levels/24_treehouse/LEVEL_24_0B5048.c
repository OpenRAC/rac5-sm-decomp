/* LEVEL_24:0x0B5048 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_002F48F0;
extern int func_0B6458(void);
extern void func_0810A0(int, int);

void func_0B5048(void)
{
    Tab *tab = &D_002F48F0;
    int index = func_0B6458();

    func_0810A0(tab->table[index], func_0B6458());
}
