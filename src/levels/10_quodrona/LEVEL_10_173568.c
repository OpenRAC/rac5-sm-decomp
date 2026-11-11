extern void func_04BA40(int);
extern void func_069E18(int, int);

void func_173568(char *record)
{
    func_04BA40(*(int *)(record + 4));
    func_069E18(*(int *)(record + 4), 0);
}