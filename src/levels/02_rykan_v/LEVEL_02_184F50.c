/* LEVEL_02:0x184F50 -- switches a global mode to 2 when the current state is 5. */
typedef struct {
    char pad00[0x1C6C];
    int state;
} State;

extern State *D_00208C2C;
extern int D_0021C944;

void func_184F50(void)
{
    if (D_00208C2C->state == 5) {
        D_0021C944 = 2;
    }
}
