/* LEVEL_07:0x179A20 -- placement copy of LEVEL_02_184F50.c: switches a global mode to 2 when the current state is 5. */
typedef struct {
    char pad00[0x1C6C];
    int state;
} State;

extern State *D_002082AC;
extern int D_0021BD9C;

void func_179A20(void)
{
    if (D_002082AC->state == 5) {
        D_0021BD9C = 2;
    }
}
