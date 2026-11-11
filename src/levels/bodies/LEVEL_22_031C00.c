extern void func_031AA8(void);
extern void func_031B00(char *state, unsigned int enabled);
extern void func_0319F8(char *state, unsigned int enabled);
extern void func_031A60(char *state, unsigned int enabled);
extern void func_031B58(char *state, unsigned int enabled);

void func_031C00(char *state, unsigned int enabled)
{
    func_031AA8();
    func_031B00(state, enabled);
    func_0319F8(state, enabled);
    func_031A60(state, enabled);
    func_031B58(state, enabled);
}
