extern void func_039AE8(void);
extern void func_039B40(char *state, unsigned int enabled);
extern void func_039A38(char *state, unsigned int enabled);
extern void func_039AA0(char *state, unsigned int enabled);
extern void func_039B98(char *state, unsigned int enabled);

void func_039C40(char *state, unsigned int enabled)
{
    func_039AE8();
    func_039B40(state, enabled);
    func_039A38(state, enabled);
    func_039AA0(state, enabled);
    func_039B98(state, enabled);
}
