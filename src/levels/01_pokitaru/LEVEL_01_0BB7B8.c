/* LEVEL_01:0x0BB7B8 -- placement copy of LEVEL_04_0C0F98.c: passes a table entry chosen by one query together with
   the result of a second query. */
typedef struct {
    char pad[0x20];
    int table[1];
} Tab;

extern Tab D_00328A30;
extern int func_0BCB90(void);
extern void func_087E00(int, int);

void func_0BB7B8(void)
{
    Tab *tab = &D_00328A30;
    int index = func_0BCB90();

    func_087E00(tab->table[index], func_0BCB90());
}
