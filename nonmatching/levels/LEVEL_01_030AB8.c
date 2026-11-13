/* USA LEVEL_01.REL:0x030AB8, 128-byte candidate.
 * Measured pinned/gnu-ee-trial: 128 linked bytes; first differing word +0xC.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
struct Context { unsigned char pad[16]; void *owned; unsigned int pad2; char *other; };
extern void func_084890(void *);
extern int func_1C49D0(char *, char *);
extern int func_014058(int, int, int, float);
int func_030AB8(struct Context *input, char *input_argument, int action)
{
    char *argument = input_argument;
    struct Context *context = input;
    int result;
    if (context->owned) func_084890(context->owned);
    if (context->other) func_1C49D0(context->other, argument);
    if (!action) result = 1;
    else result = func_014058((int)argument, 0, 1, 0.75f);
    return result;
}
