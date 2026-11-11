/* LEVEL_10:0x1A8550 -- sets flag 0x1000 on the object and runs the pre-call; type 5 also sets the flag group 0xC30 and succeeds, type 6 succeeds, every other type returns the result of the follow-up. */
struct O;

extern void func_074660(void);
extern int func_1A85C0(struct O *o);

int func_1A8550(char *object)
{
    *(unsigned int *)(object + 0x64) |= 0x1000;
    func_074660();
    if (*(unsigned char *)(object + 0x45) == 5) {
        *(unsigned int *)(object + 0x64) |= 0xC30;
        return 1;
    }
    if (*(unsigned char *)(object + 0x45) == 6) {
        return 1;
    }
    return func_1A85C0((struct O *)object);
}
