/* LEVEL_10:0x176980 -- refreshes the object, then answers state 4 while its reciprocal-length factor is under 0.04, otherwise -1. */
typedef struct Self Self;

extern void func_173718(Self *self);
extern void func_175680(char *o);
extern float func_1755D8(char *o);

int func_176980(void *unused, char *o)
{
    func_173718((Self *)o);
    func_175680(o);
    if (func_1755D8(o) < 0.04f) {
        return 4;
    }
    return -1;
}
