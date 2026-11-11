/* LEVEL_05:0x163EB0 -- placement copy of LEVEL_02_184F50.c: switches a global mode to 2 when the current state is 5. */
typedef struct {
    char pad00[0x1C6C];
    int state;
} State;

extern State *D_001E332C;
extern int D_001F6884;

void func_163EB0(void)
{
    if (D_001E332C->state == 5) {
        D_001F6884 = 2;
    }
}
