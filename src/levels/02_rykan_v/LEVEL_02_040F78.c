extern void func_040E20(void);
extern void func_040E78(char *state, int flag);
extern void func_040D50(char *state, int flag);
extern void func_040DD8(char *state, int flag);
extern void func_040ED0(char *state, int flag);

void func_040F78(char *state, int flag)
{
    func_040E20();
    func_040E78(state, flag);
    func_040D50(state, flag);
    func_040DD8(state, flag);
    func_040ED0(state, flag);
}
